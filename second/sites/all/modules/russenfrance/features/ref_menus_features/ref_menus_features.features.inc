<?php
/**
 * @file
 * ref_menus_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ref_menus_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ref_menus_features_image_default_styles() {
  $styles = array();

  // Exported image style: russenfrance_menu_icon.
  $styles['russenfrance_menu_icon'] = array(
    'label' => 'russenfrance_menu_icon',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 24,
          'height' => 24,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
