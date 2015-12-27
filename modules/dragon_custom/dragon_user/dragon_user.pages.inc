<?php

function dragon_user_info_bar($user = NULL) {
  drupal_add_css(drupal_get_path('module', 'dragon_project') . '/css/dragon_project_quote_block.css');
  if(is_null($user)){
    global $user;
  }
  
  $account = user_load($user->uid);
  return array(
    'user-bar'=> array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array('user-info-bar'),
      ),
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
          'class' => array('dragon-user-info dragon-half pull-right'),
        ),
        field_view_field('user', $account, 'field_years_in_registration', array('label' => 'inline')),
        field_view_field('user', $account, 'field_registered_capital', array('label' => 'inline')),
        field_view_field('user', $account, 'field_industry', array('label' => 'inline')),
        field_view_field('user', $account, 'field_company', array('label' => 'inline')),
        field_view_field('user', $account, 'field_name', array('label' => 'inline')),
      ),
    ),
  );
}
