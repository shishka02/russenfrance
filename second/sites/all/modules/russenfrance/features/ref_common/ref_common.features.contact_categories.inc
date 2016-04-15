<?php
/**
 * @file
 * ref_common.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function ref_common_contact_categories_defaults() {
  return array(
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'info@russenfrance.com',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
