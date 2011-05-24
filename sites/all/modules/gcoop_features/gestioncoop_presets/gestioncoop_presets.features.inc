<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function gestioncoop_presets_imagecache_default_presets() {
  $items = array(
    'original_perfil' => array(
      'presetname' => 'original_perfil',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '300',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'thumbnail_perfil' => array(
      'presetname' => 'thumbnail_perfil',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '50',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}
