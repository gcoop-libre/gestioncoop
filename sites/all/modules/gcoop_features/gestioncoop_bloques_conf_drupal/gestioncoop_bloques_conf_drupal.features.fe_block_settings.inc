<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function gestioncoop_bloques_conf_drupal_default_fe_block_settings() {
  $export = array();

  // ninesixty
  $theme = array();

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
    'weight' => '-12',
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
    'weight' => '-15',
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

  $theme['views-002bb8861a4c677218715ccd4389f381'] = array(
    'module' => 'views',
    'delta' => '002bb8861a4c677218715ccd4389f381',
    'theme' => 'ninesixty',
    'status' => 1,
    'weight' => '-10',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Inicio-block_1'] = array(
    'module' => 'views',
    'delta' => 'Inicio-block_1',
    'theme' => 'ninesixty',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['ninesixty'] = $theme;

  // garland
  $theme = array();

  $theme['forum-0'] = array(
    'module' => 'forum',
    'delta' => '0',
    'theme' => 'garland',
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

  $theme['forum-1'] = array(
    'module' => 'forum',
    'delta' => '1',
    'theme' => 'garland',
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

  $theme['menu-primary-links'] = array(
    'module' => 'menu',
    'delta' => 'primary-links',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '-2',
    'region' => '',
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
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
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
    'theme' => 'garland',
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
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-0'] = array(
    'module' => 'user',
    'delta' => '0',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '-5',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-002bb8861a4c677218715ccd4389f381'] = array(
    'module' => 'views',
    'delta' => '002bb8861a4c677218715ccd4389f381',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Inicio-block_1'] = array(
    'module' => 'views',
    'delta' => 'Inicio-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['garland'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
