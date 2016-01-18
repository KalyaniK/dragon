<?php
/**
 * @file
 * general_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function general_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['tb_megamenu-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'tb_megamenu',
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
        'region' => 'header_top_right',
        'status' => 1,
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
