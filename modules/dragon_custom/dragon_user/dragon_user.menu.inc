<?php

/**
 * @file
 *
 * This file contains all the implementations of the hooks provided by QAD's customization. e.g hook_qad_menu
 */

/**
 * Implements hook_qad_menu
 */
function dragon_user_dragon_menu($menu_id, $tokens) {
  $items = array();
  global $user;

  switch ($menu_id) {
    case 'user':
      $items['user-edit'] = array(
        '#item_type' => QAD_MENU_NORMAL_ITEM,
        '#title' => t('Edit'),
        '#icon_class' => array('glyphicon-edit'),
        '#url' => 'user/@uid/edit',
        '#btn_class' => array('btn-info'),
        '#weight' => 0,
      );

      break;
  }
  return $items;
}
