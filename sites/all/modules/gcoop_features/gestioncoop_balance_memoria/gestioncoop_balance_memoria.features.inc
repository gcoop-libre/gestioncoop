<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function gestioncoop_balance_memoria_ctools_plugin_api() {
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
function gestioncoop_balance_memoria_node_info() {
  $items = array(
    'balances_memorias' => array(
      'name' => t('Balances y Memorias'),
      'module' => 'features',
      'description' => t('Tipo de contenido para Balances y Memorias'),
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
function gestioncoop_balance_memoria_views_api() {
  return array(
    'api' => '2',
  );
}
