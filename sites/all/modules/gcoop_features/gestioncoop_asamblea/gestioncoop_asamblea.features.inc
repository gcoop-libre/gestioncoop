<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function gestioncoop_asamblea_ctools_plugin_api() {
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
function gestioncoop_asamblea_node_info() {
  $items = array(
    'asamblea' => array(
      'name' => t('Asamblea'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('<br />
'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function gestioncoop_asamblea_views_api() {
  return array(
    'api' => '2',
  );
}
