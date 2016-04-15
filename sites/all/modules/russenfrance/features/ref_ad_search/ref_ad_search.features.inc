<?php
/**
 * @file
 * ref_ad_search.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ref_ad_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumbs_views_features_default_settings().
 */
function ref_ad_search_custom_breadcrumbs_views_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: search_ad.
  $custom_breadcrumbs['search_ad'] = array(
    'name' => 'search/ad',
    'titles' => 'Доска объявлений',
    'paths' => 'search/ad',
    'visibility_php' => '',
    'views_path' => 'search/ad',
    'language' => '',
    'machine_name' => 'search_ad',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_default_search_api_index().
 */
function ref_ad_search_default_search_api_index() {
  $items = array();
  $items['ref_ad_search'] = entity_import('search_api_index', '{
    "name" : "Russenfrance search",
    "machine_name" : "ref_ad_search",
    "description" : null,
    "server" : "ref_db_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "ad" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "created" : { "type" : "date" },
        "field_ref_address:administrative_area" : { "type" : "string" },
        "field_ref_address:postal_code" : { "type" : "string" },
        "field_ref_category" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_ref_price" : { "type" : "decimal" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function ref_ad_search_default_search_api_server() {
  $items = array();
  $items['ref_db_server'] = entity_import('search_api_server', '{
    "name" : "DB server",
    "machine_name" : "ref_db_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 0,
      "indexes" : { "ref_ad_search" : {
          "type" : {
            "table" : "search_api_db_ref_ad_search",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_ref_ad_search",
            "column" : "status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_ref_ad_search",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_ref_ad_search",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_ref_category" : {
            "table" : "search_api_db_ref_ad_search",
            "column" : "field_ref_category",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_ref_price" : {
            "table" : "search_api_db_ref_ad_search",
            "column" : "field_ref_price",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_ref_ad_search",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_ref_address:postal_code" : {
            "table" : "search_api_db_ref_ad_search",
            "column" : "field_ref_address_postal_code",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_ref_ad_search_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_ref_ad_search_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "field_ref_address:administrative_area" : {
            "table" : "search_api_db_ref_ad_search",
            "column" : "field_ref_address_administrative_area",
            "type" : "string",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
