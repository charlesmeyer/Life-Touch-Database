<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function lt_student_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  elseif ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => 2);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function lt_student_imagecache_default_presets() {
  $items = array(
    'small' => array(
      'presetname' => 'small',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '60',
            'height' => '60',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function lt_student_node_info() {
  $items = array(
    'lt_class' => array(
      'name' => t('Class'),
      'module' => 'features',
      'description' => t('A SS class.'),
      'has_title' => '1',
      'title_label' => t('Class name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'lt_student' => array(
      'name' => t('Student'),
      'module' => 'features',
      'description' => t('A life that needs to be touched.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function lt_student_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
