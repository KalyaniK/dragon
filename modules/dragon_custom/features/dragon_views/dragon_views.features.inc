<?php
/**
 * @file
 * dragon_views.features.inc
 */

/**
 * Implements hook_views_api().
 */
function dragon_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_homebox().
 */
function dragon_views_homebox() {
  $homeboxes = array();

  $homeboxes['customer_dashboard'] = array(
    'regions' => 2,
    'cache' => 0,
    'color' => 0,
    'colors' => array(
      0 => '#E4F0F8',
      1 => '#E4F0F8',
      2 => '#E4F0F8',
      3 => '#E4F0F8',
      4 => '#E4F0F8',
      5 => '#E4F0F8',
    ),
    'blocks' => array(
      'views_customer_dashboard-block' => array(
        'module' => 'views',
        'delta' => 'customer_dashboard-block',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -17,
      ),
    ),
    'widths' => array(),
    'title' => 'Dragon Customer Dashboard',
    'path' => 'customer-dashboard',
    'menu' => 1,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'customer',
    ),
  );

  $homeboxes['employee_dashboard'] = array(
    'regions' => 2,
    'cache' => 0,
    'color' => 0,
    'colors' => array(
      0 => '#E4F0F8',
      1 => '#E4F0F8',
      2 => '#E4F0F8',
      3 => '#E4F0F8',
      4 => '#E4F0F8',
      5 => '#E4F0F8',
    ),
    'blocks' => array(
      'views_all_projects-block' => array(
        'module' => 'views',
        'delta' => 'all_projects-block',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -18,
      ),
    ),
    'widths' => array(),
    'title' => 'Dragon Employe Dashboard ',
    'path' => 'employee-dashboard',
    'menu' => 1,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => array(
      0 => 'admin',
      1 => 'administrator',
      2 => 'authenticated user',
      3 => 'employee',
    ),
  );

  $homeboxes['supplier_dashboard'] = array(
    'regions' => 2,
    'cache' => 0,
    'color' => 0,
    'colors' => array(
      0 => '#E4F0F8',
      1 => '#E4F0F8',
      2 => '#E4F0F8',
      3 => '#E4F0F8',
      4 => '#E4F0F8',
      5 => '#E4F0F8',
    ),
    'blocks' => array(
      'views_all_projects-block' => array(
        'module' => 'views',
        'delta' => 'all_projects-block',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -18,
      ),
      'views_supplier_projects-block' => array(
        'module' => 'views',
        'delta' => 'supplier_projects-block',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -18,
      ),
    ),
    'widths' => array(),
    'title' => 'Dragon Supplier Dashboard',
    'path' => 'supplier-dashboard',
    'menu' => 1,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'supplier',
    ),
  );


  return $homeboxes;
}
