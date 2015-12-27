<?php
/**
 * @file
 * user_related_config.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function user_related_config_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-mydetails'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'mydetails',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap_business' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap_business',
        'weight' => 0,
      ),
      'bootstrap_dragon' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap_dragon',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'My Details',
    'visibility' => 0,
  );

  return $export;
}
