<?php
/**
 * @file
 * dragon_project_related_config.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function dragon_project_related_config_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_annual_quantity'.
  $field_bases['field_annual_quantity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_annual_quantity',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_carton_box'.
  $field_bases['field_carton_box'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_carton_box',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_carton_box_content'.
  $field_bases['field_carton_box_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_carton_box_content',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_check_point_severity'.
  $field_bases['field_check_point_severity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_check_point_severity',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'Critical',
        2 => 'Major',
        3 => 'Minor',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_check_points'.
  $field_bases['field_check_points'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_check_points',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_check_points_contect'.
  $field_bases['field_check_points_contect'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_check_points_contect',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 1024,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_color'.
  $field_bases['field_color'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_color',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'red' => 'Red',
        'green' => 'Green',
        'other' => 'Other',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_color_other'.
  $field_bases['field_color_other'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_color_other',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_if_drawing'.
  $field_bases['field_if_drawing'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_if_drawing',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_if_drawing_content'.
  $field_bases['field_if_drawing_content'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_if_drawing_content',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 1,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_inner_box_packaging'.
  $field_bases['field_inner_box_packaging'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_inner_box_packaging',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_inner_box_packaging_conten'.
  $field_bases['field_inner_box_packaging_conten'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_inner_box_packaging_conten',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_international_standard'.
  $field_bases['field_international_standard'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_international_standard',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_international_standard_con'.
  $field_bases['field_international_standard_con'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_international_standard_con',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_logo_on'.
  $field_bases['field_logo_on'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_logo_on',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'yes' => 'Yes',
        'no' => 'No',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_measuremen_content'.
  $field_bases['field_measuremen_content'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_measuremen_content',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_measurement'.
  $field_bases['field_measurement'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_measurement',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_measurement_name'.
  $field_bases['field_measurement_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_measurement_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_measurement_quantity'.
  $field_bases['field_measurement_quantity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_measurement_quantity',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_measurement_unit'.
  $field_bases['field_measurement_unit'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_measurement_unit',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Pieces' => 'Pieces',
        '20\' Container' => '20\' Container',
        '40\' Container' => '40\' Container',
        '40\' HQ Container' => '40\' HQ Container',
        'Acre/Acres' => 'Acre/Acres',
        'Ampere/Amperes' => 'Ampere/Amperes',
        'Bags' => 'Bags',
        'Barrel/Barrels' => 'Barrel/Barrels',
        'Boxes' => 'Boxes',
        'Bushel/Bushels' => 'Bushel/Bushels',
        'Carat/Carats' => 'Carat/Carats',
        'Carton/Cartons' => 'Carton/Cartons',
        'Case/Cases' => 'Case/Cases',
        'Centimeter/Centimeters' => 'Centimeter/Centimeters',
        'Chain/Chains' => 'Chain/Chains',
        'Cubic Centimeter/Cubic Centimeters' => 'Cubic Centimeter/Cubic Centimeters',
        'Cubic Foot/Cubic Feet' => 'Cubic Foot/Cubic Feet',
        'Cubic Inch/Cubic Inches' => 'Cubic Inch/Cubic Inches',
        'Cubic Meter/Cubic Meters' => 'Cubic Meter/Cubic Meters',
        'Cubic Yard/Cubic Yards' => 'Cubic Yard/Cubic Yards',
        'Degrees Celsius' => 'Degrees Celsius',
        'Degrees Fahrenheit' => 'Degrees Fahrenheit',
        'Dozen/Dozens' => 'Dozen/Dozens',
        'Dram/Drams' => 'Dram/Drams',
        'Fluid Ounce/Fluid Ounces' => 'Fluid Ounce/Fluid Ounces',
        'Foot' => 'Foot',
        'Furlong/Furlongs' => 'Furlong/Furlongs',
        'Gallon/Gallons' => 'Gallon/Gallons',
        'Gill/Gills' => 'Gill/Gills',
        'Grain/Grains' => 'Grain/Grains',
        'Gram/Grams' => 'Gram/Grams',
        'Gross' => 'Gross',
        'Hectare/Hectares' => 'Hectare/Hectares',
        'Hertz' => 'Hertz',
        'Inch/Inches' => 'Inch/Inches',
        'Kiloampere/Kiloamperes' => 'Kiloampere/Kiloamperes',
        'Kilogram/Kilograms' => 'Kilogram/Kilograms',
        'Kilohertz' => 'Kilohertz',
        'Kilometer/Kilometers' => 'Kilometer/Kilometers',
        'Kiloohm/Kiloohms' => 'Kiloohm/Kiloohms',
        'Kilovolt/Kilovolts' => 'Kilovolt/Kilovolts',
        'Kilowatt/Kilowatts' => 'Kilowatt/Kilowatts',
        'Liter/Liters' => 'Liter/Liters',
        'Long Ton/Long Tons' => 'Long Ton/Long Tons',
        'Megahertz' => 'Megahertz',
        'Meter' => 'Meter',
        'Metric Ton/Metric Tons' => 'Metric Ton/Metric Tons',
        'Mile/Miles' => 'Mile/Miles',
        'Milliampere/Milliamperes' => 'Milliampere/Milliamperes',
        'Milligram/Milligrams' => 'Milligram/Milligrams',
        'Millihertz' => 'Millihertz',
        'Milliliter/Milliliters' => 'Milliliter/Milliliters',
        'Millimeter/Millimeters' => 'Millimeter/Millimeters',
        'Milliohm/Milliohms' => 'Milliohm/Milliohms',
        'Millivolt/Millivolts' => 'Millivolt/Millivolts',
        'Milliwatt/Milliwatts' => 'Milliwatt/Milliwatts',
        'Nautical Mile/Nautical Miles' => 'Nautical Mile/Nautical Miles',
        'Ohm/Ohms' => 'Ohm/Ohms',
        'Ounce/Ounces' => 'Ounce/Ounces',
        'Pack/Packs' => 'Pack/Packs',
        'Pairs' => 'Pairs',
        'Pallet/Pallets' => 'Pallet/Pallets',
        'Parcel/Parcels' => 'Parcel/Parcels',
        'Perch/Perches' => 'Perch/Perches',
        'Pint/Pints' => 'Pint/Pints',
        'Plant/Plants' => 'Plant/Plants',
        'Pole/Poles' => 'Pole/Poles',
        'Pound/Pounds' => 'Pound/Pounds',
        'Quart/Quarts' => 'Quart/Quarts',
        'Quarter/Quarters' => 'Quarter/Quarters',
        'Reams' => 'Reams',
        'Rod/Rods' => 'Rod/Rods',
        'Rolls' => 'Rolls',
        'Sets' => 'Sets',
        'Sheet/Sheets' => 'Sheet/Sheets',
        'Short Ton/Short Tons' => 'Short Ton/Short Tons',
        'Square Centimeter/Square Centimeters' => 'Square Centimeter/Square Centimeters',
        'Square Feet' => 'Square Feet',
        'Square Meters' => 'Square Meters',
        'Square Inch/Square Inches' => 'Square Inch/Square Inches',
        'Square Mile/Square Miles' => 'Square Mile/Square Miles',
        'Square Yard/Square Yards' => 'Square Yard/Square Yards',
        'Stone/Stones' => 'Stone/Stones',
        'Strand/Strands' => 'Strand/Strands',
        'Tonne/Tonnes' => 'Tonne/Tonnes',
        'Tons' => 'Tons',
        'Tray/Trays' => 'Tray/Trays',
        'Unit/Units' => 'Unit/Units',
        'Volt/Volts' => 'Volt/Volts',
        'Watt/Watts' => 'Watt/Watts',
        'Wp' => 'Wp',
        'Yard/Yards' => 'Yard/Yards',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_order_quantity'.
  $field_bases['field_order_quantity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_order_quantity',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_other_specification'.
  $field_bases['field_other_specification'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_other_specification',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_packaging'.
  $field_bases['field_packaging'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_packaging',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_product_packaging'.
  $field_bases['field_product_packaging'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_product_packaging',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_product_packaging_content'.
  $field_bases['field_product_packaging_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_product_packaging_content',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_project_description'.
  $field_bases['field_project_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_project_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_project_images'.
  $field_bases['field_project_images'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_project_images',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_project_type'.
  $field_bases['field_project_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_project_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'sports' => 'Sports',
        'clothes' => 'Clothes',
        'others' => 'Others',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_quantity'.
  $field_bases['field_quantity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quantity',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
