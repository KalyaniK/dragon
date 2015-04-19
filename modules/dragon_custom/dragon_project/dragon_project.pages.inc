<?php

function dragon_project_create_page() {
  global $user;
  $node = (object) array('uid' => $user->uid, 'name' => (isset($user->name) ? $user->name : ''), 'type' => 'project', 'language' => LANGUAGE_NONE);
  
  $output = array(
    'navigation' => array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array('col-md-3'),
        'id' => array('dragon-quote-navigation'),
      ),
      'list' => dragon_project_create_page_list(),
    ),
    'form' => drupal_get_form('project' . '_node_form', $node),
  );
  $output['form']['#attributes']['class'][] = 'col-md-9';
  return $output;
}

function dragon_project_create_page_list() {
  $type = 'ul';

  $attributes = array(
    'id' => 'dragon-quote-form-list',
    'class' => 'custom-class another-custom-class',
  );

  $group_names = array();
  $field_groups = field_group_info_groups('node', 'project');
  foreach ($field_groups['form'] as $group_name => $info) {
    $group_names[$group_name] = l($info->label, '#' . $group_name, array('external' => TRUE));
  }
  
  return array(
    '#theme' => 'item_list',
    '#items' => $group_names, 
    '#title' => t('Form Guide'), 
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
        '#markup' => 'Get a Quote',
      ),
    ),
    'content' => array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array('dragon-quote-content'),
      ),
      array(
        '#type' => 'markup',
        '#markup' => 'Some description',
      ),
    ),
    'link' => array(
      '#type' => 'link',
      '#attributes' => array(
        'class' => array('dragon-quote-link'),
      ),
      '#title' => 'Start Now',
      '#href' => 'quote',
    ),
  );
}
