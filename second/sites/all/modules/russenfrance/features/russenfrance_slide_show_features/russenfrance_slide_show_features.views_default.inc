<?php
/**
 * @file
 * russenfrance_slide_show_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function russenfrance_slide_show_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slide_show';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'slide_show';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'slide_show';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['visible'] = '3';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '3';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['navigation'] = 'after';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_image']['element_class'] = 'image';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => 'slide_show__130x130_',
    'image_link' => '',
  );
  /* Field: Content: Описание */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div clas="image">[field_slide_image]</div>
<div clas="text">[body]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slide' => 'slide',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['slide_show'] = array(
    t('Master'),
    t('slide_show'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div clas="image">[field_slide_image]</div>
<div clas="text">[body]</div>'),
    t('Block'),
  );
  $export['slide_show'] = $view;

  return $export;
}
