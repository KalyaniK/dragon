<?php
/**
 * @file
 * user_related_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function user_related_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_name_default_formats().
 */
function user_related_config_name_default_formats() {
  $formats = array();

  // Exported format: Default
  $formats['default'] = array(
    'default_format' => '((((t+ig)+im)+if)+is)+jc',
    'sep1' => ' ',
    'sep2' => ', ',
    'sep3' => '',
    'machine_name' => 'default',
    'name' => 'Default',
  );

  // Exported format: Family
  $formats['family'] = array(
    'name' => 'Family',
    'machine_name' => 'family',
    'format' => 'f',
  );

  // Exported format: Title Family
  $formats['formal'] = array(
    'name' => 'Title Family',
    'machine_name' => 'formal',
    'format' => 't+if',
  );

  // Exported format: Full
  $formats['full'] = array(
    'name' => 'Full',
    'machine_name' => 'full',
    'format' => '((((t+ig)+im)+if)+is)+jc',
  );

  // Exported format: Given
  $formats['given'] = array(
    'name' => 'Given',
    'machine_name' => 'given',
    'format' => 'g',
  );

  // Exported format: Given Family
  $formats['short_full'] = array(
    'name' => 'Given Family',
    'machine_name' => 'short_full',
    'format' => 'g+if',
  );

  return $formats;
}
