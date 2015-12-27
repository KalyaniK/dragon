<?php
/**
 * @file
 * user_related_config.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function user_related_config_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'My Details';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'mydetails';
  $fe_block_boxes->body = '<?php
module_load_include(\'inc\', \'dragon_user\', \'dragon_user.pages\');
module_load_include(\'inc\', \'dragon_common\', \'dragon_common.basic\');

global $user;
$fields[]=dragon_common_get_dragon_menu(\'user\', array(\'@uid\' => $user->uid));
$fields[]=dragon_user_info_bar($user);
print render($fields);';

  $export['mydetails'] = $fe_block_boxes;

  return $export;
}
