<?php

function dragon_project_create_page() {
  global $user;
  $node = (object) array('uid' => $user->uid, 'name' => (isset($user->name) ? $user->name : ''), 'type' => 'project', 'language' => LANGUAGE_NONE);

  $output = array(
    'navigation' => array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array('col-md-2'),
        'id' => array('dragon-quote-navigation'),
      ),
      'list' => dragon_project_create_page_list(),
    ),
    'content' => array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array('col-md-9 dragon-right'),
      ),
      'user-info' => dragon_project_info_bar($user),
      'form' => drupal_get_form('project' . '_node_form', $node),
    )
  );
  return $output;
}

function _dragon_project_sort_by_object_weight($object_a, $object_b){
  return strcmp($object_a->weight, $object_b->weight);
}

function dragon_project_create_page_list() {
  $type = 'ul';

  $attributes = array(
    'id' => 'dragon-quote-form-list',
    'class' => 'custom-class another-custom-class ajdust-anchor',
  );

  $group_names = array();
  $field_groups = field_group_info_groups('node', 'project');
  $field_groups = $field_groups['form'];
  usort($field_groups, "_dragon_project_sort_by_object_weight");
  
  foreach ($field_groups as $info) {
    $group_names[$info->group_name] = l($info->label, '#' . $info->group_name . '-quick-anchor', array('external' => TRUE));
  }
  
  return array(
    '#theme' => 'item_list',
    '#items' => $group_names, 
    '#title' => t('Get A Quote'), 
    '#type' => $type, 
    '#attributes' => $attributes
  );
}

function _dragon_project_quote_block(){
  drupal_add_css(drupal_get_path('module', 'dragon_project') . '/css/dragon_project_quote_block.css');
  return array(
    'text' => array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array('dragon-quote-text'),
      ),
      array(
        '#type' => 'markup',
        '#markup' => t('Get a quote'),
      ),
    ),
    'content' => array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array('dragon-quote-content'),
      ),
      array(
        '#type' => 'markup',
        '#markup' => t('Some description'),
      ),
    ),
    'link' => array(
      '#type' => 'link',
      '#attributes' => array(
        'class' => array('dragon-quote-link'),
      ),
      '#title' => t('Start Now'),
      '#href' => 'quote',
    ),
  );
}

function dragon_project_info_bar($user = NULL) {
  drupal_add_css(drupal_get_path('module', 'dragon_project') . '/css/dragon_project_quote_block.css');
  if(is_null($user)){
    global $user;
  }
  
  $account = user_load($user->uid);
  return array(
    'logo' => array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array('dragon-user-company-logo dragon-half'),
      ),
      field_view_field('user', $account, 'field_image', array('label' => 'hidden', 'settings' => array('image_style' => 'medium'))),
    ),
    'info' => array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array('dragon-user-info dragon-half'),
      ),
      //field_view_field('user', $account, 'field_name', array('label' => 'inline')),
      //field_view_field('user', $account, 'field_company', array('label' => 'inline')),
    ),
  );
}
