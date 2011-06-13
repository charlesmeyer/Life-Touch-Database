<?php
// $Id: views_plugin_access_php.inc,v 1.1.2.1 2010/05/22 13:50:26 kratib Exp $

/**
 * Access plugin that provides PHP-based access control.
 */
class lt_student_plugin_access_userarg extends views_plugin_access {
  function access($account) {
    return lt_student_page_access();
  }

  function get_access_callback() {
    return array('lt_student_page_access', array());
  }

  function summary_title() {
    return t('User page access');
  }

}

