<?php
/**
 * @file
 * content_type_and_fields.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_and_fields_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_article-comment_body'
  $field_instances['comment-comment_node_article-comment_body'] = array(
    'bundle' => 'comment_node_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_group-comment_body'
  $field_instances['comment-comment_node_group-comment_body'] = array(
    'bundle' => 'comment_node_group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_page-comment_body'
  $field_instances['comment-comment_node_page-comment_body'] = array(
    'bundle' => 'comment_node_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_slider-comment_body'
  $field_instances['comment-comment_node_slider-comment_body'] = array(
    'bundle' => 'comment_node_slider',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-article-body'
  $field_instances['node-article-body'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'exclude_cv' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-article-field_image'
  $field_instances['node-article-field_image'] = array(
    'bundle' => 'article',
    'deleted' => 0,
    'description' => 'Upload an image to go with this article.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => TRUE,
      'default_image' => 0,
      'exclude_cv' => FALSE,
      'file_directory' => 'field/image',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-article-field_tags'
  $field_instances['node-article-field_tags'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a comma-separated list of words to describe your content.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => FALSE,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-group-body'
  $field_instances['node-group-body'] = array(
    'bundle' => 'group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'exclude_cv' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-group-group_group'
  $field_instances['node-group-group_group'] = array(
    'bundle' => 'group',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Determine if this is an OG group.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'og_ui',
        'settings' => array(
          'field_name' => FALSE,
        ),
        'type' => 'og_group_subscribe',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 1,
    'entity_type' => 'node',
    'field_name' => 'group_group',
    'label' => 'Group',
    'required' => FALSE,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_group_subscribe',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_group_subscribe',
      ),
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
        'og_hide' => TRUE,
      ),
      'type' => 'options_onoff',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-page-body'
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'exclude_cv' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-slider-field_slider_images'
  $field_instances['node-slider-field_slider_images'] = array(
    'bundle' => 'slider',
    'deleted' => 0,
    'description' => 'Please upload pictures with resolution at 1300 x 500  pixels
',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'flexslider_fields',
        'settings' => array(
          'caption' => 0,
          'image_style' => 'flexslider_full',
          'optionset' => 'dragon',
        ),
        'type' => 'flexslider',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_slider_images',
    'label' => 'slider_images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'exclude_cv' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '1300x500',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'og_membership-og_membership_type_default-og_membership_request'
  $field_instances['og_membership-og_membership_type_default-og_membership_request'] = array(
    'bundle' => 'og_membership_type_default',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the text a user may send to the group administrators.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'og_membership',
    'field_name' => 'og_membership_request',
    'label' => 'Request message',
    'required' => FALSE,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'user-user-field_company'
  $field_instances['user-user-field_company'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'exclude_cv' => 0,
    'field_name' => 'field_company',
    'label' => 'Company',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'user-user-field_industry'
  $field_instances['user-user-field_industry'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'exclude_cv' => 0,
    'field_name' => 'field_industry',
    'label' => 'Industry',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'user-user-field_location'
  $field_instances['user-user-field_location'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'exclude_cv' => 0,
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'user-user-field_name'
  $field_instances['user-user-field_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'component_css' => '',
      'component_layout' => 'default',
      'credentials_inline' => 0,
      'exclude_cv' => FALSE,
      'field_type' => array(
        'credentials' => 'text',
        'family' => 'text',
        'generational' => 'select',
        'given' => 'text',
        'middle' => 'text',
        'title' => 'select',
      ),
      'generational_field' => 'select',
      'inline_css' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'name_user_preferred' => 0,
      'override_format' => 'default',
      'show_component_required_marker' => 0,
      'size' => array(
        'credentials' => 35,
        'family' => 20,
        'generational' => 5,
        'given' => 20,
        'middle' => 20,
        'title' => 6,
      ),
      'title_display' => array(
        'credentials' => 'description',
        'family' => 'description',
        'generational' => 'description',
        'given' => 'description',
        'middle' => 'description',
        'title' => 'description',
      ),
      'title_field' => 'select',
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'name',
      'settings' => array(),
      'type' => 'name_widget',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_registered_capital'
  $field_instances['user-user-field_registered_capital'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'exclude_cv' => 0,
    'field_name' => 'field_registered_capital',
    'label' => 'Registered Capital',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'user-user-field_years_in_registration'
  $field_instances['user-user-field_years_in_registration'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'user',
    'exclude_cv' => 0,
    'field_name' => 'field_years_in_registration',
    'label' => 'Years in Registration',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'user-user-og_user_node'
  $field_instances['user-user-og_user_node'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'og_ui',
        'settings' => array(),
        'type' => 'og_list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'og_user_node',
    'label' => 'Group membership',
    'required' => FALSE,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
      ),
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Comment');
  t('Company');
  t('Determine if this is an OG group.');
  t('Enter a comma-separated list of words to describe your content.');
  t('Group');
  t('Group membership');
  t('Image');
  t('Industry');
  t('Location');
  t('Name');
  t('Please upload pictures with resolution at 1300 x 500  pixels
');
  t('Registered Capital');
  t('Request message');
  t('Tags');
  t('This is the text a user may send to the group administrators.');
  t('Upload an image to go with this article.');
  t('Years in Registration');
  t('slider_images');

  return $field_instances;
}
