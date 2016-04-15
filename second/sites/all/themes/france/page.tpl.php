<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title></title>
<meta name="keywords" content="" />
<meta name="description" content="" />
<link href="style.css" rel="stylesheet" type="text/css" media="all" />
<link href='http://fonts.googleapis.com/css?family=Oswald:400,300' rel='stylesheet' type='text/css' />
<link href='http://fonts.googleapis.com/css?family=Abel|Satisfy' rel='stylesheet' type='text/css' />
<!--[if IE 6]>
<link href="default_ie6.css" rel="stylesheet" type="text/css" />
<![endif]-->
</head>
<body class="fon-<?php print str_replace ("/" , "" ,  $_GET['q']) ?>">
<div id="wrapper">

	<div id="header-wrapper">
	<div id="flag"><a href="#"><img src="/sites/all/themes/france/images/flag.png" width="110" height="49" alt="" /></a></div>
		<div id="header" class="container">
			<div id="logo">
				<h1><p> RUSS en FRANCE<p></h1>
				<h2><z> Портал для русских во Франции <z></h2>
			</div>
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
	
	<div id="page" class="container">
	<div id="sidebar">
			<?php print render($page["left_sidebar"]);?>
		</div>
		<div id="banner"><a href="#"><img src="/sites/all/themes/france/images/img02.jpg" width="700" height="200" alt="" /></a></div>
		<div id="three-column">
			<div id="column1">
				<?php print render($page["main_banner"]);?>
			</div>
			<div id="column2">
				<?php print render($page["map"]);?>
			</div>
			<div id="column3">
				<?php print render($page["right"]);?>
			</div>
		</div>
		<div id="slide_show">
		<?php print render($page["slide_show"]);?>
		</div>
		
		<div id="content">
		<?php print render($page["content"]);?>
		</div>
	</div>

<div id="footer">
	<p>Copyright (c) 2012 <a href="http://www.drupalfly.ru" title="drupalfly.ru" target="_blank">Drupalfly.ru</a>. All rights reserved.</p>
</div>
</body>
</html>
