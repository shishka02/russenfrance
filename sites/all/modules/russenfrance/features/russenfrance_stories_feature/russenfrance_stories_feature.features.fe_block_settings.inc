<?php
/**
 * @file
 * russenfrance_stories_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function russenfrance_stories_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-80909077dd13f997469b2f1411a4b2e3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '80909077dd13f997469b2f1411a4b2e3',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(
      0 => 'ref_otherstory',
    ),
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'russenfrance',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Смотрите также:',
    'visibility' => 0,
  );

  $export['views-fa526b565b0b7397755472a512f45a79'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'fa526b565b0b7397755472a512f45a79',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(
      0 => 'ref_story',
    ),
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'russenfrance',
        'weight' => -20,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Смотрите также:',
    'visibility' => 0,
  );

  return $export;
}
