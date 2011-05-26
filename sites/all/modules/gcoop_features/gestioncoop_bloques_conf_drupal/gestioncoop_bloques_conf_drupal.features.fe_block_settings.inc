<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function gestioncoop_bloques_conf_drupal_default_fe_block_settings() {
  $export = array();

  // ninesixty
  $theme = array();

  $theme['calendar-0'] = array(
    'module' => 'calendar',
    'delta' => '0',
    'theme' => 'ninesixty',
    'status' => 0,
    'weight' => '-12',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Calendario',
    'cache' => '1',
  );

  $theme['forum-0'] = array(
    'module' => 'forum',
    'delta' => '0',
    'theme' => 'ninesixty',
    'status' => 0,
    'weight' => '-10',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['forum-1'] = array(
    'module' => 'forum',
    'delta' => '1',
    'theme' => 'ninesixty',
    'status' => '1',
    'weight' => '-11',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => 'crear_acta',
    'title' => '',
    'cache' => '1',
  );

  $theme['menu-primary-links'] = array(
    'module' => 'menu',
    'delta' => 'primary-links',
    'theme' => 'ninesixty',
    'status' => '1',
    'weight' => '-13',
    'region' => 'navigation',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-secondary-links'] = array(
    'module' => 'menu',
    'delta' => 'secondary-links',
    'theme' => 'ninesixty',
    'status' => '1',
    'weight' => '-14',
    'region' => 'navigation',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['poll-0'] = array(
    'module' => 'poll',
    'delta' => '0',
    'theme' => 'ninesixty',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['search-0'] = array(
    'module' => 'search',
    'delta' => '0',
    'theme' => 'ninesixty',
    'status' => '1',
    'weight' => '-14',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => 'crear_acta',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-0'] = array(
    'module' => 'user',
    'delta' => '0',
    'theme' => 'ninesixty',
    'status' => '1',
    'weight' => '-14',
    'region' => 'content',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['ninesixty'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
