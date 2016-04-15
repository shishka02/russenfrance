<?php
/**
 * @file
 * ref_menus_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ref_menus_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-main-second-menu.
  $menus['menu-main-second-menu'] = array(
    'menu_name' => 'menu-main-second-menu',
    'title' => 'Main second menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-ref-create-ad.
  $menus['menu-ref-create-ad'] = array(
    'menu_name' => 'menu-ref-create-ad',
    'title' => 'Create Ad',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-test-menu.
  $menus['menu-test-menu'] = array(
    'menu_name' => 'menu-test-menu',
    'title' => 'test_menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-test-menu-head.
  $menus['menu-test-menu-head'] = array(
    'menu_name' => 'menu-test-menu-head',
    'title' => 'test_menu_head',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-yellow.
  $menus['menu-yellow'] = array(
    'menu_name' => 'menu-yellow',
    'title' => 'menu-yellow',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create Ad');
  t('Main menu');
  t('Main second menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');
  t('menu-yellow');
  t('test_menu');
  t('test_menu_head');

  return $menus;
}
