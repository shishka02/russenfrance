<?php
/**
 * @file
 * ref_news_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ref_news_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ref_news_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function ref_news_feature_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: rss_news.
  $custom_breadcrumbs['rss_news'] = array(
    'name' => 'Rss news',
    'titles' => 'НОВОСТИ ФРАНЦИИ',
    'paths' => 'news',
    'visibility_php' => '',
    'node_type' => 'ref_feed_news',
    'language' => 'ru',
    'machine_name' => 'rss_news',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_image_default_styles().
 */
function ref_news_feature_image_default_styles() {
  $styles = array();

  // Exported image style: news_list.
  $styles['news_list'] = array(
    'label' => 'news_list',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 140,
          'height' => 90,
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
function ref_news_feature_node_info() {
  $items = array(
    'news' => array(
      'name' => t('Новости Франции'),
      'base' => 'node_content',
      'description' => t('Новостные статьи.'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
    'ref_feed' => array(
      'name' => t('Новости Франции RSS лента'),
      'base' => 'node_content',
      'description' => t('Подписаться на RSS. Создает материалы "Новости Франции RSS".'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
    'ref_feed_news' => array(
      'name' => t('Новости Франции RSS'),
      'base' => 'node_content',
      'description' => t('Новости Франции RSS материал. Создаеться автоматически.'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
