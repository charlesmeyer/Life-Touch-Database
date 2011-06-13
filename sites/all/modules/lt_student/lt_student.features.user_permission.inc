<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function lt_student_user_default_permissions() {
  $permissions = array();

  // Exported permission: access backup files
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: add users via userplus
  $permissions['add users via userplus'] = array(
    'name' => 'add users via userplus',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: administer backup and migrate
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
  );

  // Exported permission: administer feeds
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(),
  );

  // Exported permission: administer field permissions
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(),
  );

  // Exported permission: administer finder
  $permissions['administer finder'] = array(
    'name' => 'administer finder',
    'roles' => array(),
  );

  // Exported permission: administer finder PHP settings
  $permissions['administer finder PHP settings'] = array(
    'name' => 'administer finder PHP settings',
    'roles' => array(),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'Admin-edit',
      '1' => 'Admin-view',
    ),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: administer userplus settings
  $permissions['administer userplus settings'] = array(
    'name' => 'administer userplus settings',
    'roles' => array(),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: assign groups via userplus
  $permissions['assign groups via userplus'] = array(
    'name' => 'assign groups via userplus',
    'roles' => array(),
  );

  // Exported permission: assign roles via userplus
  $permissions['assign roles via userplus'] = array(
    'name' => 'assign roles via userplus',
    'roles' => array(),
  );

  // Exported permission: assign visits
  $permissions['assign visits'] = array(
    'name' => 'assign visits',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
  );

  // Exported permission: clear student_import feeds
  $permissions['clear student_import feeds'] = array(
    'name' => 'clear student_import feeds',
    'roles' => array(),
  );

  // Exported permission: create field_leadershiptype
  $permissions['create field_leadershiptype'] = array(
    'name' => 'create field_leadershiptype',
    'roles' => array(),
  );

  // Exported permission: create lt_class content
  $permissions['create lt_class content'] = array(
    'name' => 'create lt_class content',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: create lt_student content
  $permissions['create lt_student content'] = array(
    'name' => 'create lt_student content',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: delete any lt_class content
  $permissions['delete any lt_class content'] = array(
    'name' => 'delete any lt_class content',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: delete any lt_student content
  $permissions['delete any lt_student content'] = array(
    'name' => 'delete any lt_student content',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: delete backup files
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(),
  );

  // Exported permission: delete own lt_class content
  $permissions['delete own lt_class content'] = array(
    'name' => 'delete own lt_class content',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: delete own lt_student content
  $permissions['delete own lt_student content'] = array(
    'name' => 'delete own lt_student content',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
  );

  // Exported permission: edit any lt_class content
  $permissions['edit any lt_class content'] = array(
    'name' => 'edit any lt_class content',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit any lt_student content
  $permissions['edit any lt_student content'] = array(
    'name' => 'edit any lt_student content',
    'roles' => array(
      '0' => 'Admin-edit',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_address
  $permissions['edit field_address'] = array(
    'name' => 'edit field_address',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit field_birthday
  $permissions['edit field_birthday'] = array(
    'name' => 'edit field_birthday',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit field_city
  $permissions['edit field_city'] = array(
    'name' => 'edit field_city',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit field_email
  $permissions['edit field_email'] = array(
    'name' => 'edit field_email',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit field_first
  $permissions['edit field_first'] = array(
    'name' => 'edit field_first',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit field_gender
  $permissions['edit field_gender'] = array(
    'name' => 'edit field_gender',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit field_last
  $permissions['edit field_last'] = array(
    'name' => 'edit field_last',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit field_leadershiptype
  $permissions['edit field_leadershiptype'] = array(
    'name' => 'edit field_leadershiptype',
    'roles' => array(),
  );

  // Exported permission: edit field_membership
  $permissions['edit field_membership'] = array(
    'name' => 'edit field_membership',
    'roles' => array(),
  );

  // Exported permission: edit field_parents
  $permissions['edit field_parents'] = array(
    'name' => 'edit field_parents',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit field_parents_cell
  $permissions['edit field_parents_cell'] = array(
    'name' => 'edit field_parents_cell',
    'roles' => array(
      '0' => 'Admin-edit',
      '1' => 'View parent info',
    ),
  );

  // Exported permission: edit field_parents_email
  $permissions['edit field_parents_email'] = array(
    'name' => 'edit field_parents_email',
    'roles' => array(
      '0' => 'Admin-edit',
      '1' => 'View parent info',
    ),
  );

  // Exported permission: edit field_parents_email2
  $permissions['edit field_parents_email2'] = array(
    'name' => 'edit field_parents_email2',
    'roles' => array(),
  );

  // Exported permission: edit field_phone_home
  $permissions['edit field_phone_home'] = array(
    'name' => 'edit field_phone_home',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit field_phone_home_area
  $permissions['edit field_phone_home_area'] = array(
    'name' => 'edit field_phone_home_area',
    'roles' => array(),
  );

  // Exported permission: edit field_phone_mobile
  $permissions['edit field_phone_mobile'] = array(
    'name' => 'edit field_phone_mobile',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit field_phone_mobile_area
  $permissions['edit field_phone_mobile_area'] = array(
    'name' => 'edit field_phone_mobile_area',
    'roles' => array(),
  );

  // Exported permission: edit field_state
  $permissions['edit field_state'] = array(
    'name' => 'edit field_state',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit field_status
  $permissions['edit field_status'] = array(
    'name' => 'edit field_status',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit field_suffix
  $permissions['edit field_suffix'] = array(
    'name' => 'edit field_suffix',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit field_zip
  $permissions['edit field_zip'] = array(
    'name' => 'edit field_zip',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit own lt_class content
  $permissions['edit own lt_class content'] = array(
    'name' => 'edit own lt_class content',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: edit own lt_student content
  $permissions['edit own lt_student content'] = array(
    'name' => 'edit own lt_student content',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Add post to the specified groups (og_add_group_action)
  $permissions['execute Add post to the specified groups (og_add_group_action)'] = array(
    'name' => 'execute Add post to the specified groups (og_add_group_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Approve user subscription to the specified group (og_approve_user_action)
  $permissions['execute Approve user subscription to the specified group (og_approve_user_action)'] = array(
    'name' => 'execute Approve user subscription to the specified group (og_approve_user_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Ban IP address of current user (user_block_ip_action)
  $permissions['execute Ban IP address of current user (user_block_ip_action)'] = array(
    'name' => 'execute Ban IP address of current user (user_block_ip_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Block current user (user_block_user_action)
  $permissions['execute Block current user (user_block_user_action)'] = array(
    'name' => 'execute Block current user (user_block_user_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Block the selected users (user_user_operations_block)
  $permissions['execute Block the selected users (user_user_operations_block)'] = array(
    'name' => 'execute Block the selected users (user_user_operations_block)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Change the author of a post (node_assign_owner_action)
  $permissions['execute Change the author of a post (node_assign_owner_action)'] = array(
    'name' => 'execute Change the author of a post (node_assign_owner_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Delete comment (views_bulk_operations_delete_comment_action)
  $permissions['execute Delete comment (views_bulk_operations_delete_comment_action)'] = array(
    'name' => 'execute Delete comment (views_bulk_operations_delete_comment_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Delete node (views_bulk_operations_delete_node_action)
  $permissions['execute Delete node (views_bulk_operations_delete_node_action)'] = array(
    'name' => 'execute Delete node (views_bulk_operations_delete_node_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Delete term (views_bulk_operations_delete_term_action)
  $permissions['execute Delete term (views_bulk_operations_delete_term_action)'] = array(
    'name' => 'execute Delete term (views_bulk_operations_delete_term_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Delete user (views_bulk_operations_delete_user_action)
  $permissions['execute Delete user (views_bulk_operations_delete_user_action)'] = array(
    'name' => 'execute Delete user (views_bulk_operations_delete_user_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Demote from front page (node_mass_update)
  $permissions['execute Demote from front page (node_mass_update)'] = array(
    'name' => 'execute Demote from front page (node_mass_update)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Demote user from an administrator in the specified group (og_demote_user_action)
  $permissions['execute Demote user from an administrator in the specified group (og_demote_user_action)'] = array(
    'name' => 'execute Demote user from an administrator in the specified group (og_demote_user_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Deny user subscription to the specified group (og_deny_user_action)
  $permissions['execute Deny user subscription to the specified group (og_deny_user_action)'] = array(
    'name' => 'execute Deny user subscription to the specified group (og_deny_user_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Display a message to the user (system_message_action)
  $permissions['execute Display a message to the user (system_message_action)'] = array(
    'name' => 'execute Display a message to the user (system_message_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Download archive of selected files (views_bulk_operations_archive_action)
  $permissions['execute Download archive of selected files (views_bulk_operations_archive_action)'] = array(
    'name' => 'execute Download archive of selected files (views_bulk_operations_archive_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Execute a VBO programmatically (views_bulk_operations_action)
  $permissions['execute Execute a VBO programmatically (views_bulk_operations_action)'] = array(
    'name' => 'execute Execute a VBO programmatically (views_bulk_operations_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Execute arbitrary PHP script (views_bulk_operations_script_action)
  $permissions['execute Execute arbitrary PHP script (views_bulk_operations_script_action)'] = array(
    'name' => 'execute Execute arbitrary PHP script (views_bulk_operations_script_action)',
    'roles' => array(),
  );

  // Exported permission: execute Make post private to its groups (og_make_private_action)
  $permissions['execute Make post private to its groups (og_make_private_action)'] = array(
    'name' => 'execute Make post private to its groups (og_make_private_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Make post publicly visible (og_make_public_action)
  $permissions['execute Make post publicly visible (og_make_public_action)'] = array(
    'name' => 'execute Make post publicly visible (og_make_public_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Make post sticky (node_make_sticky_action)
  $permissions['execute Make post sticky (node_make_sticky_action)'] = array(
    'name' => 'execute Make post sticky (node_make_sticky_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Make post unsticky (node_make_unsticky_action)
  $permissions['execute Make post unsticky (node_make_unsticky_action)'] = array(
    'name' => 'execute Make post unsticky (node_make_unsticky_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Make sticky (node_mass_update)
  $permissions['execute Make sticky (node_mass_update)'] = array(
    'name' => 'execute Make sticky (node_mass_update)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Modify node fields (views_bulk_operations_fields_action)
  $permissions['execute Modify node fields (views_bulk_operations_fields_action)'] = array(
    'name' => 'execute Modify node fields (views_bulk_operations_fields_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Modify profile fields (views_bulk_operations_profile_action)
  $permissions['execute Modify profile fields (views_bulk_operations_profile_action)'] = array(
    'name' => 'execute Modify profile fields (views_bulk_operations_profile_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Modify user roles (views_bulk_operations_user_roles_action)
  $permissions['execute Modify user roles (views_bulk_operations_user_roles_action)'] = array(
    'name' => 'execute Modify user roles (views_bulk_operations_user_roles_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Pass objects as arguments to a page (views_bulk_operations_argument_selector_action)
  $permissions['execute Pass objects as arguments to a page (views_bulk_operations_argument_selector_action)'] = array(
    'name' => 'execute Pass objects as arguments to a page (views_bulk_operations_argument_selector_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Promote post to front page (node_promote_action)
  $permissions['execute Promote post to front page (node_promote_action)'] = array(
    'name' => 'execute Promote post to front page (node_promote_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Promote to front page (node_mass_update)
  $permissions['execute Promote to front page (node_mass_update)'] = array(
    'name' => 'execute Promote to front page (node_mass_update)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Promote user to an administrator in the specified group (og_promote_user_action)
  $permissions['execute Promote user to an administrator in the specified group (og_promote_user_action)'] = array(
    'name' => 'execute Promote user to an administrator in the specified group (og_promote_user_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Publish (node_mass_update)
  $permissions['execute Publish (node_mass_update)'] = array(
    'name' => 'execute Publish (node_mass_update)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Publish post (node_publish_action)
  $permissions['execute Publish post (node_publish_action)'] = array(
    'name' => 'execute Publish post (node_publish_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Redirect to URL (system_goto_action)
  $permissions['execute Redirect to URL (system_goto_action)'] = array(
    'name' => 'execute Redirect to URL (system_goto_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Remove post from all groups (og_remove_groups_action)
  $permissions['execute Remove post from all groups (og_remove_groups_action)'] = array(
    'name' => 'execute Remove post from all groups (og_remove_groups_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Remove post from front page (node_unpromote_action)
  $permissions['execute Remove post from front page (node_unpromote_action)'] = array(
    'name' => 'execute Remove post from front page (node_unpromote_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Remove post from the specified groups (og_remove_group_action)
  $permissions['execute Remove post from the specified groups (og_remove_group_action)'] = array(
    'name' => 'execute Remove post from the specified groups (og_remove_group_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Remove stickiness (node_mass_update)
  $permissions['execute Remove stickiness (node_mass_update)'] = array(
    'name' => 'execute Remove stickiness (node_mass_update)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Save post (node_save_action)
  $permissions['execute Save post (node_save_action)'] = array(
    'name' => 'execute Save post (node_save_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Send account notification (views_bulk_operations_ruleset_action_rules_send_account_notification)
  $permissions['execute Send account notification (views_bulk_operations_ruleset_action_rules_send_account_notification)'] = array(
    'name' => 'execute Send account notification (views_bulk_operations_ruleset_action_rules_send_account_notification)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Send e-mail (system_send_email_action)
  $permissions['execute Send e-mail (system_send_email_action)'] = array(
    'name' => 'execute Send e-mail (system_send_email_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Subscribe user to the specified groups (og_subscribe_user_action)
  $permissions['execute Subscribe user to the specified groups (og_subscribe_user_action)'] = array(
    'name' => 'execute Subscribe user to the specified groups (og_subscribe_user_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Unblock the selected users (user_user_operations_unblock)
  $permissions['execute Unblock the selected users (user_user_operations_unblock)'] = array(
    'name' => 'execute Unblock the selected users (user_user_operations_unblock)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Unpublish (node_mass_update)
  $permissions['execute Unpublish (node_mass_update)'] = array(
    'name' => 'execute Unpublish (node_mass_update)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Unpublish post (node_unpublish_action)
  $permissions['execute Unpublish post (node_unpublish_action)'] = array(
    'name' => 'execute Unpublish post (node_unpublish_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Unpublish post containing keyword(s) (node_unpublish_by_keyword_action)
  $permissions['execute Unpublish post containing keyword(s) (node_unpublish_by_keyword_action)'] = array(
    'name' => 'execute Unpublish post containing keyword(s) (node_unpublish_by_keyword_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Unsubscribe user from the specified groups (og_unsubscribe_user_action)
  $permissions['execute Unsubscribe user from the specified groups (og_unsubscribe_user_action)'] = array(
    'name' => 'execute Unsubscribe user from the specified groups (og_unsubscribe_user_action)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: execute Update automatic nodetitles (auto_nodetitle_operations_update)
  $permissions['execute Update automatic nodetitles (auto_nodetitle_operations_update)'] = array(
    'name' => 'execute Update automatic nodetitles (auto_nodetitle_operations_update)',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: import student_import feeds
  $permissions['import student_import feeds'] = array(
    'name' => 'import student_import feeds',
    'roles' => array(
      '0' => 'Update-data',
    ),
  );

  // Exported permission: import users
  $permissions['import users'] = array(
    'name' => 'import users',
    'roles' => array(),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
  );

  // Exported permission: manage lt_students
  $permissions['manage lt_students'] = array(
    'name' => 'manage lt_students',
    'roles' => array(
      '0' => 'Admin-edit',
    ),
  );

  // Exported permission: og user import
  $permissions['og user import'] = array(
    'name' => 'og user import',
    'roles' => array(),
  );

  // Exported permission: perform backup
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      '0' => 'Update-data',
    ),
  );

  // Exported permission: record contacts
  $permissions['record contacts'] = array(
    'name' => 'record contacts',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: restore from backup
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(),
  );

  // Exported permission: use finder
  $permissions['use finder'] = array(
    'name' => 'use finder',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: use realname
  $permissions['use realname'] = array(
    'name' => 'use realname',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view all lt_students
  $permissions['view all lt_students'] = array(
    'name' => 'view all lt_students',
    'roles' => array(
      '0' => 'Admin-view',
    ),
  );

  // Exported permission: view field_leadershiptype
  $permissions['view field_leadershiptype'] = array(
    'name' => 'view field_leadershiptype',
    'roles' => array(),
  );

  // Exported permission: view field_parents_cell
  $permissions['view field_parents_cell'] = array(
    'name' => 'view field_parents_cell',
    'roles' => array(
      '0' => 'Admin-view',
      '1' => 'View parent info',
    ),
  );

  // Exported permission: view field_parents_email
  $permissions['view field_parents_email'] = array(
    'name' => 'view field_parents_email',
    'roles' => array(
      '0' => 'Admin-view',
      '1' => 'View parent info',
    ),
  );

  // Exported permission: view field_parents_email2
  $permissions['view field_parents_email2'] = array(
    'name' => 'view field_parents_email2',
    'roles' => array(),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
  );

  return $permissions;
}
