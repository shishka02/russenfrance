<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>
<head>
       
       

        <script src="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js"></script>
        <script>
        $(function()
        {
            $("#sidebar" ).stick_in_parent() 
        });
        </script>
   

    </head>
<body class="fon-<?php print str_replace ("/" , "" ,  $_GET['q']) ?>">
  <script>
        $(function()
        {
            $closure
        });
        </script>
  <div id="page" class="container">
  <div class="fake_sticky"></div>
	<div id="sidebar" class="sticky">
	<?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
    <?php endif; ?>

    
	<?php if ($site_name || $site_slogan): ?>
      <div class="header__name-and-slogan" id="name-and-slogan">
        <?php if ($site_name): ?>
          <h2 class="header__site-name" id="site-name">
           <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><?php print $site_name; ?></a>
         </h2>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
     </div>
    <?php endif; ?> 
	
			<?php print render($page["left_sidebar"]);?>
		</div>
	
	
	

	

	<div id="article">
	
		<div id="header-wrapper" class="head-wrapper">

    
     
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
		
		<div id="sub_menu_container">
		<div id="sub_menu">
		<?php print render($page["sub_menu"]);?>
		</div>
		</div>
		<div  class="sub-article">
		<div id="top-banners" class="top-banners">
		<div id="top_links" class="top_links">
		<?php print render($page["top_links"]);?>
		</div>
		<div id="banner" class="banner">
		<?php print render($page["banner"]);?>
		</div>
		<div id="banner2" class="banner2">
		<?php print render($page["banner2"]);?>
		</div>
		</div>
		<div id="three-column" class="three-column">
			
			<div id="content" class="content">
      <?php print $breadcrumb; ?>
      <?php if ($title): ?>
        <h2 class="page__title title" id="page-title"><?php print $title; ?></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page["content"]);?>
	  <?php print $scripts; ?>
		</div>
					<div id="column2">
				<?php print render($page["map"]);?>
			</div>
			<div id="column_container">
			<div id="column4">
				<?php print render($page["callback"]);?>
			</div>
			<div id="column3">
				<?php print render($page["right"]);?>
			</div>
		</div>
		</div>
		<div id="slide_show">
		<?php print render($page["slide_show"]);?>
		</div>
		
		</div>
	</div>
</div>
<div id="footer" class="footer">
<div id="footer0" class="footer0"></div>
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

<meta name="viewport" content="width=device-width, initial-scale=1">




</body>

