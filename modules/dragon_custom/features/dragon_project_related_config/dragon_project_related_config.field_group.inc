<?php
/**
 * @file
 * dragon_project_related_config.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dragon_project_related_config_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_order_information|node|project|default';
  $field_group->group_name = 'group_order_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Order Information',
    'weight' => '7',
    'children' => array(
      0 => 'field_quantity',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-order-information field-group-fieldset',
      ),
    ),
  );
  $export['group_order_information|node|project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_order_information|node|project|form';
  $field_group->group_name = 'group_order_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Order Information',
    'weight' => '7',
    'children' => array(
      0 => 'field_quantity',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-order-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_order_information|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_packaging|node|project|default';
  $field_group->group_name = 'group_packaging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Packaging',
    'weight' => '9',
    'children' => array(
      0 => 'field_packaging',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-packaging field-group-fieldset',
      ),
    ),
  );
  $export['group_packaging|node|project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_packaging|node|project|form';
  $field_group->group_name = 'group_packaging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Packaging',
    'weight' => '9',
    'children' => array(
      0 => 'field_packaging',
      1 => 'field_product_packaging',
      2 => 'field_inner_box_packaging',
      3 => 'field_carton_box',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-packaging field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_packaging|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_pictures|node|project|default';
  $field_group->group_name = 'group_project_pictures';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Pictures',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-pictures field-group-fieldset',
      ),
    ),
  );
  $export['group_project_pictures|node|project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_pictures|node|project|form';
  $field_group->group_name = 'group_project_pictures';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Pictures',
    'weight' => '5',
    'children' => array(
      0 => 'field_project_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Project Pictures',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-project-pictures field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_project_pictures|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_type|node|project|default';
  $field_group->group_name = 'group_project_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Type',
    'weight' => '6',
    'children' => array(
      0 => 'field_project_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-type field-group-fieldset',
      ),
    ),
  );
  $export['group_project_type|node|project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_type|node|project|form';
  $field_group->group_name = 'group_project_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Type',
    'weight' => '4',
    'children' => array(
      0 => 'field_project_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-type field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_type|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quality_information|node|project|default';
  $field_group->group_name = 'group_quality_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Information',
    'weight' => '8',
    'children' => array(
      0 => 'field_check_points',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-quality-information field-group-fieldset',
      ),
    ),
  );
  $export['group_quality_information|node|project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quality_information|node|project|form';
  $field_group->group_name = 'group_quality_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Information',
    'weight' => '8',
    'children' => array(
      0 => 'field_check_points',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-quality-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_quality_information|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical_details|node|project|default';
  $field_group->group_name = 'group_technical_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Technical Details',
    'weight' => '7',
    'children' => array(
      0 => 'field_color',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-technical-details field-group-fieldset',
      ),
    ),
  );
  $export['group_technical_details|node|project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical_details|node|project|form';
  $field_group->group_name = 'group_technical_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Technical Details',
    'weight' => '6',
    'children' => array(
      0 => 'field_color',
      1 => 'field_if_drawing',
      2 => 'field_international_standard',
      3 => 'field_measurement',
      4 => 'field_logo_on',
      5 => 'field_other_specification',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-technical-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_technical_details|node|project|form'] = $field_group;

  return $export;
}
