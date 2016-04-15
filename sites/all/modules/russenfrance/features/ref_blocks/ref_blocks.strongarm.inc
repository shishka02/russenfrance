<?php
/**
 * @file
 * ref_blocks.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ref_blocks_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'languageicons_path';
  $strongarm->value = 'sites/all/themes/russenfrance/images/flags/*.gif';
  $export['languageicons_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'languageicons_placement';
  $strongarm->value = 'replace';
  $export['languageicons_placement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'languageicons_show_block';
  $strongarm->value = 1;
  $export['languageicons_show_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'languageicons_show_node';
  $strongarm->value = 1;
  $export['languageicons_show_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'languageicons_size';
  $strongarm->value = '25x17';
  $export['languageicons_size'] = $strongarm;

  return $export;
}
