<?php
/**
 * @file
 * russenfrance_stories_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function russenfrance_stories_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function russenfrance_stories_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumbs_taxonomy_vocabulary_features_default_settings().
 */
function russenfrance_stories_feature_custom_breadcrumbs_taxonomy_vocabulary_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: news_vocabulary.
  $custom_breadcrumbs['news_vocabulary'] = array(
    'name' => 'Новости',
    'titles' => 'НОВОСТИ ФРАНЦИИ',
    'paths' => 'news',
    'vid' => 4,
    'visibility_php' => '',
    'language' => 'ru',
    'machine_name' => 'news_vocabulary',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_image_default_styles().
 */
function russenfrance_stories_feature_image_default_styles() {
  $styles = array();

  // Exported image style: stories_block_list.
  $styles['stories_block_list'] = array(
    'label' => 'stories_block_list',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 192,
          'height' => 111,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: stories_list.
  $styles['stories_list'] = array(
    'label' => 'stories_list',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 255,
          'height' => 143,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function russenfrance_stories_feature_node_info() {
  $items = array(
    'ref_otherstory' => array(
      'name' => t('Другая статья'),
      'base' => 'node_content',
      'description' => t('ФРАНЦУЗСКАЯ КУХНЯ, НЕДВИЖИМОСТЬ, ПОЛЕЗНО ЗНАТЬ.'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
    'ref_story' => array(
      'name' => t('Статья'),
      'base' => 'node_content',
      'description' => t('СТАТЬИ, ВИДЕО, ВСЕ О ФРАНЦИИ, ГОРОДА ФРАНЦИИ.'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
