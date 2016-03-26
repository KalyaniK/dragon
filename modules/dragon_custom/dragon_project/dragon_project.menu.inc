<?php

/**
 * @file
 *
 * This file contains all the implementations of the hooks provided by QAD's customization. e.g hook_qad_menu
 */

/**
 * Implements hook_qad_menu
 */
function dragon_project_dragon_menu($menu_id, $tokens) {
  $items = array();
  global $user;

  switch ($menu_id) {
    case 'project':
      $items['project_edit'] = array(
        '#item_type' => QAD_MENU_NORMAL_ITEM,
        '#title' => t('Edit'),
        '#icon_class' => array('glyphicon-edit'),
        '#url' => 'project/@product_id/edit',
        '#btn_class' => array('btn-primary'),
        '#weight' => 0,
      );

      $items['project_print'] = array(
        '#item_type' => QAD_MENU_NORMAL_ITEM,
        '#title' => t('print'),
        '#icon_class' => array('glyphicon-print'),
        '#url' => 'print/@product_id',
        '#btn_class' => array('btn-info'),
        '#weight' => 5,
        '#attributes' => array('target' => '_blank'),
      );
      break;
  }
  return $items;
}
