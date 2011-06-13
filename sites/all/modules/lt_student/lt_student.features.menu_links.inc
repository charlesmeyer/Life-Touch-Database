<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function lt_student_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:node/add/lt-student
  $menu_links['primary-links:node/add/lt-student'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add/lt-student',
    'router_path' => 'node/add/lt-student',
    'link_title' => 'Add',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a new student.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: secondary-links:admin/manage
  $menu_links['secondary-links:admin/manage'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'admin/manage',
    'router_path' => 'admin/manage',
    'link_title' => 'Management',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage student database',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: secondary-links:logout
  $menu_links['secondary-links:logout'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: secondary-links:user/%
  $menu_links['secondary-links:user/%'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'user/%',
    'router_path' => 'user/%',
    'link_title' => 'My account',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit user account',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add');
  t('Log out');
  t('Management');
  t('My account');


  return $menu_links;
}
