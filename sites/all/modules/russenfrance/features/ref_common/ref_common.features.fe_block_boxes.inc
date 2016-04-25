<?php
/**
 * @file
 * ref_common.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ref_common_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'call_back';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'call_back';
  $fe_block_boxes->body = '                           <ul class="call_back">
<li class="call_back_pict">

				<i class="fa fa-skype"></i><i class="fa fa-mobile"></i><i class="fa fa-whatsapp"></i> 

			</li>
<li class="call_back_link">
<a href="#">
			
				<p>Заказать обратный звонок</p>
			
</a>
</li>
</ul>';

  $export['call_back'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'ссылки сверху';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'top_links';
  $fe_block_boxes->body = '<ul class="top_links">
<a href="#">
                        <li class="top_link_1">

				<p>Найти фирму</p><span>или услугу</span><i class="fa fa-search"></i> 

			</li>
</a>
<a href="node/add/ad">
			<li class="top_link_2">
				<p>Добавить</p><span> объявление</span><i class="fa fa-thumb-tack"></i> 
			</li>
</a>
		</ul>';

  $export['top_links'] = $fe_block_boxes;

  return $export;
}
