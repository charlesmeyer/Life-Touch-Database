<?php

/**
 * Implementation of hook_views_default_views().
 */
function lt_student_views_default_views() {
  $views = array();

  // Exported view: birthday
  $view = new view;
  $view->name = 'birthday';
  $view->description = 'Birthdays';
  $view->tag = 'class';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_first_value' => 'field_first_value',
    'field_last_value' => 'field_last_value',
    'field_gender_value' => 'field_gender_value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_first_value' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_last_value' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_gender_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: First (field_first) */
  $handler->display->display_options['fields']['field_first_value']['id'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['table'] = 'node_data_field_first';
  $handler->display->display_options['fields']['field_first_value']['field'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['label'] = 'First';
  $handler->display->display_options['fields']['field_first_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_value']['link_to_node'] = 1;
  /* Field: Content: Last (field_last) */
  $handler->display->display_options['fields']['field_last_value']['id'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['table'] = 'node_data_field_last';
  $handler->display->display_options['fields']['field_last_value']['field'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['label'] = 'Last';
  $handler->display->display_options['fields']['field_last_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_value']['link_to_node'] = 0;
  /* Field: Content: Gender (field_gender) */
  $handler->display->display_options['fields']['field_gender_value']['id'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['table'] = 'node_data_field_gender';
  $handler->display->display_options['fields']['field_gender_value']['field'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['label'] = 'Gender';
  $handler->display->display_options['fields']['field_gender_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['link_to_node'] = 0;
  /* Field: Content: Birthday (field_birthday) */
  $handler->display->display_options['fields']['field_birthday_value']['id'] = 'field_birthday_value';
  $handler->display->display_options['fields']['field_birthday_value']['table'] = 'node_data_field_birthday';
  $handler->display->display_options['fields']['field_birthday_value']['field'] = 'field_birthday_value';
  $handler->display->display_options['fields']['field_birthday_value']['label'] = 'Birthday';
  $handler->display->display_options['fields']['field_birthday_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['format'] = 'short';
  /* Argument: Organic groups: Groups */
  $handler->display->display_options['arguments']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['arguments']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['arguments']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['arguments']['group_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['group_nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['group_nid']['title'] = '%1';
  $handler->display->display_options['arguments']['group_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['group_nid']['validate_type'] = 'node';
  $handler->display->display_options['arguments']['group_nid']['validate_options']['types'] = array(
    'lt_class' => 'lt_class',
  );
  $handler->display->display_options['arguments']['group_nid']['validate_options']['access'] = 1;
  $handler->display->display_options['arguments']['group_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['group_nid']['not'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lt_student' => 'lt_student',
  );
  /* Filter: Content: Status (field_status) - Allowed values */
  $handler->display->display_options['filters']['field_status_value_many_to_one']['id'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['table'] = 'node_data_field_status';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['field'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['value'] = array(
    'Active' => 'Active',
  );
  $handler->display->display_options['filters']['field_status_value_many_to_one']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['operator'] = 'field_status_value_many_to_one_op';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['identifier'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['reduce'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'class/%/birthdays';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Birthdays';
  $handler->display->display_options['menu']['description'] = 'Students not visited recently';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Class';
  $handler->display->display_options['tab_options']['weight'] = '0';

  $views[$view->name] = $view;

  // Exported view: class_contact_log
  $view = new view;
  $view->name = 'class_contact_log';
  $view->description = 'Class Contact Log';
  $view->tag = 'class';
  $view->base_table = 'lt_contact';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Visitation log';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'comments' => 'comments',
    'date' => 'date',
    'nid' => 'nid',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'comments' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'date' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'nid' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'type' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Relationship: Student Database: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'lt_contact';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Relationship: Student Database: Node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'lt_contact';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = 'Student';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Student Database: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'lt_contact';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  /* Field: Student Database: Date */
  $handler->display->display_options['fields']['date']['id'] = 'date';
  $handler->display->display_options['fields']['date']['table'] = 'lt_contact';
  $handler->display->display_options['fields']['date']['field'] = 'date';
  $handler->display->display_options['fields']['date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['date']['empty_zero'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Worker';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: Student Database: Comments */
  $handler->display->display_options['fields']['comments']['id'] = 'comments';
  $handler->display->display_options['fields']['comments']['table'] = 'lt_contact';
  $handler->display->display_options['fields']['comments']['field'] = 'comments';
  $handler->display->display_options['fields']['comments']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comments']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['comments']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comments']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comments']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comments']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comments']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comments']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comments']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comments']['empty_zero'] = 0;
  /* Sort criterion: Student Database: Date */
  $handler->display->display_options['sorts']['date']['id'] = 'date';
  $handler->display->display_options['sorts']['date']['table'] = 'lt_contact';
  $handler->display->display_options['sorts']['date']['field'] = 'date';
  $handler->display->display_options['sorts']['date']['order'] = 'DESC';
  /* Argument: Organic groups: Groups */
  $handler->display->display_options['arguments']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['arguments']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['arguments']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['arguments']['group_nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['group_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['group_nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['group_nid']['title'] = '%1';
  $handler->display->display_options['arguments']['group_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['group_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['group_nid']['not'] = 0;
  /* Filter: Realname: User Realname */
  $handler->display->display_options['filters']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['table'] = 'realname';
  $handler->display->display_options['filters']['uid_1']['field'] = 'uid';
  $handler->display->display_options['filters']['uid_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_1']['value'] = '';
  $handler->display->display_options['filters']['uid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid_1']['expose']['operator'] = 'uid_1_op';
  $handler->display->display_options['filters']['uid_1']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['uid_1']['expose']['label'] = 'Worker';
  $handler->display->display_options['filters']['uid_1']['expose']['identifier'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['uid_1']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'class/%/visitation_log';

  $views[$view->name] = $view;

  // Exported view: class_list
  $view = new view;
  $view->name = 'class_list';
  $view->description = 'Class list';
  $view->tag = 'admin';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Class List';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => 5,
    4 => 4,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'name' => 'name',
    'post_count' => 'post_count',
    'member_count' => 'member_count',
    'edit_node' => 'edit_node',
    'private' => 'private',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'post_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'member_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'private' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = '';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<h2><a href="/node/add/lt-class?destination=admin/manage/classes&mode=add" >New class</a></h2>';
  $handler->display->display_options['footer']['area']['format'] = '2';
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'class/[nid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Teacher';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: Organic groups: Group: Post count */
  $handler->display->display_options['fields']['post_count']['id'] = 'post_count';
  $handler->display->display_options['fields']['post_count']['table'] = 'og';
  $handler->display->display_options['fields']['post_count']['field'] = 'post_count';
  $handler->display->display_options['fields']['post_count']['label'] = 'Students';
  $handler->display->display_options['fields']['post_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['post_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['post_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['post_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['post_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['post_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['post_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['post_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['post_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['post_count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['post_count']['format_plural'] = 0;
  /* Field: Organic groups: Group: Members count */
  $handler->display->display_options['fields']['member_count']['id'] = 'member_count';
  $handler->display->display_options['fields']['member_count']['table'] = 'og';
  $handler->display->display_options['fields']['member_count']['field'] = 'member_count';
  $handler->display->display_options['fields']['member_count']['label'] = 'Workers';
  $handler->display->display_options['fields']['member_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['member_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['member_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['member_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['member_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['member_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['member_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['member_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['member_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['member_count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['member_count']['format_plural'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit class';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Filter: Organic groups: Group types */
  $handler->display->display_options['filters']['type_groups']['id'] = 'type_groups';
  $handler->display->display_options['filters']['type_groups']['table'] = 'og';
  $handler->display->display_options['filters']['type_groups']['field'] = 'type_groups';
  $handler->display->display_options['filters']['type_groups']['value'] = array(
    'lt_class' => 'lt_class',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/manage/classes';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Classes';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Management';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'secondary-links';

  $views[$view->name] = $view;

  // Exported view: contact_log
  $view = new view;
  $view->name = 'contact_log';
  $view->description = 'Contact Log';
  $view->tag = 'user';
  $view->base_table = 'lt_contact';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Evangelism Journal ';
  $handler->display->display_options['css_class'] = 'contact-record-list';
  $handler->display->display_options['access']['type'] = 'userarg';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'date' => 'date',
    'title' => 'title',
    'type' => 'type',
    'comments' => 'comments',
  );
  $handler->display->display_options['row_options']['separator'] = '-';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  /* Relationship: Student Database: Node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'lt_contact';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = 0;
  /* Field: Student Database: Date */
  $handler->display->display_options['fields']['date']['id'] = 'date';
  $handler->display->display_options['fields']['date']['table'] = 'lt_contact';
  $handler->display->display_options['fields']['date']['field'] = 'date';
  $handler->display->display_options['fields']['date']['label'] = '';
  $handler->display->display_options['fields']['date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['date']['custom_date_format'] = 'D, n/j/y';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Student Database: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'lt_contact';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  /* Field: Student Database: Comments */
  $handler->display->display_options['fields']['comments']['id'] = 'comments';
  $handler->display->display_options['fields']['comments']['table'] = 'lt_contact';
  $handler->display->display_options['fields']['comments']['field'] = 'comments';
  $handler->display->display_options['fields']['comments']['label'] = '';
  $handler->display->display_options['fields']['comments']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comments']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['comments']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comments']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comments']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comments']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comments']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comments']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comments']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comments']['empty_zero'] = 0;
  /* Sort criterion: Student Database: Date */
  $handler->display->display_options['sorts']['date']['id'] = 'date';
  $handler->display->display_options['sorts']['date']['table'] = 'lt_contact';
  $handler->display->display_options['sorts']['date']['field'] = 'date';
  $handler->display->display_options['sorts']['date']['order'] = 'DESC';
  /* Argument: Student Database: Author */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'lt_contact';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'lt_students/%/reports/log';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Journal ';
  $handler->display->display_options['menu']['description'] = 'A log of your personal work';
  $handler->display->display_options['menu']['weight'] = '2';

  $views[$view->name] = $view;

  // Exported view: no_contact
  $view = new view;
  $view->name = 'no_contact';
  $view->description = 'No contact';
  $view->tag = 'class';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_first_value' => 'field_first_value',
    'field_last_value' => 'field_last_value',
    'field_gender_value' => 'field_gender_value',
    'field_last_contact_value' => 'field_last_contact_value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_first_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_last_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_gender_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_last_contact_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: First (field_first) */
  $handler->display->display_options['fields']['field_first_value']['id'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['table'] = 'node_data_field_first';
  $handler->display->display_options['fields']['field_first_value']['field'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['label'] = 'First';
  $handler->display->display_options['fields']['field_first_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_value']['link_to_node'] = 1;
  /* Field: Content: Last (field_last) */
  $handler->display->display_options['fields']['field_last_value']['id'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['table'] = 'node_data_field_last';
  $handler->display->display_options['fields']['field_last_value']['field'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['label'] = 'Last';
  $handler->display->display_options['fields']['field_last_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_value']['link_to_node'] = 0;
  /* Field: Content: Gender (field_gender) */
  $handler->display->display_options['fields']['field_gender_value']['id'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['table'] = 'node_data_field_gender';
  $handler->display->display_options['fields']['field_gender_value']['field'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['label'] = 'Gender';
  $handler->display->display_options['fields']['field_gender_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['link_to_node'] = 0;
  /* Field: Content: Last Contact (field_last_contact) */
  $handler->display->display_options['fields']['field_last_contact_value']['id'] = 'field_last_contact_value';
  $handler->display->display_options['fields']['field_last_contact_value']['table'] = 'node_data_field_last_contact';
  $handler->display->display_options['fields']['field_last_contact_value']['field'] = 'field_last_contact_value';
  $handler->display->display_options['fields']['field_last_contact_value']['label'] = 'Last Contact';
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['format'] = 'short';
  /* Sort criterion: Content: Last Contact (field_last_contact) */
  $handler->display->display_options['sorts']['field_last_contact_value']['id'] = 'field_last_contact_value';
  $handler->display->display_options['sorts']['field_last_contact_value']['table'] = 'node_data_field_last_contact';
  $handler->display->display_options['sorts']['field_last_contact_value']['field'] = 'field_last_contact_value';
  /* Sort criterion: Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Argument: Organic groups: Groups */
  $handler->display->display_options['arguments']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['arguments']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['arguments']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['arguments']['group_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['group_nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['group_nid']['title'] = '%1';
  $handler->display->display_options['arguments']['group_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['group_nid']['validate_type'] = 'node';
  $handler->display->display_options['arguments']['group_nid']['validate_options']['types'] = array(
    'lt_class' => 'lt_class',
  );
  $handler->display->display_options['arguments']['group_nid']['validate_options']['access'] = 1;
  $handler->display->display_options['arguments']['group_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['group_nid']['not'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lt_student' => 'lt_student',
  );
  /* Filter: Content: Status (field_status) - Allowed values */
  $handler->display->display_options['filters']['field_status_value_many_to_one']['id'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['table'] = 'node_data_field_status';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['field'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['value'] = array(
    'Active' => 'Active',
  );
  $handler->display->display_options['filters']['field_status_value_many_to_one']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['operator'] = 'field_status_value_many_to_one_op';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['identifier'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['reduce'] = 0;
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '<=';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'No contact after';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node_data_field_last_contact.field_last_contact_value' => 'node_data_field_last_contact.field_last_contact_value',
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '-1 month';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'class/%/no-contact';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'No contact';
  $handler->display->display_options['menu']['description'] = 'Students not contacted recently';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Class';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lt_student' => 'lt_student',
  );
  /* Filter: Content: Status (field_status) - Allowed values */
  $handler->display->display_options['filters']['field_status_value_many_to_one']['id'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['table'] = 'node_data_field_status';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['field'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['value'] = array(
    'active' => 'active',
  );
  $handler->display->display_options['filters']['field_status_value_many_to_one']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['operator'] = 'field_status_value_many_to_one_op';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['identifier'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['reduce'] = 0;
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'empty';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'No contact after';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node_data_field_last_contact.field_last_contact_value' => 'node_data_field_last_contact.field_last_contact_value',
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );

  /* Display: All classes */
  $handler = $view->new_display('page', 'All classes', 'all');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => 4,
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_first_value' => 'field_first_value',
    'field_last_value' => 'field_last_value',
    'field_gender_value' => 'field_gender_value',
    'field_last_contact_value' => 'field_last_contact_value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_first_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_last_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_gender_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_last_contact_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Organic groups: Group node (post) */
  $handler->display->display_options['relationships']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['relationships']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['required'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: First (field_first) */
  $handler->display->display_options['fields']['field_first_value']['id'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['table'] = 'node_data_field_first';
  $handler->display->display_options['fields']['field_first_value']['field'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['label'] = 'First';
  $handler->display->display_options['fields']['field_first_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_value']['link_to_node'] = 1;
  /* Field: Content: Last (field_last) */
  $handler->display->display_options['fields']['field_last_value']['id'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['table'] = 'node_data_field_last';
  $handler->display->display_options['fields']['field_last_value']['field'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['label'] = 'Last';
  $handler->display->display_options['fields']['field_last_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_value']['link_to_node'] = 0;
  /* Field: Content: Gender (field_gender) */
  $handler->display->display_options['fields']['field_gender_value']['id'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['table'] = 'node_data_field_gender';
  $handler->display->display_options['fields']['field_gender_value']['field'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['label'] = 'Gender';
  $handler->display->display_options['fields']['field_gender_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['link_to_node'] = 0;
  /* Field: Content: Last Contact (field_last_contact) */
  $handler->display->display_options['fields']['field_last_contact_value']['id'] = 'field_last_contact_value';
  $handler->display->display_options['fields']['field_last_contact_value']['table'] = 'node_data_field_last_contact';
  $handler->display->display_options['fields']['field_last_contact_value']['field'] = 'field_last_contact_value';
  $handler->display->display_options['fields']['field_last_contact_value']['label'] = 'Last Contact';
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['format'] = 'short';
  /* Field: Organic groups: Groups */
  $handler->display->display_options['fields']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['fields']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['fields']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['fields']['group_nid']['label'] = 'Class';
  $handler->display->display_options['fields']['group_nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['group_nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_nid']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'group_nid';
  /* Sort criterion: Content: Last Contact (field_last_contact) */
  $handler->display->display_options['sorts']['field_last_contact_value']['id'] = 'field_last_contact_value';
  $handler->display->display_options['sorts']['field_last_contact_value']['table'] = 'node_data_field_last_contact';
  $handler->display->display_options['sorts']['field_last_contact_value']['field'] = 'field_last_contact_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lt_student' => 'lt_student',
  );
  /* Filter: Content: Status (field_status) - Allowed values */
  $handler->display->display_options['filters']['field_status_value_many_to_one']['id'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['table'] = 'node_data_field_status';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['field'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['value'] = array(
    'Active' => 'Active',
  );
  $handler->display->display_options['filters']['field_status_value_many_to_one']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['operator'] = 'field_status_value_many_to_one_op';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['identifier'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['reduce'] = 0;
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '<=';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'No contact after';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node_data_field_last_contact.field_last_contact_value' => 'node_data_field_last_contact.field_last_contact_value',
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '-1 month';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'admin/manage/students/nocontact';

  /* Display: All classes no visit */
  $handler = $view->new_display('page', 'All classes no visit', 'page_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => 4,
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_first_value' => 'field_first_value',
    'field_last_value' => 'field_last_value',
    'field_gender_value' => 'field_gender_value',
    'field_last_contact_value' => 'field_last_contact_value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_first_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_last_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_gender_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_last_contact_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Organic groups: Group node (post) */
  $handler->display->display_options['relationships']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['relationships']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['required'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: First (field_first) */
  $handler->display->display_options['fields']['field_first_value']['id'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['table'] = 'node_data_field_first';
  $handler->display->display_options['fields']['field_first_value']['field'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['label'] = 'First';
  $handler->display->display_options['fields']['field_first_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_value']['link_to_node'] = 1;
  /* Field: Content: Last (field_last) */
  $handler->display->display_options['fields']['field_last_value']['id'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['table'] = 'node_data_field_last';
  $handler->display->display_options['fields']['field_last_value']['field'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['label'] = 'Last';
  $handler->display->display_options['fields']['field_last_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_value']['link_to_node'] = 0;
  /* Field: Content: Gender (field_gender) */
  $handler->display->display_options['fields']['field_gender_value']['id'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['table'] = 'node_data_field_gender';
  $handler->display->display_options['fields']['field_gender_value']['field'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['label'] = 'Gender';
  $handler->display->display_options['fields']['field_gender_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['link_to_node'] = 0;
  /* Field: Content: Last Visit (field_last_visit) */
  $handler->display->display_options['fields']['field_last_visit_value']['id'] = 'field_last_visit_value';
  $handler->display->display_options['fields']['field_last_visit_value']['table'] = 'node_data_field_last_visit';
  $handler->display->display_options['fields']['field_last_visit_value']['field'] = 'field_last_visit_value';
  $handler->display->display_options['fields']['field_last_visit_value']['label'] = 'Last Visit';
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_last_visit_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_last_visit_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['format'] = 'short';
  /* Field: Organic groups: Groups */
  $handler->display->display_options['fields']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['fields']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['fields']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['fields']['group_nid']['label'] = 'Class';
  $handler->display->display_options['fields']['group_nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['group_nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_nid']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'group_nid';
  /* Sort criterion: Content: Last Contact (field_last_contact) */
  $handler->display->display_options['sorts']['field_last_contact_value']['id'] = 'field_last_contact_value';
  $handler->display->display_options['sorts']['field_last_contact_value']['table'] = 'node_data_field_last_contact';
  $handler->display->display_options['sorts']['field_last_contact_value']['field'] = 'field_last_contact_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lt_student' => 'lt_student',
  );
  /* Filter: Content: Status (field_status) - Allowed values */
  $handler->display->display_options['filters']['field_status_value_many_to_one']['id'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['table'] = 'node_data_field_status';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['field'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['value'] = array(
    'Active' => 'Active',
  );
  $handler->display->display_options['filters']['field_status_value_many_to_one']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['operator'] = 'field_status_value_many_to_one_op';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['identifier'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['reduce'] = 0;
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '<=';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'No contact after';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node_data_field_last_visit.field_last_visit_value' => 'node_data_field_last_visit.field_last_visit_value',
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '-1 month';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'admin/manage/students/novisit';

  $views[$view->name] = $view;

  // Exported view: no_visit
  $view = new view;
  $view->name = 'no_visit';
  $view->description = 'No visit';
  $view->tag = 'class';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_first_value' => 'field_first_value',
    'field_last_value' => 'field_last_value',
    'field_gender_value' => 'field_gender_value',
    'field_last_contact_value' => 'field_last_contact_value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_first_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_last_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_gender_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_last_contact_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: First (field_first) */
  $handler->display->display_options['fields']['field_first_value']['id'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['table'] = 'node_data_field_first';
  $handler->display->display_options['fields']['field_first_value']['field'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['label'] = 'First';
  $handler->display->display_options['fields']['field_first_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_value']['link_to_node'] = 1;
  /* Field: Content: Last (field_last) */
  $handler->display->display_options['fields']['field_last_value']['id'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['table'] = 'node_data_field_last';
  $handler->display->display_options['fields']['field_last_value']['field'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['label'] = 'Last';
  $handler->display->display_options['fields']['field_last_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_value']['link_to_node'] = 0;
  /* Field: Content: Gender (field_gender) */
  $handler->display->display_options['fields']['field_gender_value']['id'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['table'] = 'node_data_field_gender';
  $handler->display->display_options['fields']['field_gender_value']['field'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['label'] = 'Gender';
  $handler->display->display_options['fields']['field_gender_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['link_to_node'] = 0;
  /* Field: Content: Last Visit (field_last_visit) */
  $handler->display->display_options['fields']['field_last_visit_value']['id'] = 'field_last_visit_value';
  $handler->display->display_options['fields']['field_last_visit_value']['table'] = 'node_data_field_last_visit';
  $handler->display->display_options['fields']['field_last_visit_value']['field'] = 'field_last_visit_value';
  $handler->display->display_options['fields']['field_last_visit_value']['label'] = 'Last Visit';
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['format'] = 'short';
  /* Sort criterion: Content: Last Contact (field_last_contact) */
  $handler->display->display_options['sorts']['field_last_contact_value']['id'] = 'field_last_contact_value';
  $handler->display->display_options['sorts']['field_last_contact_value']['table'] = 'node_data_field_last_contact';
  $handler->display->display_options['sorts']['field_last_contact_value']['field'] = 'field_last_contact_value';
  $handler->display->display_options['sorts']['field_last_contact_value']['order'] = 'DESC';
  /* Argument: Organic groups: Groups */
  $handler->display->display_options['arguments']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['arguments']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['arguments']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['arguments']['group_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['group_nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['group_nid']['title'] = '%1';
  $handler->display->display_options['arguments']['group_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['group_nid']['validate_type'] = 'node';
  $handler->display->display_options['arguments']['group_nid']['validate_options']['types'] = array(
    'lt_class' => 'lt_class',
  );
  $handler->display->display_options['arguments']['group_nid']['validate_options']['access'] = 1;
  $handler->display->display_options['arguments']['group_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['group_nid']['not'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lt_student' => 'lt_student',
  );
  /* Filter: Content: Status (field_status) - Allowed values */
  $handler->display->display_options['filters']['field_status_value_many_to_one']['id'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['table'] = 'node_data_field_status';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['field'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['value'] = array(
    'Active' => 'Active',
  );
  $handler->display->display_options['filters']['field_status_value_many_to_one']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['operator'] = 'field_status_value_many_to_one_op';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['identifier'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['reduce'] = 0;
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '<=';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'No visit after';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node_data_field_last_visit.field_last_visit_value' => 'node_data_field_last_visit.field_last_visit_value',
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '1 months ago';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'class/%/no-visit';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'No visit';
  $handler->display->display_options['menu']['description'] = 'Students not visited recently';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Class';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lt_student' => 'lt_student',
  );
  /* Filter: Content: Status (field_status) - Allowed values */
  $handler->display->display_options['filters']['field_status_value_many_to_one']['id'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['table'] = 'node_data_field_status';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['field'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['value'] = array(
    'active' => 'active',
  );
  $handler->display->display_options['filters']['field_status_value_many_to_one']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['operator'] = 'field_status_value_many_to_one_op';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['identifier'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['reduce'] = 0;
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'empty';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'No visit after';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node_data_field_last_visit.field_last_visit_value' => 'node_data_field_last_visit.field_last_visit_value',
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '1 months ago';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );

  $views[$view->name] = $view;

  // Exported view: print_visit
  $view = new view;
  $view->name = 'print_visit';
  $view->description = 'Print Visist';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_city_value' => 'field_city_value',
    'field_state_value' => 'field_state_value',
    'field_zip_value' => 'field_zip_value',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Extra lines';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = 'Type of visit: _________________________
Visited by: _________________________
Date visited: ________________
Comments: _____________________________________
_______________________________________________
_______________________________________________';
  $handler->display->display_options['footer']['area']['format'] = '1';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Parent&#039;s names (field_parents) */
  $handler->display->display_options['fields']['field_parents_value']['id'] = 'field_parents_value';
  $handler->display->display_options['fields']['field_parents_value']['table'] = 'node_data_field_parents';
  $handler->display->display_options['fields']['field_parents_value']['field'] = 'field_parents_value';
  $handler->display->display_options['fields']['field_parents_value']['label'] = 'Parent\'s names';
  $handler->display->display_options['fields']['field_parents_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_parents_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_parents_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_parents_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['link_to_node'] = 0;
  /* Field: Content: Address (field_address) */
  $handler->display->display_options['fields']['field_address_value']['id'] = 'field_address_value';
  $handler->display->display_options['fields']['field_address_value']['table'] = 'node_data_field_address';
  $handler->display->display_options['fields']['field_address_value']['field'] = 'field_address_value';
  $handler->display->display_options['fields']['field_address_value']['label'] = 'Address';
  $handler->display->display_options['fields']['field_address_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address_value']['link_to_node'] = 0;
  /* Field: Content: City (field_city) */
  $handler->display->display_options['fields']['field_city_value']['id'] = 'field_city_value';
  $handler->display->display_options['fields']['field_city_value']['table'] = 'node_data_field_city';
  $handler->display->display_options['fields']['field_city_value']['field'] = 'field_city_value';
  $handler->display->display_options['fields']['field_city_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_city_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_city_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_city_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_city_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_city_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_city_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_city_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_city_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_city_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_city_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_city_value']['label_type'] = 'none';
  /* Field: Content: State (field_state) */
  $handler->display->display_options['fields']['field_state_value']['id'] = 'field_state_value';
  $handler->display->display_options['fields']['field_state_value']['table'] = 'node_data_field_state';
  $handler->display->display_options['fields']['field_state_value']['field'] = 'field_state_value';
  $handler->display->display_options['fields']['field_state_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_state_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_state_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_state_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_state_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_state_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_state_value']['label_type'] = 'none';
  /* Field: Content: Zip (field_zip) */
  $handler->display->display_options['fields']['field_zip_value']['id'] = 'field_zip_value';
  $handler->display->display_options['fields']['field_zip_value']['table'] = 'node_data_field_zip';
  $handler->display->display_options['fields']['field_zip_value']['field'] = 'field_zip_value';
  $handler->display->display_options['fields']['field_zip_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_zip_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_zip_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_zip_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['label_type'] = 'none';
  /* Field: Content: home (field_phone_home) */
  $handler->display->display_options['fields']['field_phone_home_value']['id'] = 'field_phone_home_value';
  $handler->display->display_options['fields']['field_phone_home_value']['table'] = 'node_data_field_phone_home';
  $handler->display->display_options['fields']['field_phone_home_value']['field'] = 'field_phone_home_value';
  $handler->display->display_options['fields']['field_phone_home_value']['label'] = 'home';
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_home_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['link_to_node'] = 0;
  /* Field: Content: mobile (field_phone_mobile) */
  $handler->display->display_options['fields']['field_phone_mobile_value']['id'] = 'field_phone_mobile_value';
  $handler->display->display_options['fields']['field_phone_mobile_value']['table'] = 'node_data_field_phone_mobile';
  $handler->display->display_options['fields']['field_phone_mobile_value']['field'] = 'field_phone_mobile_value';
  $handler->display->display_options['fields']['field_phone_mobile_value']['label'] = 'mobile';
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_mobile_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['link_to_node'] = 0;
  /* Field: Content: other (field_phone_other) */
  $handler->display->display_options['fields']['field_phone_other_value']['id'] = 'field_phone_other_value';
  $handler->display->display_options['fields']['field_phone_other_value']['table'] = 'node_data_field_phone_other';
  $handler->display->display_options['fields']['field_phone_other_value']['field'] = 'field_phone_other_value';
  $handler->display->display_options['fields']['field_phone_other_value']['label'] = 'other';
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_other_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['link_to_node'] = 0;
  /* Field: Organic groups: Groups */
  $handler->display->display_options['fields']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['fields']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['fields']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['fields']['group_nid']['label'] = 'Class';
  $handler->display->display_options['fields']['group_nid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['group_nid']['empty_zero'] = 0;
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode']['id'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['label'] = '';
  $handler->display->display_options['fields']['phpcode']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode']['value'] = '<iframe width="700" height="500" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="http://maps.google.com/maps?q=<?php print $data->node_data_field_parents_field_address_value; ?>,<?php print $data->node_data_field_parents_field_city_value; ?>,<?php print $data->node_data_field_parents_field_state_value; ?>,<?php print $data->node_data_field_parents_field_zip_value; ?>&amp;z=15&amp;iwloc=J&amp;output=embed"></iframe>';
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['title'] = '%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'print-visit/%';

  $views[$view->name] = $view;

  // Exported view: roster
  $view = new view;
  $view->name = 'roster';
  $view->description = 'Class roster';
  $view->tag = 'class';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_first_value' => 'field_first_value',
    'field_last_value' => 'field_last_value',
    'field_gender_value' => 'field_gender_value',
    'field_grad_year_value' => 'field_grad_year_value',
    'phpcode' => 'phpcode',
    'phpcode_1' => 'phpcode_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_first_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_last_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_gender_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_grad_year_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'phpcode' => array(
      'align' => '',
      'separator' => '',
    ),
    'phpcode_1' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = '';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<h2><?php print l("Full chart", "class/" . arg(1) . "/full"); ?></h2>
<h2><?php print l("Visitation log", "class/" . arg(1) . "/visitation_log"); ?></h2>
<h2><?php print l("Worker visitation report", "class/" . arg(1) . "/visitation-report"); ?></h2>';
  $handler->display->display_options['footer']['area']['format'] = '3';
  /* Field: Content: Photo (field_photo) */
  $handler->display->display_options['fields']['field_photo_fid']['id'] = 'field_photo_fid';
  $handler->display->display_options['fields']['field_photo_fid']['table'] = 'node_data_field_photo';
  $handler->display->display_options['fields']['field_photo_fid']['field'] = 'field_photo_fid';
  $handler->display->display_options['fields']['field_photo_fid']['label'] = 'Photo';
  $handler->display->display_options['fields']['field_photo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_photo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_photo_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_photo_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_photo_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_photo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_photo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_photo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_photo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_photo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_photo_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_photo_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_photo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_photo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_photo_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_photo_fid']['format'] = 'small_linked';
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: First (field_first) */
  $handler->display->display_options['fields']['field_first_value']['id'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['table'] = 'node_data_field_first';
  $handler->display->display_options['fields']['field_first_value']['field'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['label'] = 'First';
  $handler->display->display_options['fields']['field_first_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_value']['link_to_node'] = 1;
  /* Field: Content: Last (field_last) */
  $handler->display->display_options['fields']['field_last_value']['id'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['table'] = 'node_data_field_last';
  $handler->display->display_options['fields']['field_last_value']['field'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['label'] = 'Last';
  $handler->display->display_options['fields']['field_last_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_value']['link_to_node'] = 0;
  /* Field: Content: Gender (field_gender) */
  $handler->display->display_options['fields']['field_gender_value']['id'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['table'] = 'node_data_field_gender';
  $handler->display->display_options['fields']['field_gender_value']['field'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['label'] = 'Gender';
  $handler->display->display_options['fields']['field_gender_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['link_to_node'] = 0;
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode']['id'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['label'] = 'Visits';
  $handler->display->display_options['fields']['phpcode']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE (lt_contact.nid = %d) AND ((lt_contact.type) = (\'visit\'))",  $data->nid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_1']['id'] = 'phpcode_1';
  $handler->display->display_options['fields']['phpcode_1']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_1']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_1']['label'] = 'Total contacts';
  $handler->display->display_options['fields']['phpcode_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE (lt_contact.nid = %d)",  $data->nid)); ?>';
  /* Field: Content: Membership (field_membership) */
  $handler->display->display_options['fields']['field_membership_value']['id'] = 'field_membership_value';
  $handler->display->display_options['fields']['field_membership_value']['table'] = 'node_data_field_membership';
  $handler->display->display_options['fields']['field_membership_value']['field'] = 'field_membership_value';
  $handler->display->display_options['fields']['field_membership_value']['label'] = 'Membership';
  $handler->display->display_options['fields']['field_membership_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_membership_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_membership_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_membership_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_membership_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_membership_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_membership_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_membership_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_membership_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_membership_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_membership_value']['link_to_node'] = 0;
  /* Sort criterion: Content: Last (field_last) */
  $handler->display->display_options['sorts']['field_last_value']['id'] = 'field_last_value';
  $handler->display->display_options['sorts']['field_last_value']['table'] = 'node_data_field_last';
  $handler->display->display_options['sorts']['field_last_value']['field'] = 'field_last_value';
  /* Argument: Organic groups: Groups */
  $handler->display->display_options['arguments']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['arguments']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['arguments']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['arguments']['group_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['group_nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['group_nid']['title'] = '%1';
  $handler->display->display_options['arguments']['group_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['group_nid']['validate_type'] = 'node';
  $handler->display->display_options['arguments']['group_nid']['validate_options']['types'] = array(
    'lt_class' => 'lt_class',
  );
  $handler->display->display_options['arguments']['group_nid']['validate_options']['access'] = 1;
  $handler->display->display_options['arguments']['group_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['group_nid']['not'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lt_student' => 'lt_student',
  );
  /* Filter: Content: Status (field_status) - Allowed values */
  $handler->display->display_options['filters']['field_status_value_many_to_one']['id'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['table'] = 'node_data_field_status';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['field'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['value'] = array(
    'Active' => 'Active',
  );
  $handler->display->display_options['filters']['field_status_value_many_to_one']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['operator'] = 'field_status_value_many_to_one_op';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['identifier'] = 'field_status_value_many_to_one';
  $handler->display->display_options['filters']['field_status_value_many_to_one']['expose']['reduce'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['path'] = 'class/%/roster';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Roster';
  $handler->display->display_options['menu']['description'] = 'View list of students';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Class';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Download spreadsheet';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'class-roster.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: First (field_first) */
  $handler->display->display_options['fields']['field_first_value']['id'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['table'] = 'node_data_field_first';
  $handler->display->display_options['fields']['field_first_value']['field'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['label'] = 'First';
  $handler->display->display_options['fields']['field_first_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_value']['link_to_node'] = 1;
  /* Field: Content: Last (field_last) */
  $handler->display->display_options['fields']['field_last_value']['id'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['table'] = 'node_data_field_last';
  $handler->display->display_options['fields']['field_last_value']['field'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['label'] = 'Last';
  $handler->display->display_options['fields']['field_last_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_value']['link_to_node'] = 0;
  /* Field: Content: Gender (field_gender) */
  $handler->display->display_options['fields']['field_gender_value']['id'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['table'] = 'node_data_field_gender';
  $handler->display->display_options['fields']['field_gender_value']['field'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['label'] = 'Gender';
  $handler->display->display_options['fields']['field_gender_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['link_to_node'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_grad_year_value']['id'] = 'field_grad_year_value';
  $handler->display->display_options['fields']['field_grad_year_value']['table'] = 'node_data_field_grad_year';
  $handler->display->display_options['fields']['field_grad_year_value']['field'] = 'field_grad_year_value';
  $handler->display->display_options['fields']['field_grad_year_value']['label'] = 'Class';
  $handler->display->display_options['fields']['field_grad_year_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_grad_year_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_grad_year_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_grad_year_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_grad_year_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_grad_year_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_grad_year_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_grad_year_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_grad_year_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_grad_year_value']['empty_zero'] = 0;
  /* Field: Content: Address (field_address) */
  $handler->display->display_options['fields']['field_address_value']['id'] = 'field_address_value';
  $handler->display->display_options['fields']['field_address_value']['table'] = 'node_data_field_address';
  $handler->display->display_options['fields']['field_address_value']['field'] = 'field_address_value';
  $handler->display->display_options['fields']['field_address_value']['label'] = 'Address';
  $handler->display->display_options['fields']['field_address_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address_value']['link_to_node'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_baptism_date_value']['id'] = 'field_baptism_date_value';
  $handler->display->display_options['fields']['field_baptism_date_value']['table'] = 'node_data_field_baptism_date';
  $handler->display->display_options['fields']['field_baptism_date_value']['field'] = 'field_baptism_date_value';
  $handler->display->display_options['fields']['field_baptism_date_value']['label'] = 'Baptism Date';
  $handler->display->display_options['fields']['field_baptism_date_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_baptism_date_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_baptism_date_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_baptism_date_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_baptism_date_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_baptism_date_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_baptism_date_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_baptism_date_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_baptism_date_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_baptism_date_value']['empty_zero'] = 0;
  /* Field: Content: Baptized (field_baptized) */
  $handler->display->display_options['fields']['field_baptized_value']['id'] = 'field_baptized_value';
  $handler->display->display_options['fields']['field_baptized_value']['table'] = 'node_data_field_baptized';
  $handler->display->display_options['fields']['field_baptized_value']['field'] = 'field_baptized_value';
  $handler->display->display_options['fields']['field_baptized_value']['label'] = 'Baptized';
  $handler->display->display_options['fields']['field_baptized_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_baptized_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_baptized_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_baptized_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_baptized_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_baptized_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_baptized_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_baptized_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_baptized_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_baptized_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_baptized_value']['link_to_node'] = 0;
  /* Field: Content: Birthday (field_birthday) */
  $handler->display->display_options['fields']['field_birthday_value']['id'] = 'field_birthday_value';
  $handler->display->display_options['fields']['field_birthday_value']['table'] = 'node_data_field_birthday';
  $handler->display->display_options['fields']['field_birthday_value']['field'] = 'field_birthday_value';
  $handler->display->display_options['fields']['field_birthday_value']['label'] = 'Birthday';
  $handler->display->display_options['fields']['field_birthday_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['link_to_node'] = 0;
  /* Field: Content: City (field_city) */
  $handler->display->display_options['fields']['field_city_value']['id'] = 'field_city_value';
  $handler->display->display_options['fields']['field_city_value']['table'] = 'node_data_field_city';
  $handler->display->display_options['fields']['field_city_value']['field'] = 'field_city_value';
  $handler->display->display_options['fields']['field_city_value']['label'] = 'City';
  $handler->display->display_options['fields']['field_city_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_city_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_city_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_city_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_city_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_city_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_city_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_city_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_city_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_city_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_city_value']['link_to_node'] = 0;
  /* Field: Content: Email (field_email) */
  $handler->display->display_options['fields']['field_email_email']['id'] = 'field_email_email';
  $handler->display->display_options['fields']['field_email_email']['table'] = 'node_data_field_email';
  $handler->display->display_options['fields']['field_email_email']['field'] = 'field_email_email';
  $handler->display->display_options['fields']['field_email_email']['label'] = 'Email';
  $handler->display->display_options['fields']['field_email_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_email_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email_email']['link_to_node'] = 0;
  /* Field: Content: Last Contact (field_last_contact) */
  $handler->display->display_options['fields']['field_last_contact_value']['id'] = 'field_last_contact_value';
  $handler->display->display_options['fields']['field_last_contact_value']['table'] = 'node_data_field_last_contact';
  $handler->display->display_options['fields']['field_last_contact_value']['field'] = 'field_last_contact_value';
  $handler->display->display_options['fields']['field_last_contact_value']['label'] = 'Last Contact';
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['link_to_node'] = 0;
  /* Field: Content: Last Visit (field_last_visit) */
  $handler->display->display_options['fields']['field_last_visit_value']['id'] = 'field_last_visit_value';
  $handler->display->display_options['fields']['field_last_visit_value']['table'] = 'node_data_field_last_visit';
  $handler->display->display_options['fields']['field_last_visit_value']['field'] = 'field_last_visit_value';
  $handler->display->display_options['fields']['field_last_visit_value']['label'] = 'Last Visit';
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_visit_value']['link_to_node'] = 0;
  /* Field: Content: Notes (field_comments) */
  $handler->display->display_options['fields']['field_comments_value']['id'] = 'field_comments_value';
  $handler->display->display_options['fields']['field_comments_value']['table'] = 'node_data_field_comments';
  $handler->display->display_options['fields']['field_comments_value']['field'] = 'field_comments_value';
  $handler->display->display_options['fields']['field_comments_value']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_comments_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_comments_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_comments_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_comments_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_comments_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_comments_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_comments_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_comments_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_comments_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_comments_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_comments_value']['link_to_node'] = 0;
  /* Field: Content: Parent&#039;s cell (field_parents_cell) */
  $handler->display->display_options['fields']['field_parents_cell_value']['id'] = 'field_parents_cell_value';
  $handler->display->display_options['fields']['field_parents_cell_value']['table'] = 'node_data_field_parents_cell';
  $handler->display->display_options['fields']['field_parents_cell_value']['field'] = 'field_parents_cell_value';
  $handler->display->display_options['fields']['field_parents_cell_value']['label'] = 'Parent\'s cell';
  $handler->display->display_options['fields']['field_parents_cell_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_parents_cell_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_parents_cell_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_parents_cell_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_parents_cell_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_parents_cell_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_parents_cell_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_parents_cell_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_parents_cell_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_parents_cell_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_parents_cell_value']['link_to_node'] = 0;
  /* Field: Content: Parent&#039;s email (field_parents_email) */
  $handler->display->display_options['fields']['field_parents_email_email']['id'] = 'field_parents_email_email';
  $handler->display->display_options['fields']['field_parents_email_email']['table'] = 'node_data_field_parents_email';
  $handler->display->display_options['fields']['field_parents_email_email']['field'] = 'field_parents_email_email';
  $handler->display->display_options['fields']['field_parents_email_email']['label'] = 'Parent\'s email';
  $handler->display->display_options['fields']['field_parents_email_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_parents_email_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_parents_email_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_parents_email_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_parents_email_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_parents_email_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_parents_email_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_parents_email_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_parents_email_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_parents_email_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_parents_email_email']['link_to_node'] = 0;
  /* Field: Content: Parent&#039;s names (field_parents) */
  $handler->display->display_options['fields']['field_parents_value']['id'] = 'field_parents_value';
  $handler->display->display_options['fields']['field_parents_value']['table'] = 'node_data_field_parents';
  $handler->display->display_options['fields']['field_parents_value']['field'] = 'field_parents_value';
  $handler->display->display_options['fields']['field_parents_value']['label'] = 'Parent\'s names';
  $handler->display->display_options['fields']['field_parents_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_parents_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_parents_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_parents_value']['link_to_node'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_salvation_date_value']['id'] = 'field_salvation_date_value';
  $handler->display->display_options['fields']['field_salvation_date_value']['table'] = 'node_data_field_salvation_date';
  $handler->display->display_options['fields']['field_salvation_date_value']['field'] = 'field_salvation_date_value';
  $handler->display->display_options['fields']['field_salvation_date_value']['label'] = 'Salvation Date';
  $handler->display->display_options['fields']['field_salvation_date_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_salvation_date_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_salvation_date_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_salvation_date_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_salvation_date_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_salvation_date_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_salvation_date_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_salvation_date_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_salvation_date_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_salvation_date_value']['empty_zero'] = 0;
  /* Field: Content: Saved (field_saved) */
  $handler->display->display_options['fields']['field_saved_value']['id'] = 'field_saved_value';
  $handler->display->display_options['fields']['field_saved_value']['table'] = 'node_data_field_saved';
  $handler->display->display_options['fields']['field_saved_value']['field'] = 'field_saved_value';
  $handler->display->display_options['fields']['field_saved_value']['label'] = 'Saved';
  $handler->display->display_options['fields']['field_saved_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_saved_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_saved_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_saved_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_saved_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_saved_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_saved_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_saved_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_saved_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_saved_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_saved_value']['link_to_node'] = 0;
  /* Field: Content: School (field_school) */
  $handler->display->display_options['fields']['field_school_value']['id'] = 'field_school_value';
  $handler->display->display_options['fields']['field_school_value']['table'] = 'node_data_field_school';
  $handler->display->display_options['fields']['field_school_value']['field'] = 'field_school_value';
  $handler->display->display_options['fields']['field_school_value']['label'] = 'School';
  $handler->display->display_options['fields']['field_school_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_school_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_school_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_school_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_school_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_school_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_school_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_school_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_school_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_school_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_school_value']['link_to_node'] = 0;
  /* Field: Content: State (field_state) */
  $handler->display->display_options['fields']['field_state_value']['id'] = 'field_state_value';
  $handler->display->display_options['fields']['field_state_value']['table'] = 'node_data_field_state';
  $handler->display->display_options['fields']['field_state_value']['field'] = 'field_state_value';
  $handler->display->display_options['fields']['field_state_value']['label'] = 'State';
  $handler->display->display_options['fields']['field_state_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_state_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_state_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_state_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_state_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_state_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_state_value']['link_to_node'] = 0;
  /* Field: Content: Status (field_status) */
  $handler->display->display_options['fields']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['fields']['field_status_value']['table'] = 'node_data_field_status';
  $handler->display->display_options['fields']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['fields']['field_status_value']['label'] = 'Status';
  $handler->display->display_options['fields']['field_status_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_status_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_status_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_status_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_status_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_status_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_status_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_status_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_status_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_status_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_status_value']['link_to_node'] = 0;
  /* Field: Content: Suffix (field_suffix) */
  $handler->display->display_options['fields']['field_suffix_value']['id'] = 'field_suffix_value';
  $handler->display->display_options['fields']['field_suffix_value']['table'] = 'node_data_field_suffix';
  $handler->display->display_options['fields']['field_suffix_value']['field'] = 'field_suffix_value';
  $handler->display->display_options['fields']['field_suffix_value']['label'] = 'Suffix';
  $handler->display->display_options['fields']['field_suffix_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_suffix_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_suffix_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['link_to_node'] = 0;
  /* Field: Content: Work (field_work) */
  $handler->display->display_options['fields']['field_work_value']['id'] = 'field_work_value';
  $handler->display->display_options['fields']['field_work_value']['table'] = 'node_data_field_work';
  $handler->display->display_options['fields']['field_work_value']['field'] = 'field_work_value';
  $handler->display->display_options['fields']['field_work_value']['label'] = 'Work';
  $handler->display->display_options['fields']['field_work_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_work_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_work_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_work_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_work_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_work_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_work_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_work_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_work_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_work_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_work_value']['link_to_node'] = 0;
  /* Field: Content: Zip (field_zip) */
  $handler->display->display_options['fields']['field_zip_value']['id'] = 'field_zip_value';
  $handler->display->display_options['fields']['field_zip_value']['table'] = 'node_data_field_zip';
  $handler->display->display_options['fields']['field_zip_value']['field'] = 'field_zip_value';
  $handler->display->display_options['fields']['field_zip_value']['label'] = 'Zip';
  $handler->display->display_options['fields']['field_zip_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_zip_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_zip_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_zip_value']['link_to_node'] = 0;
  /* Field: Content: home (field_phone_home) */
  $handler->display->display_options['fields']['field_phone_home_value']['id'] = 'field_phone_home_value';
  $handler->display->display_options['fields']['field_phone_home_value']['table'] = 'node_data_field_phone_home';
  $handler->display->display_options['fields']['field_phone_home_value']['field'] = 'field_phone_home_value';
  $handler->display->display_options['fields']['field_phone_home_value']['label'] = 'home';
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_home_value']['link_to_node'] = 0;
  /* Field: Content: mobile (field_phone_mobile) */
  $handler->display->display_options['fields']['field_phone_mobile_value']['id'] = 'field_phone_mobile_value';
  $handler->display->display_options['fields']['field_phone_mobile_value']['table'] = 'node_data_field_phone_mobile';
  $handler->display->display_options['fields']['field_phone_mobile_value']['field'] = 'field_phone_mobile_value';
  $handler->display->display_options['fields']['field_phone_mobile_value']['label'] = 'mobile';
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_mobile_value']['link_to_node'] = 0;
  /* Field: Content: other (field_phone_other) */
  $handler->display->display_options['fields']['field_phone_other_value']['id'] = 'field_phone_other_value';
  $handler->display->display_options['fields']['field_phone_other_value']['table'] = 'node_data_field_phone_other';
  $handler->display->display_options['fields']['field_phone_other_value']['field'] = 'field_phone_other_value';
  $handler->display->display_options['fields']['field_phone_other_value']['label'] = 'other';
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_other_value']['link_to_node'] = 0;
  $handler->display->display_options['path'] = 'class/%/csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: First (field_first) */
  $handler->display->display_options['fields']['field_first_value']['id'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['table'] = 'node_data_field_first';
  $handler->display->display_options['fields']['field_first_value']['field'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['label'] = 'First';
  $handler->display->display_options['fields']['field_first_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_value']['link_to_node'] = 1;
  /* Field: Content: Last (field_last) */
  $handler->display->display_options['fields']['field_last_value']['id'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['table'] = 'node_data_field_last';
  $handler->display->display_options['fields']['field_last_value']['field'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['label'] = 'Last';
  $handler->display->display_options['fields']['field_last_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_value']['link_to_node'] = 0;
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode']['id'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['label'] = 'Visits';
  $handler->display->display_options['fields']['phpcode']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE (lt_contact.nid = %d) AND ((lt_contact.type) = (\'visit\'))",  $data->nid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_2']['id'] = 'phpcode_2';
  $handler->display->display_options['fields']['phpcode_2']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_2']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_2']['label'] = 'Call';
  $handler->display->display_options['fields']['phpcode_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE (lt_contact.nid = %d) AND ((lt_contact.type) = (\'call\'))",  $data->nid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_3']['id'] = 'phpcode_3';
  $handler->display->display_options['fields']['phpcode_3']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_3']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_3']['label'] = 'Card';
  $handler->display->display_options['fields']['phpcode_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE (lt_contact.nid = %d) AND ((lt_contact.type) = (\'card\'))",  $data->nid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_4']['id'] = 'phpcode_4';
  $handler->display->display_options['fields']['phpcode_4']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_4']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_4']['label'] = 'Appointment';
  $handler->display->display_options['fields']['phpcode_4']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_4']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_4']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE (lt_contact.nid = %d) AND ((lt_contact.type) = (\'appt\'))",  $data->nid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_5']['id'] = 'phpcode_5';
  $handler->display->display_options['fields']['phpcode_5']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_5']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_5']['label'] = 'Email';
  $handler->display->display_options['fields']['phpcode_5']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_5']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_5']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_5']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_5']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_5']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_5']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_5']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_5']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_5']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_5']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE (lt_contact.nid = %d) AND ((lt_contact.type) = (\'email\'))",  $data->nid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_6']['id'] = 'phpcode_6';
  $handler->display->display_options['fields']['phpcode_6']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_6']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_6']['label'] = 'Parent Call';
  $handler->display->display_options['fields']['phpcode_6']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_6']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_6']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_6']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_6']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_6']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_6']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_6']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_6']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_6']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_6']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE (lt_contact.nid = %d) AND ((lt_contact.type) = (\'parent-call\'))",  $data->nid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_7']['id'] = 'phpcode_7';
  $handler->display->display_options['fields']['phpcode_7']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_7']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_7']['label'] = 'Parent Letter';
  $handler->display->display_options['fields']['phpcode_7']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_7']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_7']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_7']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_7']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_7']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_7']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_7']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_7']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_7']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_7']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE (lt_contact.nid = %d) AND ((lt_contact.type) = (\'parent-letter\'))",  $data->nid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_8']['id'] = 'phpcode_8';
  $handler->display->display_options['fields']['phpcode_8']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_8']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_8']['label'] = 'Other';
  $handler->display->display_options['fields']['phpcode_8']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_8']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_8']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_8']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_8']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_8']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_8']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_8']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_8']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_8']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_8']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE (lt_contact.nid = %d) AND ((lt_contact.type) = (\'other\'))",  $data->nid)); ?>';
  $handler->display->display_options['path'] = 'class/%/full';

  $views[$view->name] = $view;

  // Exported view: student_class
  $view = new view;
  $view->name = 'student_class';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Class info on student page';
  $view->core = 6;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Organic groups: Group node (post) */
  $handler->display->display_options['relationships']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['relationships']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['required'] = 0;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'class/[nid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  $views[$view->name] = $view;

  // Exported view: student_list
  $view = new view;
  $view->name = 'student_list';
  $view->description = 'Student List';
  $view->tag = 'admin';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => 5,
    4 => 4,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'bulk';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_first_value' => 'field_first_value',
    'field_last_value' => 'field_last_value',
    'field_suffix_value' => 'field_last_value',
    'group_nid' => 'group_nid',
    'field_gender_value' => 'field_gender_value',
    'field_status_value' => 'field_status_value',
    'field_last_contact_value' => 'field_last_contact_value',
    'edit_node' => 'edit_node',
    'created' => 'created',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_first_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_last_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
    ),
    'field_suffix_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'group_nid' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_gender_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_status_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_last_contact_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['selected_operations'] = array(
    'og_add_group_action' => 'og_add_group_action',
    'views_bulk_operations_fields_action' => 'views_bulk_operations_fields_action',
    'views_bulk_operations_delete_node_action' => 'views_bulk_operations_delete_node_action',
    'og_make_private_action' => 'og_make_private_action',
    'og_remove_group_action' => 'og_remove_group_action',
    'node_save_action' => 'node_save_action',
    'lt_student_assign_owner_action' => 0,
    'node_assign_owner_action' => 0,
    'node_mass_update:a27b9efabcd054685a549378b174ad11' => 0,
    'system_message_action' => 0,
    'views_bulk_operations_action' => 0,
    'views_bulk_operations_script_action' => 0,
    'og_make_public_action' => 0,
    'node_make_sticky_action' => 0,
    'node_make_unsticky_action' => 0,
    'node_mass_update:c4d3b28efb86fd703619a50b74d43794' => 0,
    'views_bulk_operations_argument_selector_action' => 0,
    'node_promote_action' => 0,
    'node_mass_update:14de7d028b4bffdf2b4a266562ca18ac' => 0,
    'node_mass_update:9c585624b9b3af0b4687d5f97f35e047' => 0,
    'node_publish_action' => 0,
    'system_goto_action' => 0,
    'og_remove_groups_action' => 0,
    'node_unpromote_action' => 0,
    'node_mass_update:8ce21b08bb8e773d10018b484fe4815e' => 0,
    'system_send_email_action' => 0,
    'lt_student_send_reminder_action' => 0,
    'node_mass_update:0ccad85c1ebe4c9ceada1aa64293b080' => 0,
    'node_unpublish_action' => 0,
    'node_unpublish_by_keyword_action' => 0,
    'auto_nodetitle_operations_update' => 0,
  );
  $handler->display->display_options['style_options']['execution_type'] = '2';
  $handler->display->display_options['style_options']['display_type'] = '0';
  $handler->display->display_options['style_options']['skip_confirmation'] = 0;
  $handler->display->display_options['style_options']['display_result'] = 1;
  $handler->display->display_options['style_options']['merge_single_action'] = 1;
  $handler->display->display_options['style_options']['hide_select_all'] = 0;
  $handler->display->display_options['style_options']['views_bulk_operations_fields_action'] = array(
    'php_code' => 0,
    'display_fields' => array(
      'field_photo' => 'field_photo',
      'field_last_contact' => 'field_last_contact',
      'field_last_visit' => 'field_last_visit',
      'field_parents' => 'field_parents',
      'field_parents_email' => 'field_parents_email',
      'field_parents_cell' => 'field_parents_cell',
      'field_email' => 'field_email',
      'field_address' => 'field_address',
      'field_city' => 'field_city',
      'field_state' => 'field_state',
      'field_zip' => 'field_zip',
      'field_phone_home' => 'field_phone_home',
      'field_phone_mobile' => 'field_phone_mobile',
      'field_phone_other' => 'field_phone_other',
      'field_gender' => 'field_gender',
      'field_status' => 'field_status',
      'field_saved' => 'field_saved',
      'field_baptized' => 'field_baptized',
      'field_birthday' => 'field_birthday',
      'field_school' => 'field_school',
      'field_work' => 'field_work',
    ),
    '_error_element_base' => 'style_options][views_bulk_operations_fields_action][',
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = '';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<h2><a href="/node/add/lt-student?destination=admin/manage/students" >New student</a></h2>
<h2><a href="/admin/manage/students/nocontact" >No contact list</a></h2>
<h2><a href="/admin/manage/students/novisit" >No visit list</a></h2>';
  $handler->display->display_options['footer']['area']['format'] = '2';
  /* Field: Content: First (field_first) */
  $handler->display->display_options['fields']['field_first_value']['id'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['table'] = 'node_data_field_first';
  $handler->display->display_options['fields']['field_first_value']['field'] = 'field_first_value';
  $handler->display->display_options['fields']['field_first_value']['label'] = 'First';
  $handler->display->display_options['fields']['field_first_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_value']['link_to_node'] = 1;
  /* Field: Content: Last (field_last) */
  $handler->display->display_options['fields']['field_last_value']['id'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['table'] = 'node_data_field_last';
  $handler->display->display_options['fields']['field_last_value']['field'] = 'field_last_value';
  $handler->display->display_options['fields']['field_last_value']['label'] = 'Last';
  $handler->display->display_options['fields']['field_last_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_value']['link_to_node'] = 0;
  /* Field: Content: Suffix (field_suffix) */
  $handler->display->display_options['fields']['field_suffix_value']['id'] = 'field_suffix_value';
  $handler->display->display_options['fields']['field_suffix_value']['table'] = 'node_data_field_suffix';
  $handler->display->display_options['fields']['field_suffix_value']['field'] = 'field_suffix_value';
  $handler->display->display_options['fields']['field_suffix_value']['label'] = 'Suffix';
  $handler->display->display_options['fields']['field_suffix_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_suffix_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_suffix_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_suffix_value']['link_to_node'] = 0;
  /* Field: Organic groups: Groups */
  $handler->display->display_options['fields']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['fields']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['fields']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['fields']['group_nid']['label'] = 'Class';
  $handler->display->display_options['fields']['group_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_nid']['empty_zero'] = 0;
  /* Field: Content: Gender (field_gender) */
  $handler->display->display_options['fields']['field_gender_value']['id'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['table'] = 'node_data_field_gender';
  $handler->display->display_options['fields']['field_gender_value']['field'] = 'field_gender_value';
  $handler->display->display_options['fields']['field_gender_value']['label'] = 'Gender';
  $handler->display->display_options['fields']['field_gender_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gender_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gender_value']['link_to_node'] = 0;
  /* Field: Content: Status (field_status) */
  $handler->display->display_options['fields']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['fields']['field_status_value']['table'] = 'node_data_field_status';
  $handler->display->display_options['fields']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['fields']['field_status_value']['label'] = 'Status';
  $handler->display->display_options['fields']['field_status_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_status_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_status_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_status_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_status_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_status_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_status_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_status_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_status_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_status_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_status_value']['link_to_node'] = 0;
  /* Field: Content: Last Contact (field_last_contact) */
  $handler->display->display_options['fields']['field_last_contact_value']['id'] = 'field_last_contact_value';
  $handler->display->display_options['fields']['field_last_contact_value']['table'] = 'node_data_field_last_contact';
  $handler->display->display_options['fields']['field_last_contact_value']['field'] = 'field_last_contact_value';
  $handler->display->display_options['fields']['field_last_contact_value']['label'] = 'Last Contact';
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_last_contact_value']['format'] = 'short';
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Added';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  /* Field: Node: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lt_student' => 'lt_student',
  );
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Salvation Date';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node_data_field_salvation_date.field_salvation_date_value' => 'node_data_field_salvation_date.field_salvation_date_value',
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['label'] = 'Baptism Date';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'node_data_field_baptism_date.field_baptism_date_value' => 'node_data_field_baptism_date.field_baptism_date_value',
  );
  $handler->display->display_options['filters']['date_filter_1']['form_type'] = 'date_popup';
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_2']['id'] = 'date_filter_2';
  $handler->display->display_options['filters']['date_filter_2']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_2']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_2']['expose']['operator'] = 'date_filter_2_op';
  $handler->display->display_options['filters']['date_filter_2']['expose']['label'] = 'Birthday';
  $handler->display->display_options['filters']['date_filter_2']['expose']['identifier'] = 'date_filter_2';
  $handler->display->display_options['filters']['date_filter_2']['date_fields'] = array(
    'node_data_field_birthday.field_birthday_value' => 'node_data_field_birthday.field_birthday_value',
  );
  $handler->display->display_options['filters']['date_filter_2']['form_type'] = 'date_popup';
  /* Filter: Organic groups: Groups */
  $handler->display->display_options['filters']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['filters']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['filters']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['filters']['group_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['group_nid']['expose']['operator'] = 'group_nid_op';
  $handler->display->display_options['filters']['group_nid']['expose']['label'] = 'Groups';
  $handler->display->display_options['filters']['group_nid']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['group_nid']['expose']['identifier'] = 'group_nid';
  $handler->display->display_options['filters']['group_nid']['expose']['reduce'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lt_student' => 'lt_student',
  );
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Salvation Date';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node_data_field_salvation_date.field_salvation_date_value' => 'node_data_field_salvation_date.field_salvation_date_value',
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['label'] = 'Baptism Date';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'node_data_field_baptism_date.field_baptism_date_value' => 'node_data_field_baptism_date.field_baptism_date_value',
  );
  $handler->display->display_options['filters']['date_filter_1']['form_type'] = 'date_popup';
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_2']['id'] = 'date_filter_2';
  $handler->display->display_options['filters']['date_filter_2']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_2']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_2']['expose']['operator'] = 'date_filter_2_op';
  $handler->display->display_options['filters']['date_filter_2']['expose']['label'] = 'Birthday';
  $handler->display->display_options['filters']['date_filter_2']['expose']['identifier'] = 'date_filter_2';
  $handler->display->display_options['filters']['date_filter_2']['date_fields'] = array(
    'node_data_field_birthday.field_birthday_value' => 'node_data_field_birthday.field_birthday_value',
  );
  $handler->display->display_options['filters']['date_filter_2']['form_type'] = 'date_popup';
  /* Filter: Organic groups: Groups */
  $handler->display->display_options['filters']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['filters']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['filters']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['filters']['group_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['group_nid']['expose']['operator'] = 'group_nid_op';
  $handler->display->display_options['filters']['group_nid']['expose']['label'] = 'Groups';
  $handler->display->display_options['filters']['group_nid']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['group_nid']['expose']['identifier'] = 'group_nid';
  $handler->display->display_options['filters']['group_nid']['expose']['reduce'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'admin/manage/students';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Students';
  $handler->display->display_options['menu']['weight'] = '0';

  $views[$view->name] = $view;

  // Exported view: users
  $view = new view;
  $view->name = 'users';
  $view->description = 'Emulates the Drupal user administration page.';
  $view->tag = 'admin';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => 5,
    4 => 4,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 20;
  $handler->display->display_options['style_plugin'] = 'bulk';
  $handler->display->display_options['style_options']['columns'] = array(
    'value' => 'value',
    'value_1' => 'value_1',
    'name' => 'name',
    'status' => 'status',
    'rid' => 'rid',
    'created' => 'created',
    'access' => 'access',
    'edit_node' => 'edit_node',
    'groups' => 'groups',
    'mail' => 'mail',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'value_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'groups' => array(
      'align' => '',
      'separator' => '',
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['order'] = 'desc';
  $handler->display->display_options['style_options']['selected_operations'] = array(
    'og_subscribe_user_action' => 'og_subscribe_user_action',
    'user_user_operations_block' => 'user_user_operations_block',
    'views_bulk_operations_delete_user_action' => 'views_bulk_operations_delete_user_action',
    'views_bulk_operations_script_action' => 'views_bulk_operations_script_action',
    'views_bulk_operations_user_roles_action' => 'views_bulk_operations_user_roles_action',
    'og_unsubscribe_user_action' => 'og_unsubscribe_user_action',
    'views_bulk_operations_ruleset_action_rules_send_account_notification' => 'views_bulk_operations_ruleset_action_rules_send_account_notification',
    'system_send_email_action' => 'system_send_email_action',
    'user_user_operations_unblock' => 'user_user_operations_unblock',
    'og_approve_user_action' => 0,
    'user_block_ip_action' => 0,
    'user_block_user_action' => 0,
    'og_demote_user_action' => 0,
    'og_deny_user_action' => 0,
    'system_message_action' => 0,
    'views_bulk_operations_action' => 0,
    'views_bulk_operations_profile_action' => 0,
    'views_bulk_operations_argument_selector_action' => 0,
    'og_promote_user_action' => 0,
    'system_goto_action' => 0,
    'lt_student_send_report_action' => 0,
  );
  $handler->display->display_options['style_options']['execution_type'] = '1';
  $handler->display->display_options['style_options']['display_type'] = '0';
  $handler->display->display_options['style_options']['skip_confirmation'] = 0;
  $handler->display->display_options['style_options']['display_result'] = 1;
  $handler->display->display_options['style_options']['merge_single_action'] = 1;
  $handler->display->display_options['style_options']['hide_select_all'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = '';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<h2><a href="/admin/user/user/create?destination=admin/manage/users" >New user</a></h2>
<h2><a href="/admin/user/userplus/addmultiple" >Bulk add users</a></h2>
<h2><a href="/admin/manage/users/reports" >Worker visitation report</a></h2>';
  $handler->display->display_options['footer']['area']['format'] = '2';
  /* Relationship: Organic groups: Group node (member) */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'og_uid';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = 0;
  /* Field: Profile: Name: First */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_first';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'First';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['link_to_user'] = 1;
  /* Field: Profile: Name: Last */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_values_profile_last';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Last';
  $handler->display->display_options['fields']['value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value_1']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['rid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['rid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['rid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['rid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['rid']['type'] = 'ul';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member for';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time span';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['access']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['access']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['access']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['access']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['access']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['access']['alter']['html'] = 0;
  $handler->display->display_options['fields']['access']['hide_empty'] = 0;
  $handler->display->display_options['fields']['access']['empty_zero'] = 0;
  $handler->display->display_options['fields']['access']['date_format'] = 'time ago';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Field: Organic groups: User's groups */
  $handler->display->display_options['fields']['groups']['id'] = 'groups';
  $handler->display->display_options['fields']['groups']['table'] = 'og_uid';
  $handler->display->display_options['fields']['groups']['field'] = 'groups';
  $handler->display->display_options['fields']['groups']['label'] = 'Class';
  $handler->display->display_options['fields']['groups']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['groups']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['groups']['hide_empty'] = 0;
  $handler->display->display_options['fields']['groups']['empty_zero'] = 0;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date added';
  /* Sort criterion: Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'nid';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Class';
  /* Sort criterion: Profile: Name: Last */
  $handler->display->display_options['sorts']['value']['id'] = 'value';
  $handler->display->display_options['sorts']['value']['table'] = 'profile_values_profile_last';
  $handler->display->display_options['sorts']['value']['field'] = 'value';
  $handler->display->display_options['sorts']['value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['value']['expose']['label'] = 'Last name';
  /* Filter: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
    1 => '1',
  );
  $handler->display->display_options['filters']['uid']['expose']['operator'] = FALSE;
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Role';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;
  /* Filter: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* Filter: First */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_values_profile_first';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['ui_name'] = 'First';
  $handler->display->display_options['filters']['value']['operator'] = 'contains';
  $handler->display->display_options['filters']['value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value']['expose']['operator'] = 'value_op';
  $handler->display->display_options['filters']['value']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['value']['expose']['label'] = 'First:';
  $handler->display->display_options['filters']['value']['expose']['identifier'] = 'first';
  $handler->display->display_options['filters']['value']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['value']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['value']['case'] = 0;
  /* Filter: Last */
  $handler->display->display_options['filters']['value_1']['id'] = 'value_1';
  $handler->display->display_options['filters']['value_1']['table'] = 'profile_values_profile_last';
  $handler->display->display_options['filters']['value_1']['field'] = 'value';
  $handler->display->display_options['filters']['value_1']['ui_name'] = 'Last';
  $handler->display->display_options['filters']['value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_1']['expose']['operator'] = 'value_1_op';
  $handler->display->display_options['filters']['value_1']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['value_1']['expose']['label'] = 'Last';
  $handler->display->display_options['filters']['value_1']['expose']['identifier'] = 'last';
  $handler->display->display_options['filters']['value_1']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['value_1']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['value_1']['case'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/manage/users';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Users';
  $handler->display->display_options['menu']['weight'] = '0';

  $views[$view->name] = $view;

  // Exported view: visitation_report
  $view = new view;
  $view->name = 'visitation_report';
  $view->description = 'Worker visitation report';
  $view->tag = 'teacher';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Visitation Report';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => 4,
    3 => 3,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'realname' => 'realname',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'realname' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: Realname: Name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Worker';
  $handler->display->display_options['fields']['realname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['realname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['realname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['realname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['realname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['realname']['link_to_user'] = 1;
  $handler->display->display_options['fields']['realname']['overwrite_anonymous'] = 0;
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode']['id'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['label'] = 'Visits';
  $handler->display->display_options['fields']['phpcode']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE ((lt_contact.uid = %d) OR  (lt_contact.uid2 = %d)) AND ((lt_contact.type) = (\'visit\'))",  $data->uid,  $data->uid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_1']['id'] = 'phpcode_1';
  $handler->display->display_options['fields']['phpcode_1']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_1']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_1']['label'] = 'Calls';
  $handler->display->display_options['fields']['phpcode_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE ((lt_contact.uid = %d) OR  (lt_contact.uid2 = %d)) AND ((lt_contact.type) = (\'call\'))",  $data->uid,  $data->uid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_2']['id'] = 'phpcode_2';
  $handler->display->display_options['fields']['phpcode_2']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_2']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_2']['label'] = 'Cards';
  $handler->display->display_options['fields']['phpcode_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE ((lt_contact.uid = %d) OR  (lt_contact.uid2 = %d)) AND ((lt_contact.type) = (\'card\'))",  $data->uid,  $data->uid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_3']['id'] = 'phpcode_3';
  $handler->display->display_options['fields']['phpcode_3']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_3']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_3']['label'] = 'Appt';
  $handler->display->display_options['fields']['phpcode_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE ((lt_contact.uid = %d) OR  (lt_contact.uid2 = %d)) AND ((lt_contact.type) = (\'appt\'))",  $data->uid,  $data->uid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_4']['id'] = 'phpcode_4';
  $handler->display->display_options['fields']['phpcode_4']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_4']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_4']['label'] = 'Other';
  $handler->display->display_options['fields']['phpcode_4']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_4']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_4']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE ((lt_contact.uid = %d) OR  (lt_contact.uid2 = %d)) AND ((lt_contact.type) <> (\'visit\') AND (lt_contact.type) <> (\'call\') AND (lt_contact.type) <> (\'card\') AND (lt_contact.type) <> (\'appt\'))",  $data->uid,  $data->uid)); ?>';
  /* Sort criterion: Profile: Name: Last */
  $handler->display->display_options['sorts']['value']['id'] = 'value';
  $handler->display->display_options['sorts']['value']['table'] = 'profile_values_profile_last';
  $handler->display->display_options['sorts']['value']['field'] = 'value';
  /* Argument: Organic groups: Group node */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'og_uid';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'class/%/visitation-report';
  $handler->display->display_options['menu']['title'] = 'Report';
  $handler->display->display_options['menu']['weight'] = '5';

  /* Display: All classes */
  $handler = $view->new_display('page', 'All classes', 'all_classes');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => 4,
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'admin/manage/users/reports';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'worker-visitation.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'admin/manage/users/reports/csv';
  $handler->display->display_options['displays'] = array(
    'all_classes' => 'all_classes',
    'default' => 0,
    'page_1' => 0,
  );

  $views[$view->name] = $view;

  // Exported view: visitation_report_user
  $view = new view;
  $view->name = 'visitation_report_user';
  $view->description = 'Worker visitation report user';
  $view->tag = 'user';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Visitation Report';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'realname' => 'realname',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'realname' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode']['id'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['label'] = 'Visits';
  $handler->display->display_options['fields']['phpcode']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE ((lt_contact.uid = %d) OR  (lt_contact.uid2 = %d)) AND ((lt_contact.type) = (\'visit\'))",  $data->uid,  $data->uid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_1']['id'] = 'phpcode_1';
  $handler->display->display_options['fields']['phpcode_1']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_1']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_1']['label'] = 'Calls';
  $handler->display->display_options['fields']['phpcode_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_1']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE ((lt_contact.uid = %d) OR  (lt_contact.uid2 = %d)) AND ((lt_contact.type) = (\'call\'))",  $data->uid,  $data->uid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_2']['id'] = 'phpcode_2';
  $handler->display->display_options['fields']['phpcode_2']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_2']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_2']['label'] = 'Cards';
  $handler->display->display_options['fields']['phpcode_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_2']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE ((lt_contact.uid = %d) OR  (lt_contact.uid2 = %d)) AND ((lt_contact.type) = (\'card\'))",  $data->uid,  $data->uid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_3']['id'] = 'phpcode_3';
  $handler->display->display_options['fields']['phpcode_3']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_3']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_3']['label'] = 'Appt';
  $handler->display->display_options['fields']['phpcode_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_3']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE ((lt_contact.uid = %d) OR  (lt_contact.uid2 = %d)) AND ((lt_contact.type) = (\'appt\'))",  $data->uid,  $data->uid)); ?>';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode_4']['id'] = 'phpcode_4';
  $handler->display->display_options['fields']['phpcode_4']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode_4']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode_4']['label'] = 'Other';
  $handler->display->display_options['fields']['phpcode_4']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode_4']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode_4']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode_4']['value'] = '<?php print db_result(db_query("SELECT COUNT(lt_contact.contact_id) AS contact_id FROM lt_contact lt_contact  WHERE ((lt_contact.uid = %d) OR  (lt_contact.uid2 = %d)) AND ((lt_contact.type) <> (\'visit\') AND (lt_contact.type) <> (\'call\') AND (lt_contact.type) <> (\'card\') AND (lt_contact.type) <> (\'appt\'))",  $data->uid,  $data->uid)); ?>';
  /* Argument: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;

  $views[$view->name] = $view;

  return $views;
}
