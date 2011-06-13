<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function lt_student_feeds_importer_default() {
  $export = array();
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'student_import';
  $feeds_importer->config = array(
    'name' => 'Student import',
    'description' => 'Import/update students into the system',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'lt_student',
        'input_format' => '0',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'NameID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'FirstName',
            'target' => 'field_first',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'LastName',
            'target' => 'field_last',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Suffix',
            'target' => 'field_suffix',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'AddressLine1',
            'target' => 'field_address',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'City',
            'target' => 'field_city',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'State',
            'target' => 'field_state',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'PostalCode',
            'target' => 'field_zip',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'PhoneAreaCode',
            'target' => 'field_phone_home_area',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Phone#',
            'target' => 'field_phone_home',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Gender',
            'target' => 'field_gender',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'BirthDate',
            'target' => 'field_birthday:start',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Relationship',
            'target' => 'field_membership',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Organization1Group Description - 1',
            'target' => 'og_groups:title',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Phone#3',
            'target' => 'field_phone_mobile',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'PhoneAreaCode3',
            'target' => 'field_phone_mobile_area',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Organization1Leadership - 1',
            'target' => 'field_leadershiptype',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'RecordStatus',
            'target' => 'field_status',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Parents email',
            'target' => 'field_parents_email',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Parents email 2',
            'target' => 'field_parents_email2',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'emailaddress',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
        ),
        'author' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );

  $export['student_import'] = $feeds_importer;
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'user_import';
  $feeds_importer->config = array(
    'name' => 'User Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          5 => 0,
          4 => 0,
          3 => 0,
          7 => 0,
          6 => 0,
        ),
        'update_existing' => 0,
        'status' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'username',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'FirstName',
            'target' => 'profile_first',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'LastName',
            'target' => 'profile_last',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'EmailAddress',
            'target' => 'mail',
            'unique' => 0,
          ),
          4 => array(
            'source' => 'Organization1Group Description - 1',
            'target' => 'og_register:title',
            'unique' => FALSE,
          ),
        ),
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
  );

  $export['user_import'] = $feeds_importer;
  return $export;
}
