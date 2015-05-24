<?php
/**
 * @file
 * dragon_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function dragon_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['dragon_front_page-dragon_icon_menu'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dragon_icon_menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'dragon_front_page',
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
        'region' => 'header_top_right',
        'status' => 1,
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

  $export['homebox-custom'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'custom',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'homebox',
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
        'region' => '',
        'status' => 0,
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

  $export['panels_mini-dragon_footer'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dragon_footer',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'panels_mini',
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
        'region' => 'footer',
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

  $export['panels_mini-dragon_get_a_quote'] = array(
    'cache' => -1,
    'css_class' => 'dragon-mini-panel-block dragon-color-dark',
    'custom' => 0,
    'delta' => 'dragon_get_a_quote',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'dragon_blocks',
        'status' => 1,
        'theme' => 'bootstrap_dragon',
        'weight' => -16,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['panels_mini-news'] = array(
    'cache' => -1,
    'css_class' => 'dragon-mini-panel-block dragon-color-grey',
    'custom' => 0,
    'delta' => 'news',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'dragon_blocks',
        'status' => 1,
        'theme' => 'bootstrap_dragon',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['panels_mini-our_approach'] = array(
    'cache' => -1,
    'css_class' => 'dragon-mini-panel-block dragon-color-red',
    'custom' => 0,
    'delta' => 'our_approach',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'dragon_blocks',
        'status' => 1,
        'theme' => 'bootstrap_dragon',
        'weight' => -17,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['panels_mini-our_business'] = array(
    'cache' => -1,
    'css_class' => 'dragon-mini-panel-block dragon-color-red',
    'custom' => 0,
    'delta' => 'our_business',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'dragon_blocks',
        'status' => 1,
        'theme' => 'bootstrap_dragon',
        'weight' => -19,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['panels_mini-our_people'] = array(
    'cache' => -1,
    'css_class' => 'dragon-mini-panel-block dragon-color-grey',
    'custom' => 0,
    'delta' => 'our_people',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'dragon_blocks',
        'status' => 1,
        'theme' => 'bootstrap_dragon',
        'weight' => -18,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['panels_mini-what_we_do'] = array(
    'cache' => -1,
    'css_class' => 'dragon-mini-panel-block dragon-color-dark-grey dragon-width-slim',
    'custom' => 0,
    'delta' => 'what_we_do',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'dragon_blocks',
        'status' => 1,
        'theme' => 'bootstrap_dragon',
        'weight' => -20,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-all_projects-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'all_projects-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
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
        'region' => '',
        'status' => 0,
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

  $export['views-customer_dashboard-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'customer_dashboard-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
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
        'region' => '',
        'status' => 0,
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

  $export['views-supplier_projects-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'supplier_projects-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
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
        'region' => '',
        'status' => 0,
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
