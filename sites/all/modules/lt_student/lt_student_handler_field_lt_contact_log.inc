<?php
// $Id: views_handler_field_node_link.inc,v 1.1 2008/09/03 19:21:29 merlinofchaos Exp $
/**
 * Field handler to present a link to the node.
 */
class lt_student_handler_field_lt_contact_log extends views_handler_field {
  function construct() {
    parent::construct();
    $this->additional_fields['nid'] = 'nid';
  }

  function option_definition() {
    $options = parent::option_definition();

    $options['number'] = array('default' => '', 'translatable' => TRUE);

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['number'] = array(
      '#type' => 'textfield',
      '#title' => t('Number of contacts to display (not yet implemented)'),
      '#default_value' => $this->options['number'],
    );
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
  $nid = $values->{$this->aliases['nid']};
    $sql = "SELECT * FROM {lt_contact} WHERE nid = %d ORDER BY date DESC";
      $result = db_query_range(db_rewrite_sql($sql), $nid, 0, 8);
	  $output = '';
	  while ($data = db_fetch_object($result)) {
		$output .= '<div class="item ' . $data->type . '"><span class="date">' . date("n/j/y", $data->date) . '</span> <span class="type">';
        $output .= $data->type . ':</span> <span class="comment">' . $data->comments . '</span>';
        $output .= '</div>';
      }
    if ($output == ''){
      $output = '<span class="notyet">Not yet contacted.</span>';
    }

  
  //$this->options['number']
    
 
    return $output;
  }
}