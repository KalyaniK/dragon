<?php
/**
 * @file
 * general_settings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function general_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu.
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: user-menu_about-us:node/4.
  $menu_links['user-menu_about-us:node/4'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_about-us:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_apparel-and-textile:node/18.
  $menu_links['user-menu_apparel-and-textile:node/18'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'Apparel and Textile',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_apparel-and-textile:node/18',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_our-business:node/5',
  );
  // Exported menu link: user-menu_bed-sheet:node/32.
  $menu_links['user-menu_bed-sheet:node/32'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'Bed Sheet',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_bed-sheet:node/32',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_home-textile-products:node/7',
  );
  // Exported menu link: user-menu_bed-skirt:node/34.
  $menu_links['user-menu_bed-skirt:node/34'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Bed Skirt',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_bed-skirt:node/34',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_home-textile-products:node/7',
  );
  // Exported menu link: user-menu_careers:node/1.
  $menu_links['user-menu_careers:node/1'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_careers:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_contact-us:node/3',
  );
  // Exported menu link: user-menu_chat:chat.
  $menu_links['user-menu_chat:chat'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'chat',
    'router_path' => 'chat',
    'link_title' => 'Chat',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_chat:chat',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_comforter:node/27.
  $menu_links['user-menu_comforter:node/27'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Comforter',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_comforter:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -3,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_home-textile-products:node/7',
  );
  // Exported menu link: user-menu_contact-us:node/3.
  $menu_links['user-menu_contact-us:node/3'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Contact us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_contact-us:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_down-conforter:node/31.
  $menu_links['user-menu_down-conforter:node/31'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/31',
    'router_path' => 'node/%',
    'link_title' => 'Down Conforter',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_down-conforter:node/31',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_home-textile-products:node/7',
  );
  // Exported menu link: user-menu_duvets:node/28.
  $menu_links['user-menu_duvets:node/28'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Duvets',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_duvets:node/28',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_home-textile-products:node/7',
  );
  // Exported menu link: user-menu_extranet:node/10.
  $menu_links['user-menu_extranet:node/10'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Extranet',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_extranet:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_navigation:node/14',
  );
  // Exported menu link: user-menu_fashion-accessories:node/17.
  $menu_links['user-menu_fashion-accessories:node/17'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Fashion Accessories',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_fashion-accessories:node/17',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_our-business:node/5',
  );
  // Exported menu link: user-menu_furniture:node/36.
  $menu_links['user-menu_furniture:node/36'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/36',
    'router_path' => 'node/%',
    'link_title' => 'Furniture',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_furniture:node/36',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_our-business:node/5',
  );
  // Exported menu link: user-menu_hand-bag-hardware:node/20.
  $menu_links['user-menu_hand-bag-hardware:node/20'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Hand Bag Hardware',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_hand-bag-hardware:node/20',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_fashion-accessories:node/17',
  );
  // Exported menu link: user-menu_hand-bag-material-and-fabrics:node/18.
  $menu_links['user-menu_hand-bag-material-and-fabrics:node/18'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'Hand Bag Material and Fabrics',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_hand-bag-material-and-fabrics:node/18',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_fashion-accessories:node/17',
  );
  // Exported menu link: user-menu_hand-bag-oem:node/19.
  $menu_links['user-menu_hand-bag-oem:node/19'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Hand Bag OEM',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_hand-bag-oem:node/19',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_fashion-accessories:node/17',
  );
  // Exported menu link: user-menu_hockey-accessories:node/22.
  $menu_links['user-menu_hockey-accessories:node/22'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Hockey Accessories',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_hockey-accessories:node/22',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_sport-accessories:node/6',
  );
  // Exported menu link: user-menu_home-textile-fabrics:node/23.
  $menu_links['user-menu_home-textile-fabrics:node/23'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Home Textile Fabrics',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_home-textile-fabrics:node/23',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_home-textile-products:node/7',
  );
  // Exported menu link: user-menu_home-textile-products:node/7.
  $menu_links['user-menu_home-textile-products:node/7'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Home Textile Products',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_home-textile-products:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_our-business:node/5',
  );
  // Exported menu link: user-menu_intranet:node/11.
  $menu_links['user-menu_intranet:node/11'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Intranet',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_intranet:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 40,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_navigation:node/14',
  );
  // Exported menu link: user-menu_log-in:user/login.
  $menu_links['user-menu_log-in:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(
      'identifier' => 'user-menu_log-in:user/login',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'user-menu_user-account:user',
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log Out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_mattress-components:node/35.
  $menu_links['user-menu_mattress-components:node/35'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/35',
    'router_path' => 'node/%',
    'link_title' => 'Mattress Components',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_mattress-components:node/35',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_our-business:node/5',
  );
  // Exported menu link: user-menu_mattress-pad:node/29.
  $menu_links['user-menu_mattress-pad:node/29'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Mattress Pad',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_mattress-pad:node/29',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_home-textile-products:node/7',
  );
  // Exported menu link: user-menu_mattress-protector:node/33.
  $menu_links['user-menu_mattress-protector:node/33'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/33',
    'router_path' => 'node/%',
    'link_title' => 'Mattress Protector',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_mattress-protector:node/33',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_home-textile-products:node/7',
  );
  // Exported menu link: user-menu_mattress-toppers:node/25.
  $menu_links['user-menu_mattress-toppers:node/25'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Mattress Toppers',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_mattress-toppers:node/25',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_home-textile-products:node/7',
  );
  // Exported menu link: user-menu_navigation:node/14.
  $menu_links['user-menu_navigation:node/14'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Navigation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_navigation:node/14',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_our-business:node/5.
  $menu_links['user-menu_our-business:node/5'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Our Business',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_our-business:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_our-people:node/9.
  $menu_links['user-menu_our-people:node/9'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Our People',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_our-people:node/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_about-us:node/4',
  );
  // Exported menu link: user-menu_our-services:node/16.
  $menu_links['user-menu_our-services:node/16'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Our Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_our-services:node/16',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_about-us:node/4',
  );
  // Exported menu link: user-menu_pillow-:node/24.
  $menu_links['user-menu_pillow-:node/24'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Pillow ',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_pillow-:node/24',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_home-textile-products:node/7',
  );
  // Exported menu link: user-menu_pillow-cover:node/26.
  $menu_links['user-menu_pillow-cover:node/26'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Pillow Cover',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_pillow-cover:node/26',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_home-textile-products:node/7',
  );
  // Exported menu link: user-menu_quilt:node/30.
  $menu_links['user-menu_quilt:node/30'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/30',
    'router_path' => 'node/%',
    'link_title' => 'Quilt',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_quilt:node/30',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_home-textile-products:node/7',
  );
  // Exported menu link: user-menu_search:search.
  $menu_links['user-menu_search:search'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_search:search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_sport-accessories:node/6.
  $menu_links['user-menu_sport-accessories:node/6'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Sport Accessories',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_sport-accessories:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_our-business:node/5',
  );
  // Exported menu link: user-menu_support:node/2.
  $menu_links['user-menu_support:node/2'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Support',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_support:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_contact-us:node/3',
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_who-we-are:node/15.
  $menu_links['user-menu_who-we-are:node/15'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Who We Are',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_who-we-are:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_about-us:node/4',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Apparel and Textile');
  t('Bed Sheet');
  t('Bed Skirt');
  t('Careers');
  t('Chat');
  t('Comforter');
  t('Contact us');
  t('Down Conforter');
  t('Duvets');
  t('Extranet');
  t('Fashion Accessories');
  t('Furniture');
  t('Hand Bag Hardware');
  t('Hand Bag Material and Fabrics');
  t('Hand Bag OEM');
  t('Hockey Accessories');
  t('Home Textile Fabrics');
  t('Home Textile Products');
  t('Intranet');
  t('Log Out');
  t('Log in');
  t('Mattress Components');
  t('Mattress Pad');
  t('Mattress Protector');
  t('Mattress Toppers');
  t('Navigation');
  t('Our Business');
  t('Our People');
  t('Our Services');
  t('Pillow ');
  t('Pillow Cover');
  t('Quilt');
  t('Search');
  t('Sport Accessories');
  t('Support');
  t('User account');
  t('User menu');
  t('Who We Are');

  return $menu_links;
}
