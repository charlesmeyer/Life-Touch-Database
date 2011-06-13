<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function lt_student_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_address
  $groups['lt_student-group_address'] = array(
    'group_type' => 'standard',
    'type_name' => 'lt_student',
    'group_name' => 'group_address',
    'label' => 'Address',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '4',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '4',
    'fields' => array(
      '0' => 'field_address',
      '1' => 'field_city',
      '2' => 'field_state',
      '3' => 'field_zip',
    ),
  );

  // Exported group: group_email
  $groups['lt_student-group_email'] = array(
    'group_type' => 'standard',
    'type_name' => 'lt_student',
    'group_name' => 'group_email',
    'label' => 'Email',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '21',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '21',
    'fields' => array(
      '0' => 'field_email',
    ),
  );

  // Exported group: group_info
  $groups['lt_student-group_info'] = array(
    'group_type' => 'standard',
    'type_name' => 'lt_student',
    'group_name' => 'group_info',
    'label' => 'Student info',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-2',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_gender',
      '1' => 'field_birthday',
      '2' => 'field_school',
      '3' => 'field_work',
    ),
  );

  // Exported group: group_notes
  $groups['lt_student-group_notes'] = array(
    'group_type' => 'standard',
    'type_name' => 'lt_student',
    'group_name' => 'group_notes',
    'label' => 'Notes',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '24',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '24',
    'fields' => array(
      '0' => 'field_comments',
    ),
  );

  // Exported group: group_parents
  $groups['lt_student-group_parents'] = array(
    'group_type' => 'standard',
    'type_name' => 'lt_student',
    'group_name' => 'group_parents',
    'label' => 'Patents',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '23',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '23',
    'fields' => array(
      '0' => 'field_parents',
      '1' => 'field_parents_email',
      '2' => 'field_parents_email2',
      '3' => 'field_parents_cell',
    ),
  );

  // Exported group: group_phone
  $groups['lt_student-group_phone'] = array(
    'group_type' => 'standard',
    'type_name' => 'lt_student',
    'group_name' => 'group_phone',
    'label' => 'Phone',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '3',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_phone_home_area',
      '1' => 'field_phone_home',
      '2' => 'field_phone_mobile_area',
      '3' => 'field_phone_mobile',
      '4' => 'field_phone_other',
    ),
  );

  // Exported group: group_progress
  $groups['lt_student-group_progress'] = array(
    'group_type' => 'standard',
    'type_name' => 'lt_student',
    'group_name' => 'group_progress',
    'label' => 'Spiritual condition',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '22',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '22',
    'fields' => array(
      '0' => 'field_membership',
      '1' => 'field_status',
      '2' => 'field_saved',
      '3' => 'field_baptized',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Email');
  t('Notes');
  t('Patents');
  t('Phone');
  t('Spiritual condition');
  t('Student info');

  return $groups;
}
