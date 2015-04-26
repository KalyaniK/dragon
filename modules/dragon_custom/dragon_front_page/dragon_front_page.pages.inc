<?php

function _dragon_front_page_icon_menu_block(){
  return array(
    'menus' => array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array('dragon-icon_menu_group'),
      ),
      'search' => array(
        '#type' => 'markup',
        '#markup' => dragon_common_gen_icon_link('Search', '', 'glyphicon-search', NULL),
      ),
      'user' => array(
        '#type' => 'markup',
        '#markup' => dragon_common_gen_icon_link('Log In', '', 'glyphicon-user', NULL),
      ),
    ),
  );
}
