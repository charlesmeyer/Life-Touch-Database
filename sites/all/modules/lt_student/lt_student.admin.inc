<?php

/**
 * @file
 * Administrative pages for the module.
 *
 * Contains form building functions, submit handlers, and theme functions for
 * the module's overview form, add and edit forms, and the delete confirmation
 * form.
 */

/**
 * Build the record editing form.
 *
 * If a record is passed in, an edit form with both Save and Delete buttons will
 * be built. Otherwise, a blank 'add new record' form, without the Delete button,
 * will be built.
 *
 * @ingroup forms
 * @see lt_student_form_submit()
 * @see lt_student_form_delete()
 */
function lt_student_form(&$form_state, $record = array()) {
  // Set the default values for a new item. By using += rather than =, we
  // only overwrite array keys that have not yet been set. It's safe to use
  // on both an empty array, and an incoming array with full or partial data.
  global $user;
  $record += array(
   'comments' => '',
	'created' => time(),
	'date' => time(),
  'uid' => $user->uid,
  );

  // If we're editing an existing record, we'll add a value field to the form
  // containing the record's unique ID.
  if (!empty($record['contact_id'])) {
    $form['contact_id'] = array(
      '#type' => 'value',
      '#value' => $record['contact_id'],
    );
  }
  
    // These elements are just values so they are not even sent to the client.
  foreach (array('created') as $key) {
    $form[$key] = array(
      '#type' => 'value',
      '#value' => isset($record[$key]) ? $record[$key] : NULL,
    );
  }
  
  //we only need to change the type for decisions
 
  $form['type'] = array(
    '#type' => 'select',
    '#title' => 'Type',
    '#options' => array(
      'visit' => 'Visit',
      'call' => 'Call',
      'card' => 'Card',
      'appt' => 'Appointment',
      'email' => 'Email',
      'parent-call' => 'Parent Call',
      'parent-letter' => 'Parent Letter',
      'other' => 'Other',
    ),
    '#default_value' => isset($record['type']) ? $record['type'] : NULL,
  );
  
  $form['nid'] = array(
    '#type' => 'hidden',
    '#default_value' => isset($record['nid']) ? $record['nid'] : NULL,
  );
  
  $options = array();
  $options[0] = "- none -";
  $result = db_query("SELECT {users}.uid AS uid, name, profile_values_profile_last.value AS profile_values_profile_last_value FROM {users} LEFT JOIN profile_values profile_values_profile_last ON {users}.uid = profile_values_profile_last.uid AND profile_values_profile_last.fid = '2' WHERE {users}.uid > 1 ORDER BY profile_values_profile_last_value ASC");
  while ($data = db_fetch_object($result)) {
    $options[$data->uid] = theme('username', $data, array('plain' => TRUE));
  }
  $form['uid'] = array(
    '#type' => 'select',
    '#title' => t('Worker'),
    '#default_value' => isset($record['uid']) ? $record['uid'] : NULL,
    '#options' => $options,
  );
  
  
  $form['uid2'] = array(
    '#type' => 'select',
    '#default_value' => isset($record['uid2']) ? $record['uid2'] : 0,
    '#options' => $options,
  );
  
  
  $form['date'] = array(
    '#type' => 'date_popup',
    '#date_format' => 'm/d/Y',
    '#title' => t('Date'),
    '#required' => TRUE,
    '#default_value' => date("Y-m-d H:i:s", $record['date']),
  );

   if ($record['type'] == 'door-knocking') {
    $form['number'] = array(
      '#type' => 'textfield',
      '#title' => t('Number of doors'),
      '#required' => TRUE,
      '#size' => 8,
      '#default_value' => $record['number'],
    );
   }
  
  $form['comments'] = array(
    '#type' => 'textarea',
    '#title' => t('Comments'),
    '#required' => FALSE,
    '#size' => 30,
    '#rows' => 3,
    '#default_value' => $record['comments'],
  );

  $form['buttons']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  // Only show the delete button if we already have an ID. Set the delete
  // button's submit handler to a custom function that should only fire if
  // this button is clicked. In all other cases, the form will fall back to
  // the default $form_id_submit() function.
  if (!empty($record['contact_id'])) {
    $form['buttons']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#submit' => array('lt_student_form_delete'),
    );
  }

  return $form;
}


/**
 * Menu callback; presents the contact editing form, or redirects to delete confirmation.
 */
function lt_student_page_edit($record) {
  return drupal_get_form("lt_student_form", $record);
}


/**
 * General submit handler for Scaffolding's add/edit form.
 *
 * Simply passes incoming form values on to the module's CRUD save function,
 *
 * @ingroup formapi
 * @see lt_student_form()
 */
function lt_student_form_submit($form, &$form_state) {
  $record = $form_state['values'];
  $record['date'] = strtotime($record['date']);
  if ($record['uid2'] == 0) {
    $record['uid2'] = null;
  }
  lt_student_contact_save($record);
  $form_state['redirect'] = 'node/' . $record['nid'];
}

/**
 * Delete button submit handler for Scaffolding's add/edit form.
 *
 * Redirects to the 'delete record' confirmation page without performing any
 * operations.
 *
 * @ingroup formapi
 * @see lt_student_form()
 */
function lt_student_form_delete($form, &$form_state) {
  $form_state['redirect'] = 'contact_record/' . $form_state['values']['contact_id'] . '/delete';
}

/**
 * Build the delete confirmation form.
 *
 * A simple wrapper around Drupal's core confirm_form() function. Adds a value
 * field to store the ID of the record being deleted.
 *
 * @ingroup forms
 * @see lt_student_delete_confirm_submit()
 * @see confirm_form()
 */
function lt_student_delete_confirm(&$form_state, $record) {
  $form['contact_id'] = array(
    '#type' => 'value',
    '#value' => $record['contact_id'],
  );
  $form['nid'] = array(
    '#type' => 'value',
    '#value' => $record['nid'],
  );

  return confirm_form($form,
    t('Are you sure you want to delete this contact record?'),
    isset($_GET['destination']) ? $_GET['destination'] : '',
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * General submit handler for the delete confirmation form.
 *
 * Core's confirm_form() function adds the 'confirm' value element we check
 * against to ensure the form was properly submitted. If it's there, delete
 * the record and redirect to the overview form.
 *
 * @ingroup formapi
 * @see lt_student_form()
 */
 
function lt_student_delete_confirm_submit($form, &$form_state) {
  if ($form_state['values']['confirm']) {
    lt_student_contact_delete($form_state['values']['contact_id']);
    drupal_set_message(t('Your record was deleted.'));
  }
  $form_state['redirect'] = 'node/' . $form_state['values']['nid'];
}


