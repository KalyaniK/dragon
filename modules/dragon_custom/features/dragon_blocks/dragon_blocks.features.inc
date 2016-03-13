<?php
/**
 * @file
 * dragon_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dragon_blocks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
