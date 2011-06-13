<?php

/**
 * Implementation of hook_user_default_roles().
 */
function lt_student_user_default_roles() {
  $roles = array();

  // Exported role: Admin-edit
  $roles['Admin-edit'] = array(
    'name' => 'Admin-edit',
  );

  // Exported role: Admin-view
  $roles['Admin-view'] = array(
    'name' => 'Admin-view',
  );

  // Exported role: Teacher
  $roles['Teacher'] = array(
    'name' => 'Teacher',
  );

  // Exported role: View parent info
  $roles['View parent info'] = array(
    'name' => 'View parent info',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  return $roles;
}
