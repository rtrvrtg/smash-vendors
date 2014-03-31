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

  // Exported permission: administer artist registration.
  $permissions['administer artist registration'] = array(
    'name' => 'administer artist registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer community_groups registration.
  $permissions['administer community_groups registration'] = array(
    'name' => 'administer community_groups registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer exhibitor_food_ registration.
  $permissions['administer exhibitor_food_ registration'] = array(
    'name' => 'administer exhibitor_food_ registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own artist registration.
  $permissions['administer own artist registration'] = array(
    'name' => 'administer own artist registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own community_groups registration.
  $permissions['administer own community_groups registration'] = array(
    'name' => 'administer own community_groups registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own exhibitor_food_ registration.
  $permissions['administer own exhibitor_food_ registration'] = array(
    'name' => 'administer own exhibitor_food_ registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own vendor registration.
  $permissions['administer own vendor registration'] = array(
    'name' => 'administer own vendor registration',
    'roles' => array(
      0 => 'administrator',
    ),
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
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: create artist registration.
  $permissions['create artist registration'] = array(
    'name' => 'create artist registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create artist registration other anonymous.
  $permissions['create artist registration other anonymous'] = array(
    'name' => 'create artist registration other anonymous',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create artist registration other users.
  $permissions['create artist registration other users'] = array(
    'name' => 'create artist registration other users',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create community_groups registration.
  $permissions['create community_groups registration'] = array(
    'name' => 'create community_groups registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create community_groups registration other anonymous.
  $permissions['create community_groups registration other anonymous'] = array(
    'name' => 'create community_groups registration other anonymous',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create community_groups registration other users.
  $permissions['create community_groups registration other users'] = array(
    'name' => 'create community_groups registration other users',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create exhibitor_food_ registration.
  $permissions['create exhibitor_food_ registration'] = array(
    'name' => 'create exhibitor_food_ registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create exhibitor_food_ registration other anonymous.
  $permissions['create exhibitor_food_ registration other anonymous'] = array(
    'name' => 'create exhibitor_food_ registration other anonymous',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create exhibitor_food_ registration other users.
  $permissions['create exhibitor_food_ registration other users'] = array(
    'name' => 'create exhibitor_food_ registration other users',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create registration_form content.
  $permissions['create registration_form content'] = array(
    'name' => 'create registration_form content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create vendor registration.
  $permissions['create vendor registration'] = array(
    'name' => 'create vendor registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create vendor registration other anonymous.
  $permissions['create vendor registration other anonymous'] = array(
    'name' => 'create vendor registration other anonymous',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create vendor registration other users.
  $permissions['create vendor registration other users'] = array(
    'name' => 'create vendor registration other users',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete any artist registration.
  $permissions['delete any artist registration'] = array(
    'name' => 'delete any artist registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete any community_groups registration.
  $permissions['delete any community_groups registration'] = array(
    'name' => 'delete any community_groups registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete any exhibitor_food_ registration.
  $permissions['delete any exhibitor_food_ registration'] = array(
    'name' => 'delete any exhibitor_food_ registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete any registration_form content.
  $permissions['delete any registration_form content'] = array(
    'name' => 'delete any registration_form content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any vendor registration.
  $permissions['delete any vendor registration'] = array(
    'name' => 'delete any vendor registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete own artist registration.
  $permissions['delete own artist registration'] = array(
    'name' => 'delete own artist registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete own community_groups registration.
  $permissions['delete own community_groups registration'] = array(
    'name' => 'delete own community_groups registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete own exhibitor_food_ registration.
  $permissions['delete own exhibitor_food_ registration'] = array(
    'name' => 'delete own exhibitor_food_ registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete own registration_form content.
  $permissions['delete own registration_form content'] = array(
    'name' => 'delete own registration_form content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own vendor registration.
  $permissions['delete own vendor registration'] = array(
    'name' => 'delete own vendor registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: edit any registration_form content.
  $permissions['edit any registration_form content'] = array(
    'name' => 'edit any registration_form content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit artist registration state.
  $permissions['edit artist registration state'] = array(
    'name' => 'edit artist registration state',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: edit community_groups registration state.
  $permissions['edit community_groups registration state'] = array(
    'name' => 'edit community_groups registration state',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: edit exhibitor_food_ registration state.
  $permissions['edit exhibitor_food_ registration state'] = array(
    'name' => 'edit exhibitor_food_ registration state',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: edit own registration_form content.
  $permissions['edit own registration_form content'] = array(
    'name' => 'edit own registration_form content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit vendor registration state.
  $permissions['edit vendor registration state'] = array(
    'name' => 'edit vendor registration state',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update any artist registration.
  $permissions['update any artist registration'] = array(
    'name' => 'update any artist registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update any community_groups registration.
  $permissions['update any community_groups registration'] = array(
    'name' => 'update any community_groups registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update any exhibitor_food_ registration.
  $permissions['update any exhibitor_food_ registration'] = array(
    'name' => 'update any exhibitor_food_ registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update any vendor registration.
  $permissions['update any vendor registration'] = array(
    'name' => 'update any vendor registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update own artist registration.
  $permissions['update own artist registration'] = array(
    'name' => 'update own artist registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update own community_groups registration.
  $permissions['update own community_groups registration'] = array(
    'name' => 'update own community_groups registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update own exhibitor_food_ registration.
  $permissions['update own exhibitor_food_ registration'] = array(
    'name' => 'update own exhibitor_food_ registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update own vendor registration.
  $permissions['update own vendor registration'] = array(
    'name' => 'update own vendor registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: view artist registration.
  $permissions['view artist registration'] = array(
    'name' => 'view artist registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: view community_groups registration.
  $permissions['view community_groups registration'] = array(
    'name' => 'view community_groups registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: view exhibitor_food_ registration.
  $permissions['view exhibitor_food_ registration'] = array(
    'name' => 'view exhibitor_food_ registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own artist registration.
  $permissions['view own artist registration'] = array(
    'name' => 'view own artist registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own community_groups registration.
  $permissions['view own community_groups registration'] = array(
    'name' => 'view own community_groups registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own exhibitor_food_ registration.
  $permissions['view own exhibitor_food_ registration'] = array(
    'name' => 'view own exhibitor_food_ registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own vendor registration.
  $permissions['view own vendor registration'] = array(
    'name' => 'view own vendor registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: view vendor registration.
  $permissions['view vendor registration'] = array(
    'name' => 'view vendor registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
