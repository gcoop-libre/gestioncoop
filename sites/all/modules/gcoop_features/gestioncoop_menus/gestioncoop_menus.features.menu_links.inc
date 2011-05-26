<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function gestioncoop_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:<front>
  $menu_links['primary-links:<front>'] = array(
    'menu_name' => 'primary-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inicio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:actividades
  $menu_links['primary-links:actividades'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'actividades',
    'router_path' => 'actividades',
    'link_title' => 'Actividades',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: primary-links:balances-memorias
  $menu_links['primary-links:balances-memorias'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'balances-memorias',
    'router_path' => 'balances-memorias',
    'link_title' => 'Balances y Memorias',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: primary-links:forum
  $menu_links['primary-links:forum'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Foro',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: primary-links:node/24
  $menu_links['primary-links:node/24'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Sala de Chat',
    'options' => array(
      'attributes' => array(
        'title' => 'Sala de Chat',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '7',
  );
  // Exported menu link: primary-links:noticias
  $menu_links['primary-links:noticias'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'noticias',
    'router_path' => 'noticias',
    'link_title' => 'Noticias',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: secondary-links:logout
  $menu_links['secondary-links:logout'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'Cerrar Sesión',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: secondary-links:user
  $menu_links['secondary-links:user'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Mi perfil',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Actividades');
  t('Balances y Memorias');
  t('Cerrar Sesión');
  t('Foro');
  t('Inicio');
  t('Mi perfil');
  t('Noticias');
  t('Sala de Chat');


  return $menu_links;
}
