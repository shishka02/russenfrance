<?php
/**
 * @file
 * sidebar_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function sidebar_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-sidebar-menu.
  $menus['menu-sidebar-menu'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'title' => 'Sidebar_menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Sidebar_menu');

  return $menus;
}
