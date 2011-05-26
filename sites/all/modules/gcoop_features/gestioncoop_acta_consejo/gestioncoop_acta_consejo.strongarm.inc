<?php

/**
 * Implementation of hook_strongarm().
 */
function gestioncoop_acta_consejo_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_acta_consejo';
  $strongarm->value = '1';

  $export['ant_acta_consejo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_acta_consejo';
  $strongarm->value = 'Acta de Consejo [field_fecha-dd]-[field_fecha-mm]-[field_fecha-yyyy]';

  $export['ant_pattern_acta_consejo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_acta_consejo';
  $strongarm->value = 0;

  $export['ant_php_acta_consejo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_acta_consejo';
  $strongarm->value = '0';

  $export['comment_acta_consejo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_acta_consejo';
  $strongarm->value = 0;

  $export['comment_anonymous_acta_consejo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_acta_consejo';
  $strongarm->value = '3';

  $export['comment_controls_acta_consejo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_acta_consejo';
  $strongarm->value = '4';

  $export['comment_default_mode_acta_consejo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_acta_consejo';
  $strongarm->value = '1';

  $export['comment_default_order_acta_consejo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_acta_consejo';
  $strongarm->value = '50';

  $export['comment_default_per_page_acta_consejo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_acta_consejo';
  $strongarm->value = '0';

  $export['comment_form_location_acta_consejo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_acta_consejo';
  $strongarm->value = '1';

  $export['comment_preview_acta_consejo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_acta_consejo';
  $strongarm->value = '1';

  $export['comment_subject_field_acta_consejo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_acta_consejo';
  $strongarm->value = array(
    'title' => '16',
    'revision_information' => '19',
    'author' => '18',
    'options' => '20',
    'comment_settings' => '22',
    'menu' => '17',
    'path' => '21',
  );

  $export['content_extra_weights_acta_consejo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_acta_consejo';
  $strongarm->value = '0';

  $export['language_content_type_acta_consejo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_acta_consejo';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_acta_consejo'] = $strongarm;
  return $export;
}
