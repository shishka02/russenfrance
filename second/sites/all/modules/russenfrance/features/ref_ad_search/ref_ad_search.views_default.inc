<?php
/**
 * @file
 * ref_ad_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ref_ad_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'russenfrance_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_ref_ad_search';
  $view->human_name = 'Russenfrance search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Объявления';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Поиск';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по:';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Не найдено ни одного объявления, соответствующего параметрам поиска. Проверьте правильность написания или введите другие параметры поиска.';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_ref_ad_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Цена */
  $handler->display->display_options['fields']['field_ref_price']['id'] = 'field_ref_price';
  $handler->display->display_options['fields']['field_ref_price']['table'] = 'search_api_index_ref_ad_search';
  $handler->display->display_options['fields']['field_ref_price']['field'] = 'field_ref_price';
  $handler->display->display_options['fields']['field_ref_price']['label'] = '';
  $handler->display->display_options['fields']['field_ref_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Рубрика */
  $handler->display->display_options['fields']['field_ref_category']['id'] = 'field_ref_category';
  $handler->display->display_options['fields']['field_ref_category']['table'] = 'search_api_index_ref_ad_search';
  $handler->display->display_options['fields']['field_ref_category']['field'] = 'field_ref_category';
  $handler->display->display_options['fields']['field_ref_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_ref_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_ref_category']['bypass_access'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_ref_ad_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Населенный пункт: Administrative area (i.e. State / Province) (indexed) */
  $handler->display->display_options['filters']['field_ref_address_administrative_area']['id'] = 'field_ref_address_administrative_area';
  $handler->display->display_options['filters']['field_ref_address_administrative_area']['table'] = 'search_api_index_ref_ad_search';
  $handler->display->display_options['filters']['field_ref_address_administrative_area']['field'] = 'field_ref_address_administrative_area';
  $handler->display->display_options['filters']['field_ref_address_administrative_area']['value'] = 'All';
  $handler->display->display_options['filters']['field_ref_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_ref_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ref_address_administrative_area']['expose']['operator_id'] = 'field_ref_address_administrative_area_op';
  $handler->display->display_options['filters']['field_ref_address_administrative_area']['expose']['operator'] = 'field_ref_address_administrative_area_op';
  $handler->display->display_options['filters']['field_ref_address_administrative_area']['expose']['identifier'] = 'region';
  $handler->display->display_options['filters']['field_ref_address_administrative_area']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_ref_address_administrative_area']['group_info']['label'] = 'Administrative area (i.e. State / Province) (indexed)';
  $handler->display->display_options['filters']['field_ref_address_administrative_area']['group_info']['identifier'] = 'field_ref_address_administrative_area';
  $handler->display->display_options['filters']['field_ref_address_administrative_area']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_ref_address_administrative_area']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Населенный пункт: Postal code (indexed) */
  $handler->display->display_options['filters']['field_ref_address_postal_code']['id'] = 'field_ref_address_postal_code';
  $handler->display->display_options['filters']['field_ref_address_postal_code']['table'] = 'search_api_index_ref_ad_search';
  $handler->display->display_options['filters']['field_ref_address_postal_code']['field'] = 'field_ref_address_postal_code';
  $handler->display->display_options['filters']['field_ref_address_postal_code']['group'] = 1;
  $handler->display->display_options['filters']['field_ref_address_postal_code']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ref_address_postal_code']['expose']['operator_id'] = 'field_ref_address_postal_code_op';
  $handler->display->display_options['filters']['field_ref_address_postal_code']['expose']['operator'] = 'field_ref_address_postal_code_op';
  $handler->display->display_options['filters']['field_ref_address_postal_code']['expose']['identifier'] = 'address';
  $handler->display->display_options['filters']['field_ref_address_postal_code']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Indexed Node: Рубрика */
  $handler->display->display_options['filters']['field_ref_category']['id'] = 'field_ref_category';
  $handler->display->display_options['filters']['field_ref_category']['table'] = 'search_api_index_ref_ad_search';
  $handler->display->display_options['filters']['field_ref_category']['field'] = 'field_ref_category';
  $handler->display->display_options['filters']['field_ref_category']['value'] = 'All';
  $handler->display->display_options['filters']['field_ref_category']['group'] = 1;
  $handler->display->display_options['filters']['field_ref_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ref_category']['expose']['operator_id'] = 'field_ref_category_op';
  $handler->display->display_options['filters']['field_ref_category']['expose']['operator'] = 'field_ref_category_op';
  $handler->display->display_options['filters']['field_ref_category']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['field_ref_category']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ref_category']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search/ad';
  $handler->display->display_options['menu']['title'] = 'Объявления';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Страница */
  $handler = $view->new_display('page', 'Страница', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Все объявления пользователя';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_ref_ad_search';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Author */
  $handler->display->display_options['arguments']['author']['id'] = 'author';
  $handler->display->display_options['arguments']['author']['table'] = 'search_api_index_ref_ad_search';
  $handler->display->display_options['arguments']['author']['field'] = 'author';
  $handler->display->display_options['arguments']['author']['default_action'] = 'default';
  $handler->display->display_options['arguments']['author']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['author']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['author']['title'] = 'Все объявления %1';
  $handler->display->display_options['arguments']['author']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['author']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['author']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['author']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['author']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['author']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['author']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['author']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['author']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'user/%/ads';
  $translatables['russenfrance_search'] = array(
    t('Master'),
    t('Объявления'),
    t('more'),
    t('Поиск'),
    t('Сбросить'),
    t('Сортировать по:'),
    t('По возрастанию'),
    t('По убыванию'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Не найдено ни одного объявления, соответствующего параметрам поиска. Проверьте правильность написания или введите другие параметры поиска.'),
    t('Рубрика'),
    t('Administrative area (i.e. State / Province) (indexed)'),
    t('Page'),
    t('Страница'),
    t('Все объявления пользователя'),
    t('Все'),
    t('Все объявления %1'),
    t('%1'),
  );
  $export['russenfrance_search'] = $view;

  return $export;
}
