<?php
/**
 * @file
 * ref_news_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ref_news_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ref_rss_news_feed';
  $feeds_importer->config = array(
    'name' => 'RSS news feed',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 1,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'ref_feed_news',
        'update_existing' => '0',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'tags',
            'target' => 'field_news_category',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'enclosure',
            'target' => 'field_miniature:uri',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'filtered_html',
        'author' => 0,
        'authorize' => 1,
        'update_non_existent' => 'skip',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => 'ref_feed',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ref_rss_news_feed'] = $feeds_importer;

  return $export;
}
