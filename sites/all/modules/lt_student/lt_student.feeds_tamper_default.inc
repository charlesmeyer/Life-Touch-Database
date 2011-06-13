<?php

/**
 * Implementation of hook_feeds_tamper_default().
 */
function lt_student_feeds_tamper_default() {
  $export = array();
  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'split_email';
  $feeds_tamper->importer = 'student_import';
  $feeds_tamper->source = 'emailaddress';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '3',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Break text into items at every ";". Limit to 3 items.';

  $export['split_email'] = $feeds_tamper;
  return $export;
}
