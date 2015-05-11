<?php
/**
 * @file
 * dragon_panels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dragon_panels_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
