<?php
// $Id$ 

/**
*  This file is used to tell the views module about the new ev_maneger table.
*/
function lt_student_views_data()  {
  // Basic table information.
  // ----------------------------------------------------------------
  // node_example table
  //  New group within Views called 'Example'

  $data = array();
  $data['lt_contact']['table']['group']  = t('Student Database');

  // tables + fields that can be used for SQL Joins
  $data['lt_contact']['table']['join'] = array(
    'user' => array(
      'left_field' => 'uid',
      'field' => 'uid',
    ),
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );
  
  $data['lt_contact']['table']['base'] = array(
    'field' => 'contact_id',
    'title' => t('Student contact'),
    'help' => t("The record of a contact with a student."),
    'weight' => -9,
  );

    // contact_id
  $data['lt_contact']['contact_id'] = array(
    'title' => t('contact_id'),
    'help' => t('The contact ID of the contact.'), // The help that appears on the UI,
    // Information for displaying the contact_id
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    // Information for accepting a nid as an argument
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
      'numeric' => TRUE,
    ),
    // Information for accepting a nid as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    // Information for sorting on a nid.
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  // created field
  $data['lt_contact']['created'] = array(
    'title' => t('Post date'), // The item it appears as on the UI,
    'help' => t('The date the record was posted.'), // The help that appears on the UI,
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );
  
  // date field
  $data['lt_contact']['date'] = array(
    'title' => t('Date'), // The item it appears as on the UI,
    'help' => t('Date that the student was contacted.'), // The help that appears on the UI,
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );
  
  // Type       
  $data['lt_contact']['type'] = array(
    'title' => t('Type'),
    'help' => t('Type of contact recorded.'),

    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
     ),
     'filter' => array(
      'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
       'handler' => 'views_handler_argument_string',
     ),
     'sort' => array(
      'handler' => 'views_handler_sort',
     ),
  );
  
    //comments
  $data['lt_contact']['comments'] = array(
    'title' => t('Comments'),
    'help' => t('Comments on a visit.'),

    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
     ),
  );
  
  
  // uid field
  $data['lt_contact']['uid'] = array(
    'title' => t('Author'),
    'help' => t('Relate a contact to the user who created it.'),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'base field' => 'uid',
      'label' => t('user'),
    ),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
      'numeric' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // Relationship to the 'Node' table
  $data['lt_contact']['nid'] = array(
    'title' => t('Node'),
    'help' => t('The this is the student that the contact is attached to'),
    'relationship' => array(
      'label' => t('Node'),
      'base' => 'node',
      'base field' => 'nid',
      // This allows us to not show this relationship if the base is already
      // node so users won't create circular relationships.
      'skip base' => array('node', 'node_revisions'),
    ),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
      'numeric' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  $data['node']['contact_log'] = array(
    'field' => array(
      'title' => t('Contact Log'),
      'help' => t('Retrieve a list of contacts with the student. Extra SQL query per item.'),
      'handler' => 'lt_student_handler_field_lt_contact_log',
    ),
  );
  
  
  return $data;
}

/**
 * Implementation of hook_views_handlers() to register all of the basic handlers
 * views uses.
 */
function lt_student_views_handlers() {
  return array(
    'info' => array(
      'modulename' => 'node',
    ),
    'handlers' => array(
      // field handlers
      'lt_student_handler_field_lt_contact_log' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}

/**
 * Implementation of hook_views_plugins().
 */
function lt_student_views_plugins() {
  return array(
    'access' => array(
      'userarg' => array(
        'title' => t('User account access'),
        'help' => t('Access will be granted if user can access the user page give by arg1.'),
        'handler' => 'lt_student_plugin_access_userarg',
        //'path' => drupal_get_path('module', 'lt_student'),
        'uses options' => FALSE,
      ),
    ),
  );
}