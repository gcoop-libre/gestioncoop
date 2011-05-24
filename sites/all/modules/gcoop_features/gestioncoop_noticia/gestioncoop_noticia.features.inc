<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function gestioncoop_noticia_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function gestioncoop_noticia_imagecache_default_presets() {
  $items = array(
    'thumbnail_teaser_actividades' => array(
      'presetname' => 'thumbnail_teaser_actividades',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '100',
            'height' => '120',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function gestioncoop_noticia_node_info() {
  $items = array(
    'noticias' => array(
      'name' => t('Noticias'),
      'module' => 'features',
      'description' => t('Tipo de contenido para publicar noticias'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function gestioncoop_noticia_views_api() {
  return array(
    'api' => '2',
  );
}
