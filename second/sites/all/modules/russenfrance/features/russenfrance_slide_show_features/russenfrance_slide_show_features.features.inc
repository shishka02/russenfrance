<?php
/**
 * @file
 * russenfrance_slide_show_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function russenfrance_slide_show_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function russenfrance_slide_show_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function russenfrance_slide_show_features_image_default_styles() {
  $styles = array();

  // Exported image style: slide_show__130x130_.
  $styles['slide_show__130x130_'] = array(
    'label' => 'slide_show (130x130)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 130,
          'height' => 130,
          'upscale' => 0,
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
function russenfrance_slide_show_features_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('<none>'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
