<?php
/**
 * @file
 * ref_news_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ref_news_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-russenfrance_news-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'russenfrance_news-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(
      0 => 'news',
      1 => 'ref_feed_news',
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
        'weight' => -23,
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
