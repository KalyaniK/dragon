<?php
// $Id: qadcommon.basic.inc 3783 2015-03-11 06:51:44Z j5w $

/**
* @file
* Common used QAD Functions/Utilities
*/


// Constants that specify the qad menu item type
define('QAD_MENU_NORMAL_ITEM', 1);
define('QAD_MENU_DROPDOWN_ITEM', 2);
define('QAD_MENU_POPUP_ITEM', 3);

/**
 * Generate modal structure.
 *
 * @param $title Title of the modal
 * @param $content Rendable array of the modal content.
 * @param $buttons Rendable array for the buttons
 * @param $id The HTML id for the whole modal section.
 * @param $classes The HTML classes for the whole modal section.
 * @param $note The extra note for the modal.
 */
function qadcommon_gen_modal($title, $content, $buttons, $note = NULL, $id = NULL, $classes = NULL){
  $modal = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array('bootstrap'),
    ),
    '#attached' => array(
      'js' => array(
        libraries_get_path('bootstrap')  . '/assets/jquery-migrate-1.2.1.min.js',
        libraries_get_path('bootstrap')  . '/js/bootstrap.min.js',
        drupal_get_path('module', 'qadcommon') . '/js/qadcommon_modal_popup.js',
      ),
      'css' => array(
        drupal_get_path('module', 'qadcommon') . '/css/modal.css',
      ),
    ),
    'modal' => array(
      '#type' => 'container',
      '#attributes' => array(
        'id' => $id,
        'class' => array('qad-modal modal hide fade', $classes),
        'tabindex' => '-1',
        'role' => 'dialog',
        'data-backdrop' => 'static',
        'aria-labelledby' => $id . 'Label',
        'aria-hidden' => 'true',
      ),
      'header' => array(
        '#type' => 'container',
        '#attributes' => array(
          'class' => array('modal-header'),
        ),
        'close_button' => array(
          '#type' => 'html_tag',
          '#tag' => 'button',
          '#value' => '×',
          '#attributes' => array(
            'class' => array('close'),
            'type' => 'button',
            'data-dismiss' => 'modal',
            'aria-hidde' => 'true',
          ),
        ),
        'title' => array(
          '#type' => 'html_tag',
          '#tag' => 'h3',
          '#value' => $title,
        ),
      ),
      'body' => array(
        '#type' => 'container',
        '#attributes' => array(
          'class' => array('modal-body'),
        ),
        'content' => $content,
      ),
      'footer' => array(
        '#type' => 'container',
        '#attributes' => array(
          'class' => array('modal-footer'),
        ),
        'note' => array(
          '#type' => 'container',
          '#attributes' => array(
            'class' => array('modal-note'),
          ),
          'note' => array(
            '#type' => 'html_tag',
            '#tag' => 'span',
            '#value' => $note,
          ),
        ),
        'buttons' => $buttons,
      ),
    ),
  );

  return $modal;
}

/**
 * Generate confirm modal structure.
 *
 * @param $content Rendable array of the modal content.
 * @param $action_name The name of the action
 * @param $action_link The path when modal get confirmed. If it's null, the modal will dismiss after click OK
 * @param $executable A flag to indicate this modal is a confirm modal or notice modal, if TRUE, we'll provide 'OK' button
 */
function qadcommon_gen_confirm_modal($content, $action_name, $action_link, $executable){
  $title = $executable ? t('Confirm Action') . ': ' . $action_name : t('Cannot Execute Action') . ': ' . $action_name;
  $content = array(
    '#type' => 'markup',
    '#markup' => $content,
  );

  $buttons = array();
  if ($executable) {
    $buttons['yes'] = array(
      '#theme' => 'link',
      '#text' => t('OK'),
      '#path' => $action_link,
      '#options' => array(
        'attributes' => array(
          'class' => 'btn btn-danger modal-confirm-button',
        ),
        'html' => TRUE,
      )
    );

    if (is_null($action_link)) {
      $buttons['yes']['#options']['attributes']['data-dismiss'] = 'modal';
    }
  }

  $buttons['no'] = array(
    '#theme' => 'link',
    '#text' => t('Close'),
    '#path' => 'javascript:void(0);',
    '#options' => array(
      'html' => FALSE,
      'attributes' => array(
        'class' => 'btn',
        'data-dismiss' => 'modal',
      ),
    ),
  );

  $modal = qadcommon_gen_modal($title, $content, $buttons);

  return $modal;
}

/**
 * Generate a top right menu with variable actions.
 *
 * It will expose a new hook "hook_qad_menu" that allow other modules to add action items to the list.
 *
 * The hook_qad_menu has to be in the module.qadmenu.inc file and it will have one argument: menu_id. The return value
 * will be an array and each item will be look like the following.
 *   array(
 *     '#item_type' => 
 *        QAD_MENU_NORMAL_ITEM or
 *        QAD_MENU_DROPDOWN_ITEM or
 *        QAD_MENU_POPUP_ITEM
 *     '#title' => The title label
 *     '#icon_class' => The bootstrap icon array
 *     '#btn_class' => bootstrap btn classes
 *     '#attributes' => normal drupal_attributes
 *     '#weight' => the weight will decide the order of a set of menu items
 *     '#url' => When the type is QAD_MENU_NORMAL_ITEM
 *     '#dropdown_list' => array( When type is QAD_MENU_DROPDOWN_ITEM
 *       'title' 
 *       'link' 
 *       'icon_class' 
 *       'class' 
 *       'weight' 
 *       'group' => The group is used to differentiate the links under the dropdown list into several group
 *       'link' => Similar to the '#url'
 *       'popup' => This determines it's direct link or a trigger for a popup dialog,
 *     )
 *   )
 *
 * @param $menu_id
 *   The menu ID
 * @param @tokens
 *   Tokens that will be used to replace tokens inside links. Also can be used to pass variables to the hook_qad_menu so
 *   that the modules can decide what to return.
 *
 * @return
 *   A renderable array representing a qad menu.
 */
function qadcommon_get_qad_menu($menu_id, $tokens = array()) {
  // First get all the menu items from all the modules
  $items = module_invoke_all('qad_menu', $menu_id, $tokens);
  drupal_alter('qad_menu', $items, $menu_id, $tokens);

  $default_values = array(
    '#item_type' => QAD_MENU_NORMAL_ITEM,
    '#title' => '',
    '#icon_class' => array('icon-plus'),
    '#btn_class' => array('btn-info'),
    '#attributes' => array(),
    '#weight' => 0,
    '#url' => '',
  );

  $menu['#theme_wrappers'][] = 'qadmenu';

  // Give theme functions to each item
  foreach ($items as $item) {
    $item += $default_values;

    // Reverse the weight as we are using pull right
    $item['#weight'] = - $item['#weight'];

    switch ($item['#item_type']) {
      case QAD_MENU_NORMAL_ITEM:
        $item['#theme'] = 'qad_menu_item';

        // Replace the url tokens
        if (!empty($item['#url']) && !empty($tokens)) {
          $item['#url'] = strtr($item['#url'], $tokens);
        }
        $item['#attributes']['href'] = $item['#url'];
        break;

      case QAD_MENU_POPUP_ITEM:
        $item['#theme'] = 'qad_menu_item';
        $item['#attributes']['href'] = 'javascript:void(0);';
        $item['#popup'] = TRUE;
        break;

      case QAD_MENU_DROPDOWN_ITEM:
        $item['#theme'] = 'qad_menu_dropdown_item';
        $item['#attributes']['href'] = 'javascript:void(0);';
        $item['#attributes']['data-toggle'] = 'dropdown';
        $item['#btn_class'][] = 'btn btn-mini dropdown-toggle';
        $item['#icon_class'][] = 'icon-white';

        // Populate default values if they haven't set for the dropdown items
        foreach ($item['#dropdown_items'] as $key => $value) {
          $value += array(
            'group' => 'default',
            'weight' => 0,
            'popup' => FALSE );

          // Replace the token
          if (!$value['popup'] && !empty($value['link']) && !empty($tokens)) {
            $value['link'] = strtr($value['link'], $tokens);
          }
          $item['#dropdown_items'][$key] = $value;
        }

        usort($item['#dropdown_items'], 'drupal_sort_weight');
        break;
    }

    $menu[] = $item;
  }

  return $menu;
}

/**
 * Useful when implementing hook_preprocess_views_view_table().
 * Add bootstrap table classes and remove the 'views-table' class
 */
function qadcommon_update_views_table_classes($views_list, &$vars) {
  if (!is_array($views_list)) {
    $views_list = array($views_list);
  }
  if (in_array($vars['view']->name, $views_list)) {
    $views_class_index = array_search('views-table', $vars['classes_array']);
    unset($vars['classes_array'][$views_class_index]);
    $vars['classes_array'] = array_merge($vars['classes_array'], array('table', 'table-bordered', 'table-striped', 'table-condensed'));
  }
}

/**
 * Check if one record is in db. if it is, update it. if not, insert it.
 *
 * @param $table: target table name,
 *        $record: array(), the record to update or insert
 *        $primary_key: variable,primary key of the table
 */
function qadcommon_merge_record_in_db($table, $record, $primary_key) {
  db_merge($table)
    -> key(array($primary_key => $record[$primary_key]))
    -> fields($record)
    -> execute();
}

/**
 * Add no cache header to force page reload
 */
function qadcommon_add_no_cache_header() {
  if (!empty($_SERVER['HTTP_USER_AGENT']) && preg_match('/msie/i', $_SERVER['HTTP_USER_AGENT'])) {
    drupal_add_http_header('Cache-Control', 'no-cache'); // works for IE6+
  }
  else {
    drupal_add_http_header('Cache-Control', 'no-store'); // works for Firefox and other browsers
  }
}
