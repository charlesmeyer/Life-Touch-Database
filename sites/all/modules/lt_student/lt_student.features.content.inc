<?php

/**
 * Implementation of hook_content_default_fields().
 */
function lt_student_content_default_fields() {
  $fields = array();

  // Exported field: field_address
  $fields['lt_student-field_address'] = array(
    'field_name' => 'field_address',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '13',
      'parent' => 'group_address',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_address][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Address',
      'weight' => '13',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_baptized
  $fields['lt_student-field_baptized'] = array(
    'field_name' => 'field_baptized',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '40',
      'parent' => 'group_progress',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|<span></span>
1|Baptized',
    'allowed_values_php' => '',
    'field_permissions' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Baptized',
      'weight' => '40',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_birthday
  $fields['lt_student-field_birthday'] = array(
    'field_name' => 'field_birthday',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '40',
      'parent' => 'group_info',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datetime',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'short',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d H:i:s',
      'input_format_custom' => 'n/j/Y',
      'increment' => 1,
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Birthday',
      'weight' => '40',
      'description' => '',
      'type' => 'date_text',
      'module' => 'date',
    ),
  );

  // Exported field: field_city
  $fields['lt_student-field_city'] = array(
    'field_name' => 'field_city',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '14',
      'parent' => 'group_address',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '12',
      'default_value' => array(
        '0' => array(
          'value' => 'Lancaster',
          '_error_element' => 'default_value_widget][field_city][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'City',
      'weight' => '14',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_comments
  $fields['lt_student-field_comments'] = array(
    'field_name' => 'field_comments',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '16',
      'parent' => 'group_notes',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_comments][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Notes',
      'weight' => '16',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_email
  $fields['lt_student-field_email'] = array(
    'field_name' => 'field_email',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '9',
      'parent' => 'group_email',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '0',
    'multiple' => '1',
    'module' => 'email',
    'active' => '1',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Email',
      'weight' => '9',
      'description' => '',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_first
  $fields['lt_student-field_first'] = array(
    'field_name' => 'field_first',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '-6',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_first][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'First',
      'weight' => '-6',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_gender
  $fields['lt_student-field_gender'] = array(
    'field_name' => 'field_gender',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '38',
      'parent' => 'group_info',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Male
Female
Unknown',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Gender',
      'weight' => '38',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_last
  $fields['lt_student-field_last'] = array(
    'field_name' => 'field_last',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '-5',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_last][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Last',
      'weight' => '-5',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_last_contact
  $fields['lt_student-field_last_contact'] = array(
    'field_name' => 'field_last_contact',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'short',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datestamp',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'field_permissions' => array(
      'create' => 0,
      'edit' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'default_value' => 'strtotime',
      'default_value_code' => '2010-01-01',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'm/d/Y - H:i:s',
      'input_format_custom' => '',
      'increment' => 1,
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Last Contact',
      'weight' => '-1',
      'description' => '',
      'type' => 'date_text',
      'module' => 'date',
    ),
  );

  // Exported field: field_last_visit
  $fields['lt_student-field_last_visit'] = array(
    'field_name' => 'field_last_visit',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'short',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datestamp',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'field_permissions' => array(
      'create' => 0,
      'edit' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'default_value' => 'strtotime',
      'default_value_code' => '2011-01-01',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d H:i:s',
      'input_format_custom' => '',
      'increment' => 1,
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Last Visit',
      'weight' => '1',
      'description' => '',
      'type' => 'date_text',
      'module' => 'date',
    ),
  );

  // Exported field: field_leadershiptype
  $fields['lt_student-field_leadershiptype'] = array(
    'field_name' => 'field_leadershiptype',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '43',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'create' => 'create',
      'edit' => 'edit',
      'view' => 'view',
      'edit own' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_leadershiptype][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'LeadershipType',
      'weight' => '43',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_membership
  $fields['lt_student-field_membership'] = array(
    'field_name' => 'field_membership',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '37',
      'parent' => 'group_progress',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '10',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_membership][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Membership',
      'weight' => '37',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_parents
  $fields['lt_student-field_parents'] = array(
    'field_name' => 'field_parents',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '1',
      'parent' => 'group_parents',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_parents][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Parent\'s names',
      'weight' => '1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_parents_cell
  $fields['lt_student-field_parents_cell'] = array(
    'field_name' => 'field_parents_cell',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_parents',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'view' => 'view',
      'create' => 0,
      'edit own' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_parents_cell][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Parent\'s cell',
      'weight' => '4',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_parents_email
  $fields['lt_student-field_parents_email'] = array(
    'field_name' => 'field_parents_email',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '2',
      'parent' => 'group_parents',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '0',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'field_permissions' => array(
      'edit' => 'edit',
      'view' => 'view',
      'create' => 0,
      'edit own' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Parent\'s email',
      'weight' => '2',
      'description' => '',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_parents_email2
  $fields['lt_student-field_parents_email2'] = array(
    'field_name' => 'field_parents_email2',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '3',
      'parent' => 'group_parents',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '0',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'field_permissions' => array(
      'edit' => 'edit',
      'view' => 'view',
      'create' => 0,
      'edit own' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Parent\'s email 2',
      'weight' => '3',
      'description' => '',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_phone_home
  $fields['lt_student-field_phone_home'] = array(
    'field_name' => 'field_phone_home',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '33',
      'parent' => 'group_phone',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_phone_home][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'home',
      'weight' => '33',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_phone_home_area
  $fields['lt_student-field_phone_home_area'] = array(
    'field_name' => 'field_phone_home_area',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '32',
      'parent' => 'group_phone',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '3',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_phone_home_area][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'home area',
      'weight' => '32',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_phone_mobile
  $fields['lt_student-field_phone_mobile'] = array(
    'field_name' => 'field_phone_mobile',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '35',
      'parent' => 'group_phone',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_phone_mobile][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'mobile',
      'weight' => '35',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_phone_mobile_area
  $fields['lt_student-field_phone_mobile_area'] = array(
    'field_name' => 'field_phone_mobile_area',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '34',
      'parent' => 'group_phone',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '3',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_phone_mobile_area][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'mobile area',
      'weight' => '34',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_phone_other
  $fields['lt_student-field_phone_other'] = array(
    'field_name' => 'field_phone_other',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '36',
      'parent' => 'group_phone',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'ca_phone',
    'required' => '0',
    'multiple' => '0',
    'module' => 'phone',
    'active' => '1',
    'phone_country_code' => 0,
    'ca_phone_separator' => '.',
    'ca_phone_parentheses' => 0,
    'field_permissions' => '',
    'widget' => array(
      'size' => '12',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_phone_other][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'other',
      'weight' => '36',
      'description' => '',
      'type' => 'phone_textfield',
      'module' => 'phone',
    ),
  );

  // Exported field: field_photo
  $fields['lt_student-field_photo'] = array(
    'field_name' => 'field_photo',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'small_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'small_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'field_permissions' => array(
      'create' => 0,
      'edit' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'student-photos',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '20MB',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Photo',
      'weight' => '-3',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_saved
  $fields['lt_student-field_saved'] = array(
    'field_name' => 'field_saved',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '39',
      'parent' => 'group_progress',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|<span></span>
1|Saved',
    'allowed_values_php' => '',
    'field_permissions' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Saved',
      'weight' => '39',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_school
  $fields['lt_student-field_school'] = array(
    'field_name' => 'field_school',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '41',
      'parent' => 'group_info',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => 0,
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => '',
    'widget' => array(
      'size' => '30',
      'autocomplete_match' => 'contains',
      'autocomplete_case' => '1',
      'i18n_flddata' => 0,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_school][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'School',
      'weight' => '41',
      'description' => '',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_state
  $fields['lt_student-field_state'] = array(
    'field_name' => 'field_state',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '15',
      'parent' => 'group_address',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '3',
      'default_value' => array(
        '0' => array(
          'value' => 'CA',
          '_error_element' => 'default_value_widget][field_state][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'State',
      'weight' => '15',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_status
  $fields['lt_student-field_status'] = array(
    'field_name' => 'field_status',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '38',
      'parent' => 'group_progress',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Active
Inactive',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Status',
      'weight' => '38',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_suffix
  $fields['lt_student-field_suffix'] = array(
    'field_name' => 'field_suffix',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '4',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_suffix][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Suffix',
      'weight' => '-4',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_work
  $fields['lt_student-field_work'] = array(
    'field_name' => 'field_work',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '42',
      'parent' => 'group_info',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_work][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Work',
      'weight' => '42',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_zip
  $fields['lt_student-field_zip'] = array(
    'field_name' => 'field_zip',
    'type_name' => 'lt_student',
    'display_settings' => array(
      'weight' => '16',
      'parent' => 'group_address',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'edit' => 'edit',
      'create' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '5',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_zip][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Zip',
      'weight' => '16',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Baptized');
  t('Birthday');
  t('City');
  t('Email');
  t('First');
  t('Gender');
  t('Last');
  t('Last Contact');
  t('Last Visit');
  t('LeadershipType');
  t('Membership');
  t('Notes');
  t('Parent\'s cell');
  t('Parent\'s email');
  t('Parent\'s email 2');
  t('Parent\'s names');
  t('Photo');
  t('Saved');
  t('School');
  t('State');
  t('Status');
  t('Suffix');
  t('Work');
  t('Zip');
  t('home');
  t('home area');
  t('mobile');
  t('mobile area');
  t('other');

  return $fields;
}
