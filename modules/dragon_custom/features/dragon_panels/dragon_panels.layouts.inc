<?php
/**
 * @file
 * dragon_panels.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function dragon_panels_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'dragon_footer';
  $layout->admin_title = 'Dragon Footer';
  $layout->admin_description = 'Customized footer for Dragon';
  $layout->category = 'Dragon';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
        ),
        'parent' => NULL,
      ),
      1 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 3,
          1 => 2,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 6,
          1 => 5,
          2 => 4,
          3 => 7,
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => '3',
        'children' => array(
          0 => 10,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => '3',
        'children' => array(
          0 => 9,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => '3',
        'children' => array(
          0 => 8,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => '3',
        'children' => array(
          0 => 11,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'column_1',
        ),
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'column_2',
        ),
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'column_3',
        ),
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'column_4',
        ),
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      'column_1' => array(
        'type' => 'region',
        'title' => 'Column 1',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      'column_2' => array(
        'type' => 'region',
        'title' => 'Column 2',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'column_3' => array(
        'type' => 'region',
        'title' => 'Column 3',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      'column_4' => array(
        'type' => 'region',
        'title' => 'Column 4',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
        'class' => '',
        'hide_empty' => 0,
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'Bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $export['dragon_footer'] = $layout;

  return $export;
}
