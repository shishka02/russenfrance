<?php
/**
 * @file
 * ref_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ref_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer mail';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ref_footer_mail';
  $fe_block_boxes->body = '<ul id="contacts">
			<li>
				E-mail: info@russenfrance.com
			</li>
		</ul>';

  $export['ref_footer_mail'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer menu 1';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ref_footer_menu1';
  $fe_block_boxes->body = '<ul class="tips">
			<li>
				<a href="#">Желтые страницы</a>
			</li>
			<li>
				<a href="#">Объявления ПРЕМИУМ</a>
			</li>
			<li>
				<a href="#">Объявления БЕСПЛАТНО</a>
			</li>
			<li>
				<a href="#">Реклама PUB</a>
			</li>
			<li>
				<a href="#">Условия рекламы</a>
			</li>
			<li>
				<a href="#">Условия объявлений</a>
			</li>
			<li>
				<a href="/ru/user">Личный кабинет</a>
			</li>
		</ul>';

  $export['ref_footer_menu1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer menu 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ref_footer_menu2';
  $fe_block_boxes->body = '<ul class="tips">
			<li>
				<a href="#">О нас</a>
			</li>
			<li>
				<a href="/ru/contacts">Контакты</a>
			</li>
			<li>
				<a href="#">Помощь</a>
			</li>
			<li>
				<a href="#">Каталог фирм и услуг</a>
			</li>
			<li>
				<a href="/ru/forum">Форум</a>
			</li>
			<li>
				<a href="/ru/news">Новости Франции</a>
			</li>
			<li>
				<a href="/ru/search/ad">Доска объявлений</a>
			</li>
		</ul>';

  $export['ref_footer_menu2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer menu 3';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ref_footer_menu3';
  $fe_block_boxes->body = '<ul class="tips">
			<li>
				<a href="#">Легальное инфо</a>
			</li>
			<li>
				<a href="#">Сотрудничество (обмен ссылками)</a>
			</li>
			<li>
				<a href="#">Пользовательское соглашение</a>
			</li>
			<li>
				<a href="#">Политика конфиденциальности</a>
			</li>
			<li>
				<a href="#">Посольства и консульства</a>
			</li>
			<li>
				<a href="#">Адреса церквей</a>
			</li>
			<li>
				<a href="#">Ассоциации</a>
			</li>
		</ul>';

  $export['ref_footer_menu3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer social links';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ref_footer_sociallinks';
  $fe_block_boxes->body = '<ul id="social">
			<li>
				<a href="#" target="_blank"><img src="/sites/all/themes/russenfrance/images/social//vk.png" alt=""></a>
			</li>
			<li>
				<a href="https://www.facebook.com/groups/1433913143589987/pending/" target="_blank"><img src="/sites/all/themes/russenfrance/images/social//fb.png" alt=""></a>
			</li>
                        <li>
				<a href="#" target="_blank"><img src="/sites/all/themes/russenfrance/images/social/twitter.png" alt=""></a>
			</li>
			<li>
				<a href="#" target="_blank"><img src="/sites/all/themes/russenfrance/images/social/rss.png" alt=""></a>
			</li>
                         <li class="odnoklasniki">
				<a href="http://ok.ru/group/52890349273264" target="_blank"><img src="/sites/all/themes/russenfrance/images/social/ok.png" alt=""></a>
			</li>
		</ul>';

  $export['ref_footer_sociallinks'] = $fe_block_boxes;

  return $export;
}
