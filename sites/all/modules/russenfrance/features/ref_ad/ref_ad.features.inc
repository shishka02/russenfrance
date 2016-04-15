<?php
/**
 * @file
 * ref_ad.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ref_ad_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function ref_ad_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: ad.
  $custom_breadcrumbs['ad'] = array(
    'name' => 'Объявление',
    'titles' => 'Доска объявлений
[node:field-ref-category:parent:i18n-name]
[node:field-ref-category:i18n-name]',
    'paths' => 'search/ad
search/ad?category=[node:field-ref-category:parent:tid]
search/ad?category=[node:field-ref-category:tid]',
    'visibility_php' => '',
    'node_type' => 'ad',
    'language' => '',
    'machine_name' => 'ad',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function ref_ad_node_info() {
  $items = array(
    'ad' => array(
      'name' => t('Объявление'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
