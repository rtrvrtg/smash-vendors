<?php
/**
 * @file
 * smash_vendors_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function smash_vendors_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer own vendor registration.
  $permissions['administer own vendor registration'] = array(
    'name' => 'administer own vendor registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: administer registration.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer registration states.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer registration types.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer vendor registration.
  $permissions['administer vendor registration'] = array(
    'name' => 'administer vendor registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: create registration_form content.
  $permissions['create registration_form content'] = array(
    'name' => 'create registration_form content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create vendor registration.
  $permissions['create vendor registration'] = array(
    'name' => 'create vendor registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: create vendor registration other anonymous.
  $permissions['create vendor registration other anonymous'] = array(
    'name' => 'create vendor registration other anonymous',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: create vendor registration other users.
  $permissions['create vendor registration other users'] = array(
    'name' => 'create vendor registration other users',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: delete any registration_form content.
  $permissions['delete any registration_form content'] = array(
    'name' => 'delete any registration_form content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any vendor registration.
  $permissions['delete any vendor registration'] = array(
    'name' => 'delete any vendor registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: delete own registration_form content.
  $permissions['delete own registration_form content'] = array(
    'name' => 'delete own registration_form content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own vendor registration.
  $permissions['delete own vendor registration'] = array(
    'name' => 'delete own vendor registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: edit any registration_form content.
  $permissions['edit any registration_form content'] = array(
    'name' => 'edit any registration_form content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own registration_form content.
  $permissions['edit own registration_form content'] = array(
    'name' => 'edit own registration_form content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: update any vendor registration.
  $permissions['update any vendor registration'] = array(
    'name' => 'update any vendor registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: update own vendor registration.
  $permissions['update own vendor registration'] = array(
    'name' => 'update own vendor registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: view own vendor registration.
  $permissions['view own vendor registration'] = array(
    'name' => 'view own vendor registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: view vendor registration.
  $permissions['view vendor registration'] = array(
    'name' => 'view vendor registration',
    'roles' => array(),
    'module' => 'registration',
  );

  return $permissions;
}
