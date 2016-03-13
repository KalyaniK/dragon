<?php
/**
 * @file
 * dragon_panel_pages.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function dragon_panel_pages_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'sub_page_first';
  $layout->admin_title = 'Sub page first';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => 'dragon-panel-row',
        'region_class' => 'dragon-panel-region',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 0,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => 'dragon-panel-row-top',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Region 1',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'container',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_2',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_2' => array(
        'type' => 'region',
        'title' => 'Region 2',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_3',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_3' => array(
        'type' => 'region',
        'title' => 'Region 3',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_4',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_4' => array(
        'type' => 'region',
        'title' => 'Region 4',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_5',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_5' => array(
        'type' => 'region',
        'title' => 'Region 5',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $export['sub_page_first'] = $layout;

  return $export;
}
