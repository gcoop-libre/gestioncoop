<?php

/**
 * Implementation of hook_strongarm().
 */
function gestioncoop_asamblea_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_asamblea';
  $strongarm->value = '0';

  $export['ant_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_asamblea';
  $strongarm->value = '';

  $export['ant_pattern_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_asamblea';
  $strongarm->value = 0;

  $export['ant_php_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_asamblea';
  $strongarm->value = 0;

  $export['comment_anonymous_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_asamblea';
  $strongarm->value = '0';

  $export['comment_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_asamblea';
  $strongarm->value = '3';

  $export['comment_controls_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_asamblea';
  $strongarm->value = '4';

  $export['comment_default_mode_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_asamblea';
  $strongarm->value = '1';

  $export['comment_default_order_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_asamblea';
  $strongarm->value = '50';

  $export['comment_default_per_page_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_asamblea';
  $strongarm->value = '0';

  $export['comment_form_location_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_asamblea';
  $strongarm->value = '1';

  $export['comment_preview_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_asamblea';
  $strongarm->value = '1';

  $export['comment_subject_field_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_asamblea';
  $strongarm->value = array(
    'title' => '42',
    'revision_information' => '45',
    'author' => '46',
    'options' => '47',
    'comment_settings' => '49',
    'menu' => '44',
    'path' => '48',
  );

  $export['content_extra_weights_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_asamblea';
  $strongarm->value = '0';

  $export['language_content_type_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_asamblea';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_asamblea'] = $strongarm;
  return $export;
}
