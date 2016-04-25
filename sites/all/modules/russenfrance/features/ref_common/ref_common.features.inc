<?php
/**
 * @file
 * ref_common.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ref_common_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ref_common_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ref_common_node_info() {
  $items = array(
    'ad_rules_material' => array(
      'name' => t('Правила подачи обьявлений'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Доска объявлений для русскоговорящих во Франции.'),
      'help' => '',
    ),
    'for_footer' => array(
      'name' => t('Фуутер'),
      'base' => 'node_content',
      'description' => t('Материал для футера'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'france_city' => array(
      'name' => t('Города Франции'),
      'base' => 'node_content',
      'description' => t('Города Франции'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'obyavlenia_discription_material' => array(
      'name' => t('Описание Обьвлений'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rinok_nedvizhimosti' => array(
      'name' => t('РЫНОК НЕДВИЖИМОСТИ'),
      'base' => 'node_content',
      'description' => t('РЫНОК НЕДВИЖИМОСТИ'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
