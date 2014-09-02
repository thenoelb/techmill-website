<?php
/**
 * @file
 * techmill_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function techmill_user_user_default_roles() {
  $roles = array();

  // Exported role: Board Member.
  $roles['Board Member'] = array(
    'name' => 'Board Member',
    'weight' => 3,
  );

  return $roles;
}
