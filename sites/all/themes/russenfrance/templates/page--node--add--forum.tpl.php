  
<body class="fon-<?php print str_replace ("/" , "" ,  $_GET['q']) ?>">
<div id="wrapper_top">
  <div id="header-wrapper" class="">

    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
    <?php endif; ?>

    
	<?php if ($site_name || $site_slogan): ?>
      <div class="header__name-and-slogan" id="name-and-slogan">
        <?php if ($site_name): ?>
          <h1 class="header__site-name" id="site-name">
           <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><?php print $site_name; ?></a>
         </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
     </div>
    <?php endif; ?> 
     
    <div id="three_menu">
				<div id="yellow_pages">
				<?php print render($page["yellow_pages"]);?>
				</div>
				<div id="menu">
			    <?php print render($page["header_menu"]);?>
			    </div>
				<div id="podat_zayavku" class="animated swing">
				<?php print render($page["podat_zayavku"]);?>
				</div>
			
			</div>
			<div id="login_menu">
			<div id="login">
				<?php print render($page["login"]);?>
				</div>
				<div id="languages">
				<?php print render($page["languages"]);?>
				</div>
				</div>
	</div>
	</div>
	</div>
	</div>
	<div id="page" class="container">
 
	
		
		<div id="content" class="contents">
     <?php print $breadcrumb; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page["content"]);?>
		</div>
		
		
		
	
	</div>
<div id="footer">
	<div id="footer1">
				<?php print render($page["footer1"]);?>
			</div>
			<div id="footer2">
				<?php print render($page["footer2"]);?>
			</div>
			<div id="footer3">
				<?php print render($page["footer3"]);?>
			</div>
		<div id="footer4">
				<?php print render($page["footer4"]);?>
		</div>
</div>
</body>