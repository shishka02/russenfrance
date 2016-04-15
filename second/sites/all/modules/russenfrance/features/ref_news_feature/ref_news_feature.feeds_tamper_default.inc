<?php
/**
 * @file
 * ref_news_feature.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ref_news_feature_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ref_rss_news_feed-description-html_entity_decode';
  $feeds_tamper->importer = 'ref_rss_news_feed';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['ref_rss_news_feed-description-html_entity_decode'] = $feeds_tamper;

  return $export;
}
