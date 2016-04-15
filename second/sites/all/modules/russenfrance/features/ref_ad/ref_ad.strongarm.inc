<?php
/**
 * @file
 * ref_ad.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ref_ad_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ad';
  $strongarm->value = '1';
  $export['comment_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ad';
  $strongarm->value = '0';
  $export['comment_anonymous_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ad';
  $strongarm->value = 1;
  $export['comment_default_mode_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ad';
  $strongarm->value = '50';
  $export['comment_default_per_page_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ad';
  $strongarm->value = 1;
  $export['comment_form_location_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ad';
  $strongarm->value = '1';
  $export['comment_preview_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ad';
  $strongarm->value = 1;
  $export['comment_subject_field_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_taxonomy_term__ref_category';
  $strongarm->value = array(
    'default_language' => 'ru',
    'hide_language_selector' => 0,
    'exclude_language_none' => 1,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_taxonomy_term__ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ad';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'submitted_by' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ad';
  $strongarm->value = '1';
  $export['language_content_type_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ad';
  $strongarm->value = array();
  $export['menu_options_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ad';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ad';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ad';
  $strongarm->value = '1';
  $export['node_preview_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ad';
  $strongarm->value = 1;
  $export['node_submitted_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ad_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ad_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ad_pattern';
  $strongarm->value = 'ad/[node:title]';
  $export['pathauto_node_ad_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ad_ru_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ad_ru_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ad_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ad_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_ref_category_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_ref_category_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_ad';
  $strongarm->value = array(
    'full' => '[node:created:medium], <i class="fa fa-comments-o fa-lg"></i> [node:comment-count], <i class="fa fa-eye fa-lg"></i> [node:total-count]',
    'teaser' => '[node:created:d_month_yyyy]',
    'rss' => 'Submitted by [node:author] on [node:created]',
    'search_index' => 'Submitted by [node:author] on [node:created]',
    'search_result' => 'Submitted by [node:author] on [node:created]',
    'diff_standard' => 'Submitted by [node:author] on [node:created]',
    'token' => 'Submitted by [node:author] on [node:created]',
    'revision' => 'Submitted by [node:author] on [node:created]',
  );
  $export['submitted_by_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_comment_ad';
  $strongarm->value = 'Submitted by [comment:author] on [comment:created]';
  $export['submitted_by_comment_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_comment_node_ad';
  $strongarm->value = 'Submitted by [comment:author] on [comment:created]';
  $export['submitted_by_comment_node_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_ref_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_num_ref_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_num_ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_end_all_ref_category';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_end_all_ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_expanded_ref_category';
  $strongarm->value = 1;
  $export['taxonomy_menu_expanded_ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_flat_ref_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_flat_ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_hide_empty_terms_ref_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_hide_empty_terms_ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_path_ref_category';
  $strongarm->value = 'ref_search_get_taxonomy_menu_path';
  $export['taxonomy_menu_path_ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_rebuild_ref_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_rebuild_ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_sync_ref_category';
  $strongarm->value = 1;
  $export['taxonomy_menu_sync_ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_term_item_description_ref_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_term_item_description_ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_ref_category';
  $strongarm->value = 'menu-sidebar-menu';
  $export['taxonomy_menu_vocab_menu_ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_parent_ref_category';
  $strongarm->value = '0';
  $export['taxonomy_menu_vocab_parent_ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_description_ref_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_voc_item_description_ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_ref_category';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_item_ref_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_name_ref_category';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_name_ref_category'] = $strongarm;

  return $export;
}
