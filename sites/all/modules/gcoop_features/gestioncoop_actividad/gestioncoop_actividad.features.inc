<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function gestioncoop_actividad_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function gestioncoop_actividad_node_info() {
  $items = array(
    'actividades' => array(
      'name' => t('Actividades'),
      'module' => 'features',
      'description' => t('Tipo de contenido para publicar actividades'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'has_body' => '1',
      'body_label' => t('Cuerpo'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function gestioncoop_actividad_views_api() {
  return array(
    'api' => '2',
  );
}
