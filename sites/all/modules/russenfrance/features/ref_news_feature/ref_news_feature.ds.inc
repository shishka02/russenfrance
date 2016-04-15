<?php
/**
 * @file
 * ref_news_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ref_news_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ref_feed_news|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ref_feed_news';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'ref_rss_read_full_content' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'addtoany' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|ref_feed_news|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ref_news_feature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ref_rss_read_full_content';
  $ds_field->label = 'RSS Read Full Content';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|53a081d2ffd81db1206d707588a15e0d',
    'block_render' => '3',
  );
  $export['ref_rss_read_full_content'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ref_news_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ref_feed_news|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ref_feed_news';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'submitted_by',
        1 => 'field_miniature',
        2 => 'body',
        3 => 'ref_rss_read_full_content',
        4 => 'addtoany',
      ),
    ),
    'fields' => array(
      'submitted_by' => 'ds_content',
      'field_miniature' => 'ds_content',
      'body' => 'ds_content',
      'ref_rss_read_full_content' => 'ds_content',
      'addtoany' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ref_feed_news|default'] = $ds_layout;

  return $export;
}
