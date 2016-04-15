<?php
/**
 * @file
 * russenfrance_slide_show_features.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function russenfrance_slide_show_features_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-slide_show-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'slide_show-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'russenfrance' => array(
        'region' => 'slide_show',
        'status' => 1,
        'theme' => 'russenfrance',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
