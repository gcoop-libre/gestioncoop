<?php

/**
 * Implementation of hook_strongarm().
 */
function gestioncoop_actividad_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_actividades';
  $strongarm->value = '2';

  $export['comment_actividades'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_actividades';
  $strongarm->value = 0;

  $export['comment_anonymous_actividades'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_actividades';
  $strongarm->value = '3';

  $export['comment_controls_actividades'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_actividades';
  $strongarm->value = '4';

  $export['comment_default_mode_actividades'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_actividades';
  $strongarm->value = '1';

  $export['comment_default_order_actividades'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_actividades';
  $strongarm->value = '50';

  $export['comment_default_per_page_actividades'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_actividades';
  $strongarm->value = '1';

  $export['comment_form_location_actividades'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_actividades';
  $strongarm->value = '0';

  $export['comment_preview_actividades'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_actividades';
  $strongarm->value = '1';

  $export['comment_subject_field_actividades'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_actividades';
  $strongarm->value = array(
    'title' => '-3',
    'body_field' => '0',
    'revision_information' => '2',
    'author' => '3',
    'options' => '4',
    'comment_settings' => '6',
    'menu' => '-4',
    'path' => '5',
  );

  $export['content_extra_weights_actividades'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_actividades';
  $strongarm->value = '0';

  $export['language_content_type_actividades'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_actividades';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_actividades'] = $strongarm;
  return $export;
}
