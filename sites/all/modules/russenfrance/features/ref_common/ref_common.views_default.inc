<?php
/**
 * @file
 * ref_common.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ref_common_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'obyavlenia_discription';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Описание обьвлений';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Описание обьвлений';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по:';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Поле: Содержимое: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Контекстный фильтр: Содержимое: Имеет идентификатор термина таксономии (с глубиной) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['code'] = 'return $_GET[\'category\'];';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'ref_category' => 'ref_category',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  /* Критерий фильтра: Содержимое: Опубликовано */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Критерий фильтра: Содержимое: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'obyavlenia_discription_material' => 'obyavlenia_discription_material',
  );
  /* Критерий фильтра: Содержимое: Имеет термины таксономии (с глубиной; <em class="placeholder">Simple hierarchical select</em>) */
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['value'] = array(
    78 => '78',
    96 => '96',
    51 => '51',
    101 => '101',
    2 => '2',
    1 => '1',
    73 => '73',
    82 => '82',
    99 => '99',
    3 => '3',
    5 => '5',
    6 => '6',
    79 => '79',
    74 => '74',
    90 => '90',
    75 => '75',
    95 => '95',
    7 => '7',
    92 => '92',
    71 => '71',
    4 => '4',
    48 => '48',
    72 => '72',
    49 => '49',
    98 => '98',
    77 => '77',
    81 => '81',
    76 => '76',
    83 => '83',
    50 => '50',
    80 => '80',
    97 => '97',
    100 => '100',
    94 => '94',
    86 => '86',
    52 => '52',
    84 => '84',
    89 => '89',
    87 => '87',
    93 => '93',
    88 => '88',
    91 => '91',
    85 => '85',
  );
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'ref_category';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'taxonomy/term/%.';
  $translatables['obyavlenia_discription'] = array(
    t('Master'),
    t('Описание обьвлений'),
    t('ещё'),
    t('Применить'),
    t('Сбросить'),
    t('Сортировать по:'),
    t('По возрастанию'),
    t('По убыванию'),
    t('Все'),
    t('Block'),
    t('taxonomy/term/%.'),
  );
  $export['obyavlenia_discription'] = $view;

  $view = new view();
  $view->name = 'rules_obyavlenia';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Правила подачи объявления';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Правила подачи объявления';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по:';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Поле: Содержимое: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Критерий сортировки: Содержимое: Дата публикации */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Критерий фильтра: Содержимое: Опубликовано */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['rules_obyavlenia'] = array(
    t('Master'),
    t('Правила подачи объявления'),
    t('ещё'),
    t('Применить'),
    t('Сбросить'),
    t('Сортировать по:'),
    t('По возрастанию'),
    t('По убыванию'),
    t('Block'),
  );
  $export['rules_obyavlenia'] = $view;

  $view = new view();
  $view->name = 'users_materials_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Все обьявления пользователя';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Все обьявления пользователя';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по:';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'uid' => 'uid',
    'created' => 'created',
    'status' => 'status',
    'unpublish_countdown' => 'unpublish_countdown',
    'totalcount' => 'totalcount',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'unpublish_countdown' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'totalcount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Связь: Содержимое: Автор */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Поле: Содержимое: Изображения */
  $handler->display->display_options['fields']['field_ref_images']['id'] = 'field_ref_images';
  $handler->display->display_options['fields']['field_ref_images']['table'] = 'field_data_field_ref_images';
  $handler->display->display_options['fields']['field_ref_images']['field'] = 'field_ref_images';
  $handler->display->display_options['fields']['field_ref_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ref_images']['alter']['text'] = '[field_ref_images]';
  $handler->display->display_options['fields']['field_ref_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ref_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
    'field_multiple_limit' => '1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_images']['delta_offset'] = '0';
  /* Поле: Редакции материала: Заголовок */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[field_ref_images] [title_1]';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'eva_title';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node_revision'] = TRUE;
  /* Поле: Содержимое: Время снятия с публикации */
  $handler->display->display_options['fields']['field_unpublish']['id'] = 'field_unpublish';
  $handler->display->display_options['fields']['field_unpublish']['table'] = 'field_data_field_unpublish';
  $handler->display->display_options['fields']['field_unpublish']['field'] = 'field_unpublish';
  $handler->display->display_options['fields']['field_unpublish']['label'] = 'Общая Информация';
  $handler->display->display_options['fields']['field_unpublish']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_unpublish']['alter']['text'] = '<div> [field_ref_images] </div> [title_1]
';
  $handler->display->display_options['fields']['field_unpublish']['element_label_colon'] = FALSE;
  /* Поле: Содержимое: Дата публикации */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Общая информация';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '[field_ref_images] [title_1]
[delete_node]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'd_month_yyyy';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Поле: Scheduler: Unpublish countdown */
  $handler->display->display_options['fields']['unpublish_countdown']['id'] = 'unpublish_countdown';
  $handler->display->display_options['fields']['unpublish_countdown']['table'] = 'scheduler';
  $handler->display->display_options['fields']['unpublish_countdown']['field'] = 'unpublish_countdown';
  $handler->display->display_options['fields']['unpublish_countdown']['label'] = 'Снятие с публикации через';
  $handler->display->display_options['fields']['unpublish_countdown']['exclude'] = TRUE;
  $handler->display->display_options['fields']['unpublish_countdown']['element_label_colon'] = FALSE;
  /* Поле: Содержимое: Опубликовано */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Статус публикации';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['status']['alter']['text'] = '<div> Дата создания: <span> [created] </span> </div>
<div> Статус публикации:<span> [status] </span> </div>
<div> Снятие с публикации через:<span> [unpublish_countdown] </span> </div>';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Поле: Статистика содержимого: Всего просмотров */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = 'Просмотров';
  $handler->display->display_options['fields']['totalcount']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['alter']['text'] = '<i class="fa fa-eye fa-lg"></i> [totalcount]';
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Поле: Содержимое: Ссылка на удаление */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['alter']['text'] = '[field_ref_images] [title_1]
[delete_node]';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Критерий сортировки: Содержимое: Дата публикации */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Критерий фильтра: Содержимое: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ad' => 'ad',
  );
  /* Критерий фильтра: Пользователь: Текущий */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['entity_type'] = 'user';
  $handler->display->display_options['bundles'] = array(
    0 => 'user',
  );
  $handler->display->display_options['argument_mode'] = 'token';
  $handler->display->display_options['default_argument'] = '[current-user:uid],[current-user:url]';
  $translatables['users_materials_views'] = array(
    t('Master'),
    t('Все обьявления пользователя'),
    t('ещё'),
    t('Применить'),
    t('Сбросить'),
    t('Сортировать по:'),
    t('По возрастанию'),
    t('По убыванию'),
    t('автор'),
    t('Изображения'),
    t('[field_ref_images]'),
    t('Заголовок'),
    t('[field_ref_images] [title_1]'),
    t('Общая Информация'),
    t('<div> [field_ref_images] </div> [title_1]
'),
    t('Общая информация'),
    t('[field_ref_images] [title_1]
[delete_node]'),
    t('Снятие с публикации через'),
    t('Статус публикации'),
    t('<div> Дата создания: <span> [created] </span> </div>
<div> Статус публикации:<span> [status] </span> </div>
<div> Снятие с публикации через:<span> [unpublish_countdown] </span> </div>'),
    t('Просмотров'),
    t('<i class="fa fa-eye fa-lg"></i> [totalcount]'),
    t('.'),
    t(','),
    t('Block'),
    t('EVA Field'),
  );
  $export['users_materials_views'] = $view;

  return $export;
}
