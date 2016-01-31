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

  // Exported menu link: user-menu_about-us:about-us.
  $menu_links['user-menu_about-us:about-us'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'about-us',
    'router_path' => 'about-us',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_about-us:about-us',
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
  // Exported menu link: user-menu_business-intelligence:node/43.
  $menu_links['user-menu_business-intelligence:node/43'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/43',
    'router_path' => 'node/%',
    'link_title' => 'Business Intelligence',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_business-intelligence:node/43',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -20,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_our-services:our-services',
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
    'parent_identifier' => 'user-menu_contact-us:contact',
  );
  // Exported menu link: user-menu_cargo-shipment:node/54.
  $menu_links['user-menu_cargo-shipment:node/54'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/54',
    'router_path' => 'node/%',
    'link_title' => 'Cargo shipment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_cargo-shipment:node/54',
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
    'parent_identifier' => 'user-menu_global-logistics:node/39',
  );
  // Exported menu link: user-menu_consolidation:node/55.
  $menu_links['user-menu_consolidation:node/55'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/55',
    'router_path' => 'node/%',
    'link_title' => 'Consolidation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_consolidation:node/55',
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
    'parent_identifier' => 'user-menu_global-logistics:node/39',
  );
  // Exported menu link: user-menu_contact-us:contact.
  $menu_links['user-menu_contact-us:contact'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_contact-us:contact',
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
  // Exported menu link: user-menu_custom-broker-area:node/47.
  $menu_links['user-menu_custom-broker-area:node/47'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/47',
    'router_path' => 'node/%',
    'link_title' => 'Custom broker area',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_custom-broker-area:node/47',
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
    'parent_identifier' => 'user-menu_extranet:node/10',
  );
  // Exported menu link: user-menu_custom-clearance-and-documentation:node/40.
  $menu_links['user-menu_custom-clearance-and-documentation:node/40'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Custom Clearance and Documentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_custom-clearance-and-documentation:node/40',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 10,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_our-services:our-services',
  );
  // Exported menu link: user-menu_customer-area:node/46.
  $menu_links['user-menu_customer-area:node/46'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/46',
    'router_path' => 'node/%',
    'link_title' => 'Customer area',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_customer-area:node/46',
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
    'parent_identifier' => 'user-menu_extranet:node/10',
  );
  // Exported menu link: user-menu_export-documentation:node/34.
  $menu_links['user-menu_export-documentation:node/34'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Export Documentation',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_export-documentation:node/34',
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
    'parent_identifier' => 'user-menu_custom-clearance-and-documentation:node/40',
  );
  // Exported menu link: user-menu_express-shipping:node/53.
  $menu_links['user-menu_express-shipping:node/53'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/53',
    'router_path' => 'node/%',
    'link_title' => 'Express shipping',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_express-shipping:node/53',
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
    'parent_identifier' => 'user-menu_global-logistics:node/39',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_navigation:node/14',
  );
  // Exported menu link: user-menu_freight-forwarder-area:node/48.
  $menu_links['user-menu_freight-forwarder-area:node/48'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'Freight forwarder area',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_freight-forwarder-area:node/48',
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
    'parent_identifier' => 'user-menu_extranet:node/10',
  );
  // Exported menu link: user-menu_global-logistics:node/39.
  $menu_links['user-menu_global-logistics:node/39'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/39',
    'router_path' => 'node/%',
    'link_title' => 'Global Logistics',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_global-logistics:node/39',
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
    'parent_identifier' => 'user-menu_our-services:our-services',
  );
  // Exported menu link: user-menu_global-sourcing:node/38.
  $menu_links['user-menu_global-sourcing:node/38'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/38',
    'router_path' => 'node/%',
    'link_title' => 'Global sourcing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_global-sourcing:node/38',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -10,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_our-services:our-services',
  );
  // Exported menu link: user-menu_import-documentation-and-clearance:node/32.
  $menu_links['user-menu_import-documentation-and-clearance:node/32'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'Import Documentation and Clearance',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_import-documentation-and-clearance:node/32',
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
    'parent_identifier' => 'user-menu_custom-clearance-and-documentation:node/40',
  );
  // Exported menu link: user-menu_intranet-dragon-team-area:node/11.
  $menu_links['user-menu_intranet-dragon-team-area:node/11'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Intranet Dragon team area',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_intranet-dragon-team-area:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
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
    'parent_identifier' => 'user-menu_my-account:user',
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
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_material-sourcing:node/19.
  $menu_links['user-menu_material-sourcing:node/19'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Material sourcing',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_material-sourcing:node/19',
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
    'parent_identifier' => 'user-menu_global-sourcing:node/38',
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
  // Exported menu link: user-menu_new-product-development:node/41.
  $menu_links['user-menu_new-product-development:node/41'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/41',
    'router_path' => 'node/%',
    'link_title' => 'New product development',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_new-product-development:node/41',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_our-services:our-services',
  );
  // Exported menu link: user-menu_our-intranet-extranet-portal:node/22.
  $menu_links['user-menu_our-intranet-extranet-portal:node/22'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Our Intranet Extranet Portal',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_our-intranet-extranet-portal:node/22',
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
    'parent_identifier' => 'user-menu_business-intelligence:node/43',
  );
  // Exported menu link: user-menu_our-services:our-services.
  $menu_links['user-menu_our-services:our-services'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'our-services',
    'router_path' => 'our-services',
    'link_title' => 'Our Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_our-services:our-services',
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
  // Exported menu link: user-menu_our-team:node/9.
  $menu_links['user-menu_our-team:node/9'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Our Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_our-team:node/9',
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
    'parent_identifier' => 'user-menu_about-us:about-us',
  );
  // Exported menu link: user-menu_packaging-and-design-solution:node/42.
  $menu_links['user-menu_packaging-and-design-solution:node/42'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'Packaging and design solution',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_packaging-and-design-solution:node/42',
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
    'parent_identifier' => 'user-menu_our-services:our-services',
  );
  // Exported menu link: user-menu_production-monitoring:node/51.
  $menu_links['user-menu_production-monitoring:node/51'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/51',
    'router_path' => 'node/%',
    'link_title' => 'Production monitoring',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_production-monitoring:node/51',
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
    'parent_identifier' => 'user-menu_global-sourcing:node/38',
  );
  // Exported menu link: user-menu_quality-control:node/20.
  $menu_links['user-menu_quality-control:node/20'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Quality control',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_quality-control:node/20',
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
    'parent_identifier' => 'user-menu_global-sourcing:node/38',
  );
  // Exported menu link: user-menu_sample-creation:node/50.
  $menu_links['user-menu_sample-creation:node/50'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/50',
    'router_path' => 'node/%',
    'link_title' => 'Sample creation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_sample-creation:node/50',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_global-sourcing:node/38',
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
      'identifier' => 'user-menu_search:search',
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
  // Exported menu link: user-menu_supplier-area:node/45.
  $menu_links['user-menu_supplier-area:node/45'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/45',
    'router_path' => 'node/%',
    'link_title' => 'Supplier area',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_supplier-area:node/45',
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
    'parent_identifier' => 'user-menu_extranet:node/10',
  );
  // Exported menu link: user-menu_supplier-compliance:node/52.
  $menu_links['user-menu_supplier-compliance:node/52'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/52',
    'router_path' => 'node/%',
    'link_title' => 'Supplier compliance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_supplier-compliance:node/52',
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
    'parent_identifier' => 'user-menu_global-sourcing:node/38',
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
    'parent_identifier' => 'user-menu_contact-us:contact',
  );
  // Exported menu link: user-menu_team-collaboration-and-communication:node/56.
  $menu_links['user-menu_team-collaboration-and-communication:node/56'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/56',
    'router_path' => 'node/%',
    'link_title' => 'Team collaboration and communication',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_team-collaboration-and-communication:node/56',
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
    'parent_identifier' => 'user-menu_business-intelligence:node/43',
  );
  // Exported menu link: user-menu_user-account:dashboard.
  $menu_links['user-menu_user-account:dashboard'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'dashboard',
    'router_path' => 'dashboard',
    'link_title' => 'User Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:dashboard',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_navigation:node/14',
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
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
    'parent_identifier' => 'user-menu_about-us:about-us',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Business Intelligence');
  t('Careers');
  t('Cargo shipment');
  t('Consolidation');
  t('Contact us');
  t('Custom Clearance and Documentation');
  t('Custom broker area');
  t('Customer area');
  t('Export Documentation');
  t('Express shipping');
  t('Extranet');
  t('Freight forwarder area');
  t('Global Logistics');
  t('Global sourcing');
  t('Import Documentation and Clearance');
  t('Intranet Dragon team area');
  t('Log Out');
  t('Log in');
  t('Material sourcing');
  t('Navigation');
  t('New product development');
  t('Our Intranet Extranet Portal');
  t('Our Services');
  t('Our Team');
  t('Packaging and design solution');
  t('Production monitoring');
  t('Quality control');
  t('Sample creation');
  t('Search');
  t('Supplier area');
  t('Supplier compliance');
  t('Support');
  t('Team collaboration and communication');
  t('User Account');
  t('User account');
  t('Who We Are');

  return $menu_links;
}
