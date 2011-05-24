<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function gestioncoop_acta_consejo_ctools_plugin_api() {
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
function gestioncoop_acta_consejo_node_info() {
  $items = array(
    'acta_consejo' => array(
      'name' => t('Acta de Consejo'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function gestioncoop_acta_consejo_views_api() {
  return array(
    'api' => '2',
  );
}
