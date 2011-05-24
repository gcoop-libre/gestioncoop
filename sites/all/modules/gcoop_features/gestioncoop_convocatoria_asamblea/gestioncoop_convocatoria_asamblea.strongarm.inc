<?php

/**
 * Implementation of hook_strongarm().
 */
function gestioncoop_convocatoria_asamblea_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_convocatoria_asamblea';
  $strongarm->value = 0;

  $export['comment_anonymous_convocatoria_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_convocatoria_asamblea';
  $strongarm->value = '3';

  $export['comment_controls_convocatoria_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_convocatoria_asamblea';
  $strongarm->value = '0';

  $export['comment_convocatoria_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_convocatoria_asamblea';
  $strongarm->value = '4';

  $export['comment_default_mode_convocatoria_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_convocatoria_asamblea';
  $strongarm->value = '1';

  $export['comment_default_order_convocatoria_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_convocatoria_asamblea';
  $strongarm->value = '50';

  $export['comment_default_per_page_convocatoria_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_convocatoria_asamblea';
  $strongarm->value = '0';

  $export['comment_form_location_convocatoria_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_convocatoria_asamblea';
  $strongarm->value = '1';

  $export['comment_preview_convocatoria_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_convocatoria_asamblea';
  $strongarm->value = '1';

  $export['comment_subject_field_convocatoria_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_convocatoria_asamblea';
  $strongarm->value = array(
    'title' => '39',
    'revision_information' => '41',
    'author' => '42',
    'options' => '43',
    'comment_settings' => '44',
    'menu' => '40',
    'path' => '45',
  );

  $export['content_extra_weights_convocatoria_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_convocatoria_asamblea';
  $strongarm->value = '0';

  $export['language_content_type_convocatoria_asamblea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_convocatoria_asamblea';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_convocatoria_asamblea'] = $strongarm;
  return $export;
}
