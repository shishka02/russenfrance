<?php
/**
 * @file
 * ref_menus_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ref_menus_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_-:search/ad.
  $menu_links['main-menu_-:search/ad'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search/ad',
    'router_path' => 'search/ad',
    'link_title' => 'ДОСКА ОБЪЯВЛЕНИЙ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_-:search/ad',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'ru',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_:<front>.
  $menu_links['main-menu_:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Новости',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'ru',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_:forum.
  $menu_links['main-menu_:forum'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'ФОРУМ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_:forum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'ru',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-second-menu_-:news.
  $menu_links['menu-main-second-menu_-:news'] = array(
    'menu_name' => 'menu-main-second-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'НОВОСТИ ФРАНЦИИ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'russenfrance_menu_icon',
      ),
      'identifier' => 'menu-main-second-menu_-:news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-ref-create-ad_-:node/add/ad.
  $menu_links['menu-ref-create-ad_-:node/add/ad'] = array(
    'menu_name' => 'menu-ref-create-ad',
    'link_path' => 'node/add/ad',
    'router_path' => 'node/add/ad',
    'link_title' => 'ПОДАТЬ ОБЪЯВЛЕНИЕ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-ref-create-ad_-:node/add/ad',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'ru',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-ref-create-ad_publier-une-annonce:node/add/ad.
  $menu_links['menu-ref-create-ad_publier-une-annonce:node/add/ad'] = array(
    'menu_name' => 'menu-ref-create-ad',
    'link_path' => 'node/add/ad',
    'router_path' => 'node/add/ad',
    'link_title' => 'Publier une annonce',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-ref-create-ad_publier-une-annonce:node/add/ad',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-yellow_---:<front>.
  $menu_links['menu-yellow_---:<front>'] = array(
    'menu_name' => 'menu-yellow',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'КАТАЛОГ ФИРМ и УСЛУГ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-yellow_---:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'ru',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-yellow_pages-jaunes:<front>.
  $menu_links['menu-yellow_pages-jaunes:<front>'] = array(
    'menu_name' => 'menu-yellow',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Pages jaunes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-yellow_pages-jaunes:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_:user.
  $menu_links['user-menu_:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'ПРОФИЛЬ',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'user-menu_:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'ru',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_:user/login.
  $menu_links['user-menu_:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'ВХОД',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'user-menu_:user/login',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'ru',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_:user/logout.
  $menu_links['user-menu_:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'ВЫЙТИ',
    'options' => array(
      'identifier' => 'user-menu_:user/logout',
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'ru',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_:user/register.
  $menu_links['user-menu_:user/register'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'РЕГИСТРАЦИЯ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'user-menu_:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'ru',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_se-dconnecter:user/logout.
  $menu_links['user-menu_se-dconnecter:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Se déconnecter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'user-menu_se-dconnecter:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages jaunes');
  t('Publier une annonce');
  t('Se déconnecter');
  t('ВХОД');
  t('ВЫЙТИ');
  t('ДОСКА ОБЪЯВЛЕНИЙ');
  t('КАТАЛОГ ФИРМ и УСЛУГ');
  t('НОВОСТИ ФРАНЦИИ');
  t('Новости');
  t('ПОДАТЬ ОБЪЯВЛЕНИЕ');
  t('ПРОФИЛЬ');
  t('РЕГИСТРАЦИЯ');
  t('ФОРУМ');

  return $menu_links;
}
