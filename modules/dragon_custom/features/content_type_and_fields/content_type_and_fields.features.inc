<?php
/**
 * @file
 * content_type_and_fields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_and_fields_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function content_type_and_fields_image_default_styles() {
  $styles = array();

  // Exported image style: dragon_medium_slider_image.
  $styles['dragon_medium_slider_image'] = array(
    'label' => 'Dragon Medium Slider Image',
    'effects' => array(
      1 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 640,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: dragon_silder_image.
  $styles['dragon_silder_image'] = array(
    'label' => 'Dragon Silder Image',
    'effects' => array(),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function content_type_and_fields_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('The group that will have members and content associated with.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slide_page' => array(
      'name' => t('Slide Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slider' => array(
      'name' => t('Slider'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
