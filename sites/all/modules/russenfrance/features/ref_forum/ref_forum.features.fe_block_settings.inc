<?php
/**
 * @file
 * ref_forum.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ref_forum_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['forum-new'] = array(
    'cache' => -2,
    'custom' => 0,
    'delta' => 'new',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'forum',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'russenfrance' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'russenfrance',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
