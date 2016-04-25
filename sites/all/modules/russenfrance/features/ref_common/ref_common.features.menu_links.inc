<?php
/**
 * @file
 * ref_common.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ref_common_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: devel_clear-cache:devel/cache/clear.
  $menu_links['devel_clear-cache:devel/cache/clear'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/cache/clear',
    'router_path' => 'devel/cache/clear',
    'link_title' => 'Clear cache',
    'options' => array(
      'attributes' => array(
        'title' => 'Clear the CSS cache and all database cache tables which store page, node, theme and variable caches.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_clear-cache:devel/cache/clear',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: devel_devel-settings:devel/settings.
  $menu_links['devel_devel-settings:devel/settings'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/settings',
    'router_path' => 'devel/settings',
    'link_title' => 'Devel settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Helper functions, pages, and blocks to assist Drupal developers. The devel blocks can be managed via the <a href="/admin/structure/block">block administration</a> page.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_devel-settings:devel/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: devel_entity-info:devel/entity/info.
  $menu_links['devel_entity-info:devel/entity/info'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/entity/info',
    'router_path' => 'devel/entity/info',
    'link_title' => 'Entity info',
    'options' => array(
      'attributes' => array(
        'title' => 'View entity information across the whole site.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_entity-info:devel/entity/info',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: devel_execute-php-code:devel/php.
  $menu_links['devel_execute-php-code:devel/php'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/php',
    'router_path' => 'devel/php',
    'link_title' => 'Execute PHP Code',
    'options' => array(
      'attributes' => array(
        'title' => 'Execute some PHP code',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_execute-php-code:devel/php',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: devel_field-info:devel/field/info.
  $menu_links['devel_field-info:devel/field/info'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/field/info',
    'router_path' => 'devel/field/info',
    'link_title' => 'Field info',
    'options' => array(
      'attributes' => array(
        'title' => 'View fields information across the whole site.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_field-info:devel/field/info',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: devel_function-reference:devel/reference.
  $menu_links['devel_function-reference:devel/reference'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/reference',
    'router_path' => 'devel/reference',
    'link_title' => 'Function reference',
    'options' => array(
      'attributes' => array(
        'title' => 'View a list of currently defined user functions with documentation links.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_function-reference:devel/reference',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: devel_hookelements:devel/elements.
  $menu_links['devel_hookelements:devel/elements'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/elements',
    'router_path' => 'devel/elements',
    'link_title' => 'Hook_elements()',
    'options' => array(
      'attributes' => array(
        'title' => 'View the active form/render elements for this site.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_hookelements:devel/elements',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: devel_menu-item:devel/menu/item.
  $menu_links['devel_menu-item:devel/menu/item'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/menu/item',
    'router_path' => 'devel/menu/item',
    'link_title' => 'Menu item',
    'options' => array(
      'attributes' => array(
        'title' => 'Details about a given menu item.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_menu-item:devel/menu/item',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: devel_phpinfo:devel/phpinfo.
  $menu_links['devel_phpinfo:devel/phpinfo'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/phpinfo',
    'router_path' => 'devel/phpinfo',
    'link_title' => 'PHPinfo()',
    'options' => array(
      'attributes' => array(
        'title' => 'View your server\'s PHP configuration',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_phpinfo:devel/phpinfo',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: devel_rebuild-menus:devel/menu/reset.
  $menu_links['devel_rebuild-menus:devel/menu/reset'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/menu/reset',
    'router_path' => 'devel/menu/reset',
    'link_title' => 'Rebuild menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Rebuild menu based on hook_menu() and revert any custom changes. All menu items return to their default settings.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_rebuild-menus:devel/menu/reset',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: devel_reinstall-modules:devel/reinstall.
  $menu_links['devel_reinstall-modules:devel/reinstall'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/reinstall',
    'router_path' => 'devel/reinstall',
    'link_title' => 'Reinstall modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Run hook_uninstall() and then hook_install() for a given module.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_reinstall-modules:devel/reinstall',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: devel_run-cron:devel/run-cron.
  $menu_links['devel_run-cron:devel/run-cron'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/run-cron',
    'router_path' => 'devel/run-cron',
    'link_title' => 'Run cron',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'devel_run-cron:devel/run-cron',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: devel_session-viewer:devel/session.
  $menu_links['devel_session-viewer:devel/session'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/session',
    'router_path' => 'devel/session',
    'link_title' => 'Session viewer',
    'options' => array(
      'attributes' => array(
        'title' => 'List the contents of $_SESSION.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_session-viewer:devel/session',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: devel_theme-registry:devel/theme/registry.
  $menu_links['devel_theme-registry:devel/theme/registry'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/theme/registry',
    'router_path' => 'devel/theme/registry',
    'link_title' => 'Theme registry',
    'options' => array(
      'attributes' => array(
        'title' => 'View a list of available theme functions across the whole site.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_theme-registry:devel/theme/registry',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: devel_variable-editor:devel/variable.
  $menu_links['devel_variable-editor:devel/variable'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/variable',
    'router_path' => 'devel/variable',
    'link_title' => 'Variable editor',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit and delete site variables.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_variable-editor:devel/variable',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: main-menu_-:node/add/ad.
  $menu_links['main-menu_-:node/add/ad'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/ad',
    'router_path' => 'node/add/ad',
    'link_title' => 'ПОДАТЬ ОБЪЯВЛЕНИЕ',
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
      'identifier' => 'main-menu_-:node/add/ad',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: management_--:admin/config/people/accounts/display/full.
  $menu_links['management_--:admin/config/people/accounts/display/full'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/accounts/display/full',
    'router_path' => 'admin/config/people/accounts/display/full',
    'link_title' => 'Учётная запись пользователя',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'management_--:admin/config/people/accounts/display/full',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_-:admin/config/people/accounts/display',
  );
  // Exported menu link: management_-:admin/structure/types/manage/%/comment/display/full.
  $menu_links['management_-:admin/structure/types/manage/%/comment/display/full'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types/manage/%/comment/display/full',
    'router_path' => 'admin/structure/types/manage/%/comment/display/full',
    'link_title' => 'Комментарий полностью',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'management_-:admin/structure/types/manage/%/comment/display/full',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_comment-display:admin/structure/types/manage/%/comment/display',
  );
  // Exported menu link: management_account-settings:admin/config/people/accounts.
  $menu_links['management_account-settings:admin/config/people/accounts'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/accounts',
    'router_path' => 'admin/config/people/accounts',
    'link_title' => 'Account settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure default behavior of users, including registration requirements, e-mails, fields, and user pictures.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_account-settings:admin/config/people/accounts',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/people',
  );
  // Exported menu link: management_actions:admin/config/system/actions.
  $menu_links['management_actions:admin/config/system/actions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/actions',
    'router_path' => 'admin/config/system/actions',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage the actions defined for your site.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_actions:admin/config/system/actions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/system',
  );
  // Exported menu link: management_addtoany:admin/config/system/addtoany.
  $menu_links['management_addtoany:admin/config/system/addtoany'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/addtoany',
    'router_path' => 'admin/config/system/addtoany',
    'link_title' => 'AddToAny',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for your <a href="https://www.addtoany.com/" target="blank">AddToAny</a> Share/Save buttons.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_addtoany:admin/config/system/addtoany',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/system',
  );
  // Exported menu link: management_administration:admin.
  $menu_links['management_administration:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'management_administration:admin',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: management_administration:admin/config/administration.
  $menu_links['management_administration:admin/config/administration'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration',
    'router_path' => 'admin/config/administration',
    'link_title' => 'Administration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administration tools.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_administration:admin/config/administration',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config',
  );
  // Exported menu link: management_advanced-forum:admin/config/content/advanced-forum.
  $menu_links['management_advanced-forum:admin/config/content/advanced-forum'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/advanced-forum',
    'router_path' => 'admin/config/content/advanced-forum',
    'link_title' => 'Advanced Forum',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Advanced Forum with these settings.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_advanced-forum:admin/config/content/advanced-forum',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/content',
  );
  // Exported menu link: management_appearance:admin/appearance.
  $menu_links['management_appearance:admin/appearance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => 'Select and configure your themes.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_appearance:admin/appearance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin',
  );
  // Exported menu link: management_available-updates:admin/reports/updates.
  $menu_links['management_available-updates:admin/reports/updates'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/updates',
    'router_path' => 'admin/reports/updates',
    'link_title' => 'Available updates',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about available updates for your installed modules and themes.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_available-updates:admin/reports/updates',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_blocks:admin/structure/block.
  $menu_links['management_blocks:admin/structure/block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/block',
    'router_path' => 'admin/structure/block',
    'link_title' => 'Blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure what block content appears in your site\'s sidebars and other regions.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_blocks:admin/structure/block',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure',
  );
  // Exported menu link: management_bueditor:admin/config/content/bueditor.
  $menu_links['management_bueditor:admin/config/content/bueditor'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/bueditor',
    'router_path' => 'admin/config/content/bueditor',
    'link_title' => 'BUEditor',
    'options' => array(
      'attributes' => array(
        'title' => 'Customize your text editor.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_bueditor:admin/config/content/bueditor',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/content',
  );
  // Exported menu link: management_captcha:admin/config/people/captcha.
  $menu_links['management_captcha:admin/config/people/captcha'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/captcha',
    'router_path' => 'admin/config/people/captcha',
    'link_title' => 'CAPTCHA',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer how and where CAPTCHAs are used.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_captcha:admin/config/people/captcha',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/people',
  );
  // Exported menu link: management_ckeditor:admin/config/content/ckeditor.
  $menu_links['management_ckeditor:admin/config/content/ckeditor'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/ckeditor',
    'router_path' => 'admin/config/content/ckeditor',
    'link_title' => 'CKEditor',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the rich text editor.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_ckeditor:admin/config/content/ckeditor',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/content',
  );
  // Exported menu link: management_clean-urls:admin/config/search/clean-urls.
  $menu_links['management_clean-urls:admin/config/search/clean-urls'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/clean-urls',
    'router_path' => 'admin/config/search/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable clean URLs for your site.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_clean-urls:admin/config/search/clean-urls',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/search',
  );
  // Exported menu link: management_comment-mover:admin/config/system/comment_mover.
  $menu_links['management_comment-mover:admin/config/system/comment_mover'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/comment_mover',
    'router_path' => 'admin/config/system/comment_mover',
    'link_title' => 'Comment mover',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'management_comment-mover:admin/config/system/comment_mover',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/system',
  );
  // Exported menu link: management_comments:admin/content/comment.
  $menu_links['management_comments:admin/content/comment'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Comments',
    'options' => array(
      'attributes' => array(
        'title' => 'List and edit site comments and the comment approval queue.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_comments:admin/content/comment',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/content',
  );
  // Exported menu link: management_configuration:admin/config.
  $menu_links['management_configuration:admin/config'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_configuration:admin/config',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin',
  );
  // Exported menu link: management_contact-form:admin/structure/contact.
  $menu_links['management_contact-form:admin/structure/contact'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/contact',
    'router_path' => 'admin/structure/contact',
    'link_title' => 'Contact form',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a system contact form and set up categories for the form to use.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_contact-form:admin/structure/contact',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure',
  );
  // Exported menu link: management_content-authoring:admin/config/content.
  $menu_links['management_content-authoring:admin/config/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content',
    'router_path' => 'admin/config/content',
    'link_title' => 'Content authoring',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings related to formatting and authoring content.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_content-authoring:admin/config/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config',
  );
  // Exported menu link: management_content-types:admin/structure/types.
  $menu_links['management_content-types:admin/structure/types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types',
    'router_path' => 'admin/structure/types',
    'link_title' => 'Content types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage content types, including default status, front page promotion, comment settings, etc.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_content-types:admin/structure/types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure',
  );
  // Exported menu link: management_content:admin/content.
  $menu_links['management_content:admin/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer content and comments.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_content:admin/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin',
  );
  // Exported menu link: management_create-ad:admin/structure/menu/manage/menu-ref-create-ad.
  $menu_links['management_create-ad:admin/structure/menu/manage/menu-ref-create-ad'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-ref-create-ad',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Create Ad',
    'options' => array(
      'identifier' => 'management_create-ad:admin/structure/menu/manage/menu-ref-create-ad',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure/menu',
  );
  // Exported menu link: management_cron:admin/config/system/cron.
  $menu_links['management_cron:admin/config/system/cron'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/cron',
    'router_path' => 'admin/config/system/cron',
    'link_title' => 'Cron',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage automatic site maintenance tasks.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_cron:admin/config/system/cron',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/system',
  );
  // Exported menu link: management_custom-breadcrumbs-settings:admin/config/user-interface/custom-breadcrumbs.
  $menu_links['management_custom-breadcrumbs-settings:admin/config/user-interface/custom-breadcrumbs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/custom-breadcrumbs',
    'router_path' => 'admin/config/user-interface/custom-breadcrumbs',
    'link_title' => 'Custom breadcrumbs settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage sitewide configuration settings to customize the breadcrumb trail.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_custom-breadcrumbs-settings:admin/config/user-interface/custom-breadcrumbs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_-:admin/config/user-interface',
  );
  // Exported menu link: management_dashboard:admin/dashboard.
  $menu_links['management_dashboard:admin/dashboard'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/dashboard',
    'router_path' => 'admin/dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => 'View and customize your dashboard.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_dashboard:admin/dashboard',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin',
  );
  // Exported menu link: management_date-and-time:admin/config/regional/date-time.
  $menu_links['management_date-and-time:admin/config/regional/date-time'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/date-time',
    'router_path' => 'admin/config/regional/date-time',
    'link_title' => 'Date and time',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure display formats for date and time.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_date-and-time:admin/config/regional/date-time',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/regional',
  );
  // Exported menu link: management_date-api:admin/config/date.
  $menu_links['management_date-api:admin/config/date'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date',
    'router_path' => 'admin/config/date',
    'link_title' => 'Date API',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for modules the use the Date API.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_date-api:admin/config/date',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config',
  );
  // Exported menu link: management_devel-settings:admin/config/development/devel.
  $menu_links['management_devel-settings:admin/config/development/devel'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/devel',
    'router_path' => 'admin/config/development/devel',
    'link_title' => 'Devel settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Helper functions, pages, and blocks to assist Drupal developers. The devel blocks can be managed via the <a href="/admin/structure/block">block administration</a> page.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_devel-settings:admin/config/development/devel',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/development',
  );
  // Exported menu link: management_development:admin/config/development.
  $menu_links['management_development:admin/config/development'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development',
    'router_path' => 'admin/config/development',
    'link_title' => 'Development',
    'options' => array(
      'attributes' => array(
        'title' => 'Development tools.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_development:admin/config/development',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config',
  );
  // Exported menu link: management_diff:admin/config/content/diff.
  $menu_links['management_diff:admin/config/content/diff'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/diff',
    'router_path' => 'admin/config/content/diff',
    'link_title' => 'Diff',
    'options' => array(
      'attributes' => array(
        'title' => 'Diff settings.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_diff:admin/config/content/diff',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/content',
  );
  // Exported menu link: management_display-suite:admin/structure/ds.
  $menu_links['management_display-suite:admin/structure/ds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ds',
    'router_path' => 'admin/structure/ds',
    'link_title' => 'Display Suite',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage layouts for entities and configure fields, view modes etc.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_display-suite:admin/structure/ds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure',
  );
  // Exported menu link: management_email-contact-form-settings:admin/config/content/email.
  $menu_links['management_email-contact-form-settings:admin/config/content/email'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/email',
    'router_path' => 'admin/config/content/email',
    'link_title' => 'Email Contact Form Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer flood control settings for email contact forms',
      ),
      'alter' => TRUE,
      'identifier' => 'management_email-contact-form-settings:admin/config/content/email',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/content',
  );
  // Exported menu link: management_facebook-oauth-settings:admin/config/people/fboauth.
  $menu_links['management_facebook-oauth-settings:admin/config/people/fboauth'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/fboauth',
    'router_path' => 'admin/config/people/fboauth',
    'link_title' => 'Facebook OAuth settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure site for Facebook Connect and map Facebook information to user profiles.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_facebook-oauth-settings:admin/config/people/fboauth',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/people',
  );
  // Exported menu link: management_features:admin/structure/features.
  $menu_links['management_features:admin/structure/features'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage features.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_features:admin/structure/features',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure',
  );
  // Exported menu link: management_feeds-log:admin/reports/feeds.
  $menu_links['management_feeds-log:admin/reports/feeds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/feeds',
    'router_path' => 'admin/reports/feeds',
    'link_title' => 'Feeds log',
    'options' => array(
      'attributes' => array(
        'title' => 'Review log messages of imports and subscriptions to feeds.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_feeds-log:admin/reports/feeds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_field-list:admin/reports/fields.
  $menu_links['management_field-list:admin/reports/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/fields',
    'router_path' => 'admin/reports/fields',
    'link_title' => 'Field list',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of fields on all entity types.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_field-list:admin/reports/fields',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_field-validation:admin/structure/field_validation.
  $menu_links['management_field-validation:admin/structure/field_validation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/field_validation',
    'router_path' => 'admin/structure/field_validation',
    'link_title' => 'Field Validation',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer Field Validation rules.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_field-validation:admin/structure/field_validation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure',
  );
  // Exported menu link: management_file-system:admin/config/media/file-system.
  $menu_links['management_file-system:admin/config/media/file-system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-system',
    'router_path' => 'admin/config/media/file-system',
    'link_title' => 'File system',
    'options' => array(
      'attributes' => array(
        'title' => 'Tell Drupal where to store uploaded files and how they are accessed.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_file-system:admin/config/media/file-system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/media',
  );
  // Exported menu link: management_forums:admin/structure/forum.
  $menu_links['management_forums:admin/structure/forum'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/forum',
    'router_path' => 'admin/structure/forum',
    'link_title' => 'Forums',
    'options' => array(
      'attributes' => array(
        'title' => 'Control forum hierarchy settings.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_forums:admin/structure/forum',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure',
  );
  // Exported menu link: management_global-redirect:admin/config/system/globalredirect.
  $menu_links['management_global-redirect:admin/config/system/globalredirect'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/globalredirect',
    'router_path' => 'admin/config/system/globalredirect',
    'link_title' => 'Global Redirect',
    'options' => array(
      'attributes' => array(
        'title' => 'Chose which features you would like enabled for Global Redirect',
      ),
      'alter' => TRUE,
      'identifier' => 'management_global-redirect:admin/config/system/globalredirect',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/system',
  );
  // Exported menu link: management_gmap:admin/config/services/gmap.
  $menu_links['management_gmap:admin/config/services/gmap'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/gmap',
    'router_path' => 'admin/config/services/gmap',
    'link_title' => 'GMap',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure GMap settings',
      ),
      'alter' => TRUE,
      'identifier' => 'management_gmap:admin/config/services/gmap',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_-:admin/config/services',
  );
  // Exported menu link: management_google-analytics:admin/config/system/googleanalytics.
  $menu_links['management_google-analytics:admin/config/system/googleanalytics'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/googleanalytics',
    'router_path' => 'admin/config/system/googleanalytics',
    'link_title' => 'Google Analytics',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure tracking behavior to get insights into your website traffic and marketing effectiveness.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_google-analytics:admin/config/system/googleanalytics',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/system',
  );
  // Exported menu link: management_help:admin/help.
  $menu_links['management_help:admin/help'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/help',
    'router_path' => 'admin/help',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => 'Reference for usage, configuration, and modules.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_help:admin/help',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin',
  );
  // Exported menu link: management_honeypot-configuration:admin/config/content/honeypot.
  $menu_links['management_honeypot-configuration:admin/config/content/honeypot'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/honeypot',
    'router_path' => 'admin/config/content/honeypot',
    'link_title' => 'Honeypot configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Honeypot spam prevention and the forms on which Honeypot will be used.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_honeypot-configuration:admin/config/content/honeypot',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/content',
  );
  // Exported menu link: management_image-styles:admin/config/media/image-styles.
  $menu_links['management_image-styles:admin/config/media/image-styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-styles',
    'router_path' => 'admin/config/media/image-styles',
    'link_title' => 'Image styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure styles that can be used for resizing or adjusting images on display.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_image-styles:admin/config/media/image-styles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/media',
  );
  // Exported menu link: management_image-toolkit:admin/config/media/image-toolkit.
  $menu_links['management_image-toolkit:admin/config/media/image-toolkit'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-toolkit',
    'router_path' => 'admin/config/media/image-toolkit',
    'link_title' => 'Image toolkit',
    'options' => array(
      'attributes' => array(
        'title' => 'Choose which image toolkit to use if you have installed optional toolkits.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_image-toolkit:admin/config/media/image-toolkit',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/media',
  );
  // Exported menu link: management_imagecache-token:admin/config/media/imagecache-token.
  $menu_links['management_imagecache-token:admin/config/media/imagecache-token'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/imagecache-token',
    'router_path' => 'admin/config/media/imagecache-token',
    'link_title' => 'Imagecache Token',
    'options' => array(
      'attributes' => array(
        'title' => 'Control which file and media fields contain images.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_imagecache-token:admin/config/media/imagecache-token',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/media',
  );
  // Exported menu link: management_imce:admin/config/media/imce.
  $menu_links['management_imce:admin/config/media/imce'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/imce',
    'router_path' => 'admin/config/media/imce',
    'link_title' => 'IMCE',
    'options' => array(
      'attributes' => array(
        'title' => 'Control how your image/file browser works.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_imce:admin/config/media/imce',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/media',
  );
  // Exported menu link: management_ip-address-blocking:admin/config/people/ip-blocking.
  $menu_links['management_ip-address-blocking:admin/config/people/ip-blocking'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/ip-blocking',
    'router_path' => 'admin/config/people/ip-blocking',
    'link_title' => 'IP address blocking',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage blocked IP addresses.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_ip-address-blocking:admin/config/people/ip-blocking',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/people',
  );
  // Exported menu link: management_jquery-update:admin/config/development/jquery_update.
  $menu_links['management_jquery-update:admin/config/development/jquery_update'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/jquery_update',
    'router_path' => 'admin/config/development/jquery_update',
    'link_title' => 'jQuery Update',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings related to the jQuery upgrade, the library path and compression.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_jquery-update:admin/config/development/jquery_update',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/development',
  );
  // Exported menu link: management_languages:admin/config/regional/language.
  $menu_links['management_languages:admin/config/regional/language'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/language',
    'router_path' => 'admin/config/regional/language',
    'link_title' => 'Languages',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure languages for content and the user interface.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_languages:admin/config/regional/language',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/regional',
  );
  // Exported menu link: management_logging-and-errors:admin/config/development/logging.
  $menu_links['management_logging-and-errors:admin/config/development/logging'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/logging',
    'router_path' => 'admin/config/development/logging',
    'link_title' => 'Logging and errors',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for logging and alerts modules. Various modules can route Drupal\'s system events to different destinations, such as syslog, database, email, etc.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_logging-and-errors:admin/config/development/logging',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/development',
  );
  // Exported menu link: management_logintoboggan:admin/config/system/logintoboggan.
  $menu_links['management_logintoboggan:admin/config/system/logintoboggan'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/logintoboggan',
    'router_path' => 'admin/config/system/logintoboggan',
    'link_title' => 'LoginToboggan',
    'options' => array(
      'attributes' => array(
        'title' => 'Set up custom login options like instant login, login redirects, pre-authorized validation roles, etc.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_logintoboggan:admin/config/system/logintoboggan',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/system',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu.
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure/menu',
  );
  // Exported menu link: management_maintenance-mode:admin/config/development/maintenance.
  $menu_links['management_maintenance-mode:admin/config/development/maintenance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/maintenance',
    'router_path' => 'admin/config/development/maintenance',
    'link_title' => 'Maintenance mode',
    'options' => array(
      'attributes' => array(
        'title' => 'Take the site offline for maintenance or bring it back online.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_maintenance-mode:admin/config/development/maintenance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/development',
  );
  // Exported menu link: management_management:admin/structure/menu/manage/management.
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure/menu',
  );
  // Exported menu link: management_media:admin/config/media.
  $menu_links['management_media:admin/config/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media',
    'router_path' => 'admin/config/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Media tools.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_media:admin/config/media',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config',
  );
  // Exported menu link: management_menus:admin/structure/menu.
  $menu_links['management_menus:admin/structure/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new menus to your site, edit existing menus, and rename and reorganize menu links.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_menus:admin/structure/menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure',
  );
  // Exported menu link: management_messaging:admin/config/messaging.
  $menu_links['management_messaging:admin/config/messaging'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/messaging',
    'router_path' => 'admin/config/messaging',
    'link_title' => 'Messaging',
    'options' => array(
      'attributes' => array(
        'title' => 'Messaging systems.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_messaging:admin/config/messaging',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config',
  );
  // Exported menu link: management_metatag:admin/config/search/metatags.
  $menu_links['management_metatag:admin/config/search/metatags'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/metatags',
    'router_path' => 'admin/config/search/metatags',
    'link_title' => 'Metatag',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Metatag defaults.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_metatag:admin/config/search/metatags',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/search',
  );
  // Exported menu link: management_modules:admin/modules.
  $menu_links['management_modules:admin/modules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/modules',
    'router_path' => 'admin/modules',
    'link_title' => 'Modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Extend site functionality.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_modules:admin/modules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin',
  );
  // Exported menu link: management_mollom-content-moderation:admin/config/content/mollom.
  $menu_links['management_mollom-content-moderation:admin/config/content/mollom'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/mollom',
    'router_path' => 'admin/config/content/mollom',
    'link_title' => 'Mollom content moderation',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how the Mollom service moderates user-submitted content such as spam and profanity.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_mollom-content-moderation:admin/config/content/mollom',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/content',
  );
  // Exported menu link: management_mollom-statistics:admin/reports/mollom.
  $menu_links['management_mollom-statistics:admin/reports/mollom'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/mollom',
    'router_path' => 'admin/reports/mollom',
    'link_title' => 'Mollom statistics',
    'options' => array(
      'attributes' => array(
        'title' => 'Reports and usage statistics for the Mollom module.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_mollom-statistics:admin/reports/mollom',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_multilingual-settings:admin/config/regional/i18n.
  $menu_links['management_multilingual-settings:admin/config/regional/i18n'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/i18n',
    'router_path' => 'admin/config/regional/i18n',
    'link_title' => 'Multilingual settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure extended options for multilingual content and translations.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_multilingual-settings:admin/config/regional/i18n',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/regional',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation.
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure/menu',
  );
  // Exported menu link: management_pages:admin/structure/pages.
  $menu_links['management_pages:admin/structure/pages'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/pages',
    'router_path' => 'admin/structure/pages',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit and remove overridden system pages and user defined pages from the system.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_pages:admin/structure/pages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure',
  );
  // Exported menu link: management_panels:admin/structure/panels.
  $menu_links['management_panels:admin/structure/panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/panels',
    'router_path' => 'admin/structure/panels',
    'link_title' => 'Panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a bird\'s eye view of items related to Panels.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_panels:admin/structure/panels',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure',
  );
  // Exported menu link: management_people:admin/config/people.
  $menu_links['management_people:admin/config/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people',
    'router_path' => 'admin/config/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure user accounts.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_people:admin/config/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config',
  );
  // Exported menu link: management_people:admin/people.
  $menu_links['management_people:admin/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage user accounts, roles, and permissions.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_people:admin/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin',
  );
  // Exported menu link: management_performance:admin/config/development/performance.
  $menu_links['management_performance:admin/config/development/performance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/performance',
    'router_path' => 'admin/config/development/performance',
    'link_title' => 'Performance',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable page caching for anonymous users and set CSS and JS bandwidth optimization options.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_performance:admin/config/development/performance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/development',
  );
  // Exported menu link: management_private-message-settings:admin/config/messaging/privatemsg.
  $menu_links['management_private-message-settings:admin/config/messaging/privatemsg'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/messaging/privatemsg',
    'router_path' => 'admin/config/messaging/privatemsg',
    'link_title' => 'Private message settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure private messaging settings.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_private-message-settings:admin/config/messaging/privatemsg',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_-:admin/config/messaging',
  );
  // Exported menu link: management_quote:admin/config/content/quote.
  $menu_links['management_quote:admin/config/content/quote'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/quote',
    'router_path' => 'admin/config/content/quote',
    'link_title' => 'Quote',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the behaviour of the Quote module.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_quote:admin/config/content/quote',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/content',
  );
  // Exported menu link: management_recent-hits:admin/reports/hits.
  $menu_links['management_recent-hits:admin/reports/hits'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/hits',
    'router_path' => 'admin/reports/hits',
    'link_title' => 'Recent hits',
    'options' => array(
      'attributes' => array(
        'title' => 'View pages that have recently been visited.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_recent-hits:admin/reports/hits',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_recent-log-messages:admin/reports/dblog.
  $menu_links['management_recent-log-messages:admin/reports/dblog'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/dblog',
    'router_path' => 'admin/reports/dblog',
    'link_title' => 'Recent log messages',
    'options' => array(
      'attributes' => array(
        'title' => 'View events that have recently been logged.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_recent-log-messages:admin/reports/dblog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_regional-and-language:admin/config/regional.
  $menu_links['management_regional-and-language:admin/config/regional'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional',
    'router_path' => 'admin/config/regional',
    'link_title' => 'Regional and language',
    'options' => array(
      'attributes' => array(
        'title' => 'Regional settings, localization and translation.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_regional-and-language:admin/config/regional',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config',
  );
  // Exported menu link: management_regional-settings:admin/config/regional/settings.
  $menu_links['management_regional-settings:admin/config/regional/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/settings',
    'router_path' => 'admin/config/regional/settings',
    'link_title' => 'Regional settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the site\'s default time zone and country.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_regional-settings:admin/config/regional/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/regional',
  );
  // Exported menu link: management_reports:admin/reports.
  $menu_links['management_reports:admin/reports'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'View reports, updates, and errors.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_reports:admin/reports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin',
  );
  // Exported menu link: management_rss-publishing:admin/config/services/rss-publishing.
  $menu_links['management_rss-publishing:admin/config/services/rss-publishing'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/rss-publishing',
    'router_path' => 'admin/config/services/rss-publishing',
    'link_title' => 'RSS publishing',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the site description, the number of items per feed and whether feeds should be titles/teasers/full-text.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_rss-publishing:admin/config/services/rss-publishing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_-:admin/config/services',
  );
  // Exported menu link: management_rules:admin/config/workflow/rules.
  $menu_links['management_rules:admin/config/workflow/rules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow/rules',
    'router_path' => 'admin/config/workflow/rules',
    'link_title' => 'Rules',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage reaction rules and rule components.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_rules:admin/config/workflow/rules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_-:admin/config/workflow',
  );
  // Exported menu link: management_scheduler:admin/config/content/scheduler.
  $menu_links['management_scheduler:admin/config/content/scheduler'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/scheduler',
    'router_path' => 'admin/config/content/scheduler',
    'link_title' => 'Scheduler',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings for scheduled publishing and unpublishing, run the lightweight cron and check your servers clock time.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_scheduler:admin/config/content/scheduler',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/content',
  );
  // Exported menu link: management_search-and-metadata:admin/config/search.
  $menu_links['management_search-and-metadata:admin/config/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search',
    'router_path' => 'admin/config/search',
    'link_title' => 'Search and metadata',
    'options' => array(
      'attributes' => array(
        'title' => 'Local site search, metadata and SEO.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_search-and-metadata:admin/config/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config',
  );
  // Exported menu link: management_search-api:admin/config/search/search_api.
  $menu_links['management_search-api:admin/config/search/search_api'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/search_api',
    'router_path' => 'admin/config/search/search_api',
    'link_title' => 'Search API',
    'options' => array(
      'attributes' => array(
        'title' => 'Create and configure search engines.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_search-api:admin/config/search/search_api',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/search',
  );
  // Exported menu link: management_search-settings:admin/config/search/settings.
  $menu_links['management_search-settings:admin/config/search/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/settings',
    'router_path' => 'admin/config/search/settings',
    'link_title' => 'Search settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure relevance settings for search and other indexing options.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_search-settings:admin/config/search/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/search',
  );
  // Exported menu link: management_security-review:admin/reports/security-review.
  $menu_links['management_security-review:admin/reports/security-review'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/security-review',
    'router_path' => 'admin/reports/security-review',
    'link_title' => 'Security review',
    'options' => array(
      'attributes' => array(
        'title' => 'Perform a review of the security of your site.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_security-review:admin/reports/security-review',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_seo-checker:admin/config/content/seo_checker.
  $menu_links['management_seo-checker:admin/config/content/seo_checker'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/seo_checker',
    'router_path' => 'admin/config/content/seo_checker',
    'link_title' => 'SEO Checker',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage SEO Checker',
      ),
      'alter' => TRUE,
      'identifier' => 'management_seo-checker:admin/config/content/seo_checker',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/content',
  );
  // Exported menu link: management_shortcuts:admin/config/user-interface/shortcut.
  $menu_links['management_shortcuts:admin/config/user-interface/shortcut'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/shortcut',
    'router_path' => 'admin/config/user-interface/shortcut',
    'link_title' => 'Shortcuts',
    'options' => array(
      'attributes' => array(
        'title' => 'Add and modify shortcut sets.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_shortcuts:admin/config/user-interface/shortcut',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_-:admin/config/user-interface',
  );
  // Exported menu link: management_site-information:admin/config/system/site-information.
  $menu_links['management_site-information:admin/config/system/site-information'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site information',
    'options' => array(
      'attributes' => array(
        'title' => 'Change site name, e-mail address, slogan, default front page, and number of posts per page, error pages.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_site-information:admin/config/system/site-information',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/system',
  );
  // Exported menu link: management_statistics:admin/config/system/statistics.
  $menu_links['management_statistics:admin/config/system/statistics'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/statistics',
    'router_path' => 'admin/config/system/statistics',
    'link_title' => 'Statistics',
    'options' => array(
      'attributes' => array(
        'title' => 'Control details about what and how your site logs access statistics.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_statistics:admin/config/system/statistics',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/system',
  );
  // Exported menu link: management_status-report:admin/reports/status.
  $menu_links['management_status-report:admin/reports/status'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/status',
    'router_path' => 'admin/reports/status',
    'link_title' => 'Status report',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about your site\'s operation and any detected problems.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_status-report:admin/reports/status',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -60,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_strongarm:admin/config/development/strongarm.
  $menu_links['management_strongarm:admin/config/development/strongarm'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/strongarm',
    'router_path' => 'admin/config/development/strongarm',
    'link_title' => 'Strongarm',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Drupal variable settings that have been strongarmed.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_strongarm:admin/config/development/strongarm',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/development',
  );
  // Exported menu link: management_structure:admin/structure.
  $menu_links['management_structure:admin/structure'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer blocks, content types, menus, etc.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_structure:admin/structure',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin',
  );
  // Exported menu link: management_superfish:admin/config/user-interface/superfish.
  $menu_links['management_superfish:admin/config/user-interface/superfish'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/superfish',
    'router_path' => 'admin/config/user-interface/superfish',
    'link_title' => 'Superfish',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Superfish Menus',
      ),
      'alter' => TRUE,
      'identifier' => 'management_superfish:admin/config/user-interface/superfish',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_-:admin/config/user-interface',
  );
  // Exported menu link: management_system:admin/config/system.
  $menu_links['management_system:admin/config/system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system',
    'router_path' => 'admin/config/system',
    'link_title' => 'System',
    'options' => array(
      'attributes' => array(
        'title' => 'General system related configuration.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_system:admin/config/system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config',
  );
  // Exported menu link: management_taxonomy:admin/structure/taxonomy.
  $menu_links['management_taxonomy:admin/structure/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage tagging, categorization, and classification of your content.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_taxonomy:admin/structure/taxonomy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure',
  );
  // Exported menu link: management_text-formats:admin/config/content/formats.
  $menu_links['management_text-formats:admin/config/content/formats'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formats',
    'router_path' => 'admin/config/content/formats',
    'link_title' => 'Text formats',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how content input by users is filtered, including allowed HTML tags. Also allows enabling of module-provided filters.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_text-formats:admin/config/content/formats',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/content',
  );
  // Exported menu link: management_top-access-denied-errors:admin/reports/access-denied.
  $menu_links['management_top-access-denied-errors:admin/reports/access-denied'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/access-denied',
    'router_path' => 'admin/reports/access-denied',
    'link_title' => 'Top \'access denied\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'access denied\' errors (403s).',
      ),
      'alter' => TRUE,
      'identifier' => 'management_top-access-denied-errors:admin/reports/access-denied',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_top-page-not-found-errors:admin/reports/page-not-found.
  $menu_links['management_top-page-not-found-errors:admin/reports/page-not-found'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/page-not-found',
    'router_path' => 'admin/reports/page-not-found',
    'link_title' => 'Top \'page not found\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'page not found\' errors (404s).',
      ),
      'alter' => TRUE,
      'identifier' => 'management_top-page-not-found-errors:admin/reports/page-not-found',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_top-pages:admin/reports/pages.
  $menu_links['management_top-pages:admin/reports/pages'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/pages',
    'router_path' => 'admin/reports/pages',
    'link_title' => 'Top pages',
    'options' => array(
      'attributes' => array(
        'title' => 'View pages that have been hit frequently.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_top-pages:admin/reports/pages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_top-referrers:admin/reports/referrers.
  $menu_links['management_top-referrers:admin/reports/referrers'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/referrers',
    'router_path' => 'admin/reports/referrers',
    'link_title' => 'Top referrers',
    'options' => array(
      'attributes' => array(
        'title' => 'View top referrers.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_top-referrers:admin/reports/referrers',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_top-search-phrases:admin/reports/search.
  $menu_links['management_top-search-phrases:admin/reports/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/search',
    'router_path' => 'admin/reports/search',
    'link_title' => 'Top search phrases',
    'options' => array(
      'attributes' => array(
        'title' => 'View most popular search phrases.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_top-search-phrases:admin/reports/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_top-visitors:admin/reports/visitors.
  $menu_links['management_top-visitors:admin/reports/visitors'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/visitors',
    'router_path' => 'admin/reports/visitors',
    'link_title' => 'Top visitors',
    'options' => array(
      'attributes' => array(
        'title' => 'View visitors that hit many pages.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_top-visitors:admin/reports/visitors',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_translate-interface:admin/config/regional/translate.
  $menu_links['management_translate-interface:admin/config/regional/translate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/translate',
    'router_path' => 'admin/config/regional/translate',
    'link_title' => 'Translate interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Translate the built in interface and optionally other text.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_translate-interface:admin/config/regional/translate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/regional',
  );
  // Exported menu link: management_trigger-scheduler:admin/config/system/job_scheduler.
  $menu_links['management_trigger-scheduler:admin/config/system/job_scheduler'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/job_scheduler',
    'router_path' => 'admin/config/system/job_scheduler',
    'link_title' => 'Trigger scheduler',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure timely triggers',
      ),
      'alter' => TRUE,
      'identifier' => 'management_trigger-scheduler:admin/config/system/job_scheduler',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config/system',
  );
  // Exported menu link: management_trigger-scheduler:admin/config/system/job_scheduler/add.
  $menu_links['management_trigger-scheduler:admin/config/system/job_scheduler/add'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/job_scheduler/add',
    'router_path' => 'admin/config/system/job_scheduler/add',
    'link_title' => 'Trigger scheduler',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure timely triggers',
      ),
      'alter' => TRUE,
      'identifier' => 'management_trigger-scheduler:admin/config/system/job_scheduler/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_trigger-scheduler:admin/config/system/job_scheduler',
  );
  // Exported menu link: management_tvi-settings:admin/config/user-interface/tvi.
  $menu_links['management_tvi-settings:admin/config/user-interface/tvi'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/tvi',
    'router_path' => 'admin/config/user-interface/tvi',
    'link_title' => 'TVI settings',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'management_tvi-settings:admin/config/user-interface/tvi',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_-:admin/config/user-interface',
  );
  // Exported menu link: management_url-aliases:admin/config/search/path.
  $menu_links['management_url-aliases:admin/config/search/path'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_url-aliases:admin/config/search/path',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/search',
  );
  // Exported menu link: management_user-interface:admin/config/user-interface.
  $menu_links['management_user-interface:admin/config/user-interface'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface',
    'router_path' => 'admin/config/user-interface',
    'link_title' => 'User interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools that enhance the user interface.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_user-interface:admin/config/user-interface',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu.
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure/menu',
  );
  // Exported menu link: management_views-plugins:admin/reports/views-plugins.
  $menu_links['management_views-plugins:admin/reports/views-plugins'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/views-plugins',
    'router_path' => 'admin/reports/views-plugins',
    'link_title' => 'Views plugins',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of plugins used in all views.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_views-plugins:admin/reports/views-plugins',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/reports',
  );
  // Exported menu link: management_views:admin/structure/views.
  $menu_links['management_views:admin/structure/views'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/views',
    'router_path' => 'admin/structure/views',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage customized lists of content.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_views:admin/structure/views',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure',
  );
  // Exported menu link: management_web-services:admin/config/services.
  $menu_links['management_web-services:admin/config/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services',
    'router_path' => 'admin/config/services',
    'link_title' => 'Web services',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools related to web services.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_web-services:admin/config/services',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config',
  );
  // Exported menu link: management_workflow:admin/config/workflow.
  $menu_links['management_workflow:admin/config/workflow'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow',
    'router_path' => 'admin/config/workflow',
    'link_title' => 'Workflow',
    'options' => array(
      'attributes' => array(
        'title' => 'Content workflow, editorial workflow tools.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_workflow:admin/config/workflow',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/config',
  );
  // Exported menu link: management_xml-sitemap:admin/config/search/xmlsitemap.
  $menu_links['management_xml-sitemap:admin/config/search/xmlsitemap'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/xmlsitemap',
    'router_path' => 'admin/config/search/xmlsitemap',
    'link_title' => 'XML sitemap',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure your site\'s XML sitemaps to help search engines find and index pages on your site.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_xml-sitemap:admin/config/search/xmlsitemap',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/search',
  );
  // Exported menu link: management_yoast-seo-for-drupal:admin/config/search/yoast.
  $menu_links['management_yoast-seo-for-drupal:admin/config/search/yoast'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/yoast',
    'router_path' => 'admin/config/search/yoast',
    'link_title' => 'Yoast SEO for Drupal',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Yoast SEO for Drupal settings',
      ),
      'alter' => TRUE,
      'identifier' => 'management_yoast-seo-for-drupal:admin/config/search/yoast',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_--:admin/config/search',
  );
  // Exported menu link: menu-main-second-menu_--:taxonomy/term/154.
  $menu_links['menu-main-second-menu_--:taxonomy/term/154'] = array(
    'menu_name' => 'menu-main-second-menu',
    'link_path' => 'taxonomy/term/154',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'ВСЕ О ФРАНЦИИ',
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
      'identifier' => 'menu-main-second-menu_--:taxonomy/term/154',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-second-menu_-:taxonomy/term/153.
  $menu_links['menu-main-second-menu_-:taxonomy/term/153'] = array(
    'menu_name' => 'menu-main-second-menu',
    'link_path' => 'taxonomy/term/153',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'ГОРОДА ФРАНЦИИ',
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
      'identifier' => 'menu-main-second-menu_-:taxonomy/term/153',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-second-menu_-:taxonomy/term/28.
  $menu_links['menu-main-second-menu_-:taxonomy/term/28'] = array(
    'menu_name' => 'menu-main-second-menu',
    'link_path' => 'taxonomy/term/28',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'ФРАНЦУЗСКАЯ КУХНЯ',
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
      'identifier' => 'menu-main-second-menu_-:taxonomy/term/28',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-second-menu_-:taxonomy/term/29.
  $menu_links['menu-main-second-menu_-:taxonomy/term/29'] = array(
    'menu_name' => 'menu-main-second-menu',
    'link_path' => 'taxonomy/term/29',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'РЫНОК НЕДВИЖИМОСТИ',
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
      'identifier' => 'menu-main-second-menu_-:taxonomy/term/29',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-second-menu_:<front>.
  $menu_links['menu-main-second-menu_:<front>'] = array(
    'menu_name' => 'menu-main-second-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ЭКСКУРСИИ',
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
      'identifier' => 'menu-main-second-menu_:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-second-menu_:taxonomy/term/168.
  $menu_links['menu-main-second-menu_:taxonomy/term/168'] = array(
    'menu_name' => 'menu-main-second-menu',
    'link_path' => 'taxonomy/term/168',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'ЯХТЫ',
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
      'identifier' => 'menu-main-second-menu_:taxonomy/term/168',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-second-menu_:taxonomy/term/18.
  $menu_links['menu-main-second-menu_:taxonomy/term/18'] = array(
    'menu_name' => 'menu-main-second-menu',
    'link_path' => 'taxonomy/term/18',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'СТАТЬИ',
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
      'identifier' => 'menu-main-second-menu_:taxonomy/term/18',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-sidebar-menu_:search/ad.
  $menu_links['menu-sidebar-menu_:search/ad'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'link_path' => 'search/ad',
    'router_path' => 'search/ad',
    'link_title' => 'Бизнес',
    'options' => array(
      'attributes' => array(
        'title' => 'Бизнес',
      ),
      'query' => array(
        'category' => 162,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-sidebar-menu_:search/ad',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-sidebar-menu_--:search/ad',
  );
  // Exported menu link: navigation_--:node/add/ad-rules-material.
  $menu_links['navigation_--:node/add/ad-rules-material'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ad-rules-material',
    'router_path' => 'node/add/ad-rules-material',
    'link_title' => 'Правила подачи обьявлений',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_--:node/add/ad-rules-material',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_--rss-:node/add/ref-feed.
  $menu_links['navigation_--rss-:node/add/ref-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ref-feed',
    'router_path' => 'node/add/ref-feed',
    'link_title' => 'Новости Франции RSS лента',
    'options' => array(
      'attributes' => array(
        'title' => 'Подписаться на RSS. Создает материалы "Новости Франции RSS".',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_--rss-:node/add/ref-feed',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_--rss:node/add/ref-feed-news.
  $menu_links['navigation_--rss:node/add/ref-feed-news'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ref-feed-news',
    'router_path' => 'node/add/ref-feed-news',
    'link_title' => 'Новости Франции RSS',
    'options' => array(
      'attributes' => array(
        'title' => 'Новости Франции RSS материал. Создаеться автоматически.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_--rss:node/add/ref-feed-news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_-:node/add/forum.
  $menu_links['navigation_-:node/add/forum'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/forum',
    'router_path' => 'node/add/forum',
    'link_title' => 'Тема форума',
    'options' => array(
      'attributes' => array(
        'title' => 'Обсуждение — это документ, который будет добавлен на форум. При добавлении этого документа необходимо выбрать форум, который больше всего подходит предлагаемой к обсуждению темы.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_-:node/add/forum',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_-:node/add/france-city.
  $menu_links['navigation_-:node/add/france-city'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/france-city',
    'router_path' => 'node/add/france-city',
    'link_title' => 'Города Франции',
    'options' => array(
      'attributes' => array(
        'title' => 'Города Франции',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_-:node/add/france-city',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_-:node/add/news.
  $menu_links['navigation_-:node/add/news'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/news',
    'router_path' => 'node/add/news',
    'link_title' => 'Новости Франции',
    'options' => array(
      'attributes' => array(
        'title' => 'Новостные статьи.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_-:node/add/news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_-:node/add/obyavlenia-discription-material.
  $menu_links['navigation_-:node/add/obyavlenia-discription-material'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/obyavlenia-discription-material',
    'router_path' => 'node/add/obyavlenia-discription-material',
    'link_title' => 'Описание Обьвлений',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_-:node/add/obyavlenia-discription-material',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_-:node/add/ref-otherstory.
  $menu_links['navigation_-:node/add/ref-otherstory'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ref-otherstory',
    'router_path' => 'node/add/ref-otherstory',
    'link_title' => 'Другая статья',
    'options' => array(
      'attributes' => array(
        'title' => 'ФРАНЦУЗСКАЯ КУХНЯ, НЕДВИЖИМОСТЬ, ПОЛЕЗНО ЗНАТЬ.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_-:node/add/ref-otherstory',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_-:node/add/rinok-nedvizhimosti.
  $menu_links['navigation_-:node/add/rinok-nedvizhimosti'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/rinok-nedvizhimosti',
    'router_path' => 'node/add/rinok-nedvizhimosti',
    'link_title' => 'РЫНОК НЕДВИЖИМОСТИ',
    'options' => array(
      'attributes' => array(
        'title' => 'РЫНОК НЕДВИЖИМОСТИ',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_-:node/add/rinok-nedvizhimosti',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_:node/add/ad.
  $menu_links['navigation_:node/add/ad'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ad',
    'router_path' => 'node/add/ad',
    'link_title' => 'Объявление',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_:node/add/ad',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_:node/add/for-footer.
  $menu_links['navigation_:node/add/for-footer'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/for-footer',
    'router_path' => 'node/add/for-footer',
    'link_title' => 'Фуутер',
    'options' => array(
      'attributes' => array(
        'title' => 'Материал для футера',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_:node/add/for-footer',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_:node/add/poll.
  $menu_links['navigation_:node/add/poll'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/poll',
    'router_path' => 'node/add/poll',
    'link_title' => 'Опрос',
    'options' => array(
      'attributes' => array(
        'title' => '<em>Опрос</em> с несколькими вариантами ответа, которые посетители могут выбрать. Однажды созданный, <em>опрос</em> автоматически подсчитывает количество голосов за каждый вариант ответа.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_:node/add/poll',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_:node/add/ref-story.
  $menu_links['navigation_:node/add/ref-story'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ref-story',
    'router_path' => 'node/add/ref-story',
    'link_title' => 'Статья',
    'options' => array(
      'attributes' => array(
        'title' => 'СТАТЬИ, ВИДЕО, ВСЕ О ФРАНЦИИ, ГОРОДА ФРАНЦИИ, ФРАНЦУЗСКИЕ ГОРОДА.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_:node/add/ref-story',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_add-content:node/add.
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_basic-page:node/add/page.
  $menu_links['navigation_basic-page:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_basic-page:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_compose-tips:filter/tips.
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_contact:contact.
  $menu_links['navigation_contact:contact'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_contact:contact',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_forums:forum.
  $menu_links['navigation_forums:forum'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forums',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_forums:forum',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_import:import.
  $menu_links['navigation_import:import'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'import',
    'router_path' => 'import',
    'link_title' => 'Import',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_import:import',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_polls:poll.
  $menu_links['navigation_polls:poll'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'poll',
    'router_path' => 'poll',
    'link_title' => 'Polls',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_polls:poll',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_search:search.
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_slide:node/add/slide.
  $menu_links['navigation_slide:node/add/slide'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/slide',
    'router_path' => 'node/add/slide',
    'link_title' => 'slide',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_slide:node/add/slide',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_-:node/add',
  );
  // Exported menu link: navigation_translate-strings:locale.
  $menu_links['navigation_translate-strings:locale'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'locale',
    'router_path' => 'locale',
    'link_title' => 'Translate strings',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_translate-strings:locale',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: user-menu_messages:messages.
  $menu_links['user-menu_messages:messages'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'messages',
    'router_path' => 'messages',
    'link_title' => 'Messages',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_messages:messages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Account settings');
  t('Actions');
  t('Add content');
  t('AddToAny');
  t('Administration');
  t('Advanced Forum');
  t('Appearance');
  t('Available updates');
  t('BUEditor');
  t('Basic page');
  t('Blocks');
  t('CAPTCHA');
  t('CKEditor');
  t('Clean URLs');
  t('Clear cache');
  t('Comment mover');
  t('Comments');
  t('Compose tips');
  t('Configuration');
  t('Contact');
  t('Contact form');
  t('Content');
  t('Content authoring');
  t('Content types');
  t('Create Ad');
  t('Cron');
  t('Custom breadcrumbs settings');
  t('Dashboard');
  t('Date API');
  t('Date and time');
  t('Devel settings');
  t('Development');
  t('Diff');
  t('Display Suite');
  t('Email Contact Form Settings');
  t('Entity info');
  t('Execute PHP Code');
  t('Facebook OAuth settings');
  t('Features');
  t('Feeds log');
  t('Field Validation');
  t('Field info');
  t('Field list');
  t('File system');
  t('Forums');
  t('Function reference');
  t('GMap');
  t('Global Redirect');
  t('Google Analytics');
  t('Help');
  t('Honeypot configuration');
  t('Hook_elements()');
  t('IMCE');
  t('IP address blocking');
  t('Image styles');
  t('Image toolkit');
  t('Imagecache Token');
  t('Import');
  t('Languages');
  t('Logging and errors');
  t('LoginToboggan');
  t('Main menu');
  t('Maintenance mode');
  t('Management');
  t('Media');
  t('Menu item');
  t('Menus');
  t('Messages');
  t('Messaging');
  t('Metatag');
  t('Modules');
  t('Mollom content moderation');
  t('Mollom statistics');
  t('Multilingual settings');
  t('Navigation');
  t('PHPinfo()');
  t('Pages');
  t('Panels');
  t('People');
  t('Performance');
  t('Polls');
  t('Private message settings');
  t('Quote');
  t('RSS publishing');
  t('Rebuild menus');
  t('Recent hits');
  t('Recent log messages');
  t('Regional and language');
  t('Regional settings');
  t('Reinstall modules');
  t('Reports');
  t('Rules');
  t('Run cron');
  t('SEO Checker');
  t('Scheduler');
  t('Search');
  t('Search API');
  t('Search and metadata');
  t('Search settings');
  t('Security review');
  t('Session viewer');
  t('Shortcuts');
  t('Site information');
  t('Statistics');
  t('Status report');
  t('Strongarm');
  t('Structure');
  t('Superfish');
  t('System');
  t('TVI settings');
  t('Taxonomy');
  t('Text formats');
  t('Theme registry');
  t('Top \'access denied\' errors');
  t('Top \'page not found\' errors');
  t('Top pages');
  t('Top referrers');
  t('Top search phrases');
  t('Top visitors');
  t('Translate interface');
  t('Translate strings');
  t('Trigger scheduler');
  t('URL aliases');
  t('User interface');
  t('User menu');
  t('Variable editor');
  t('Views');
  t('Views plugins');
  t('Web services');
  t('Workflow');
  t('XML sitemap');
  t('Yoast SEO for Drupal');
  t('jQuery Update');
  t('slide');
  t('Бизнес');
  t('ВСЕ О ФРАНЦИИ');
  t('ГОРОДА ФРАНЦИИ');
  t('Города Франции');
  t('Другая статья');
  t('Комментарий полностью');
  t('Новости Франции');
  t('Новости Франции RSS');
  t('Новости Франции RSS лента');
  t('Объявление');
  t('Описание Обьвлений');
  t('Опрос');
  t('ПОДАТЬ ОБЪЯВЛЕНИЕ');
  t('Правила подачи обьявлений');
  t('РЫНОК НЕДВИЖИМОСТИ');
  t('СТАТЬИ');
  t('Статья');
  t('Тема форума');
  t('Учётная запись пользователя');
  t('ФРАНЦУЗСКАЯ КУХНЯ');
  t('Фуутер');
  t('ЭКСКУРСИИ');
  t('ЯХТЫ');

  return $menu_links;
}
