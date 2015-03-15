<?php
// $Id:: qadcommon.qad.inc 3736 2015-01-12 02:05:54Z mjz                       $

/**
 * @file
 *
 * Implement the theme functions that are provided by this module
 */

/**
 * Return HTML for the qad_menus
 *
 * @param $variables
 *   An associated array containing
 *     - #children: an associated array containing the menu items
 *
 * @return
 *   HTML string
 */
function theme_qadmenu($variables) {
  $output = '<div class="btn-group-right">' . $variables['children'] . '</div>';

  return $output;
}

/**
 * Return HTML for an qad menu item
 *
 * @param $variables
 *   An associated array containing
 *     - title: The menu item button's icon
 *     - icon_class: The menu item button's icon
 *     - btn_class: The menu item button's bootstrap class
 *     - attributes: used directly by drupal_attributes
 */
function theme_qad_menu_item($variables) {
  $output = '<div class="btn-group pull-right control-btn">' . _qadcommon_generate_menu_item_link($variables) . '</div>';

  return $output;
}

/**
 * Return HTML for a qad drop down menu item.
 *
 * @param $variables
 *   An associated array containing
 *     - title: The menu item button's icon
 *     - icon_class: The menu item button's icon
 *     - btn_class: The menu item button's bootstrap class
 *     - attributes: used directly by drupal_attributes
 *     - dropdown_items: an associated array containing the dropdown menu items.
 */
function theme_qad_menu_dropdown_item($variables) {
  drupal_add_js(libraries_get_path('bootstrap')  . '/assets/jquery-migrate-1.2.1.min.js');
  drupal_add_js(libraries_get_path('bootstrap')  . '/js/bootstrap.min.js');
  extract($variables);

  // First generate the dropdown menu button and it will trigger the dropdown menu
  $item_title = '<i ' . drupal_attributes(array('class' => $icon_class)) . '></i> ' . $title . ' <span class="caret"></span>';
  $item_attributes = $attributes + array('class' => $btn_class);
  $output = l(
    $item_title,
    $attributes['href'],
    array(
      'html' => TRUE,
      'attributes' => $item_attributes,
      'external' => TRUE,
    )
  );

  // Build the drop down menu items
  $dropdown_list = array();
  foreach ($dropdown_items as $item) {
    $item_title = '<i class="' . implode(' ', $item['icon_class']) . '"></i> ' . $item['title'];
    if (!isset($dropdown_list[$item['group']])) {
      $dropdown_list[$item['group']] = '';
    }
    $dropdown_list[$item['group']] .=
      '<li class="' . implode(' ', $item['class']) . '">' .
      l($item_title, $item['link'], array('html' => TRUE, 'external' => $item['popup'])) .
      '</li>';
  }

  $output .= '<ul class="dropdown-menu">' . implode('<li class="divider"></li>', $dropdown_list) . '</ul>';

  $output = '<div class="btn-group pull-right control-btn">' . $output . '</div>';

  return $output;
}

/**
 * Generate a button.
 *
 * @param $variables
 *   An associated array containing
 *     - title: The menu item button's icon
 *     - icon_class: The menu item button's icon
 *     - btn_class: The menu item button's bootstrap class
 *     - attributes: used directly by drupal_attributes
 * @param $external_flag
 *   A flag indicating if the link is external link. It's used by @see qadcommon_gen_button
 */
function _qadcommon_generate_menu_item_link($variables, $external_flag = FALSE) {
  module_load_include('inc', 'qadcommon', 'qadcommon.basic');

  extract($variables);

  // Set the external flag based on the item type
  if (isset($popup)) {
    $external_flag = $popup;
  }

  if (is_array($icon_class)) {
    $icon_class = implode(' ', $icon_class);
  }

  if (is_array($btn_class)) {
    $btn_class = implode(' ', $btn_class);
  }

  $output = qadcommon_gen_button($title, $attributes['href'], $icon_class, $btn_class, $external_flag);

  return $output;
}