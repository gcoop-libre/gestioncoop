<?php

/**
 * Implementation of hook_strongarm().
 */
function gestioncoop_balance_memoria_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_balances_memorias';
  $strongarm->value = 0;

  $export['comment_anonymous_balances_memorias'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_balances_memorias';
  $strongarm->value = '2';

  $export['comment_balances_memorias'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_balances_memorias';
  $strongarm->value = '3';

  $export['comment_controls_balances_memorias'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_balances_memorias';
  $strongarm->value = '4';

  $export['comment_default_mode_balances_memorias'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_balances_memorias';
  $strongarm->value = '1';

  $export['comment_default_order_balances_memorias'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_balances_memorias';
  $strongarm->value = '50';

  $export['comment_default_per_page_balances_memorias'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_balances_memorias';
  $strongarm->value = '0';

  $export['comment_form_location_balances_memorias'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_balances_memorias';
  $strongarm->value = '0';

  $export['comment_preview_balances_memorias'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_balances_memorias';
  $strongarm->value = '1';

  $export['comment_subject_field_balances_memorias'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_balances_memorias';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '0',
    'author' => '1',
    'options' => '2',
    'comment_settings' => '4',
    'menu' => '-4',
    'path' => '3',
  );

  $export['content_extra_weights_balances_memorias'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_balances_memorias';
  $strongarm->value = '0';

  $export['language_content_type_balances_memorias'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_balances_memorias';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_balances_memorias'] = $strongarm;
  return $export;
}
