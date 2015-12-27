<?php
/**
 * @file
 * user_related_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_related_config_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: broker.
  $roles['broker'] = array(
    'name' => 'broker',
    'weight' => 8,
  );

  // Exported role: customer.
  $roles['customer'] = array(
    'name' => 'customer',
    'weight' => 5,
  );

  // Exported role: employee.
  $roles['employee'] = array(
    'name' => 'employee',
    'weight' => 4,
  );

  // Exported role: forwarder.
  $roles['forwarder'] = array(
    'name' => 'forwarder',
    'weight' => 7,
  );

  // Exported role: supplier.
  $roles['supplier'] = array(
    'name' => 'supplier',
    'weight' => 6,
  );

  return $roles;
}
