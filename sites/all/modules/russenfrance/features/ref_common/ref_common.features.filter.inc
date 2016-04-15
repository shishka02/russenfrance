<?php
/**
 * @file
 * ref_common.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ref_common_filter_default_formats() {
  $formats = array();

  // Exported format: Графический.
  $formats['graphical'] = array(
    'format' => 'graphical',
    'name' => 'Графический',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(),
  );

  return $formats;
}
