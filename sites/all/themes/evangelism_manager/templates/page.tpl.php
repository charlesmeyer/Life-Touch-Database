<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
  <head>
    
    <title><?php print $head_title; ?></title>
    <?php print $head; ?>
    <?php print $styles; ?>
    <!--[if lte IE 6]><style type="text/css" media="all">@import "<?php print $base_path . path_to_theme() ?>/css/ie6.css";</style><![endif]-->
    <!--[if IE 7]><style type="text/css" media="all">@import "<?php print $base_path . path_to_theme() ?>/css/ie7.css";</style><![endif]-->
    <?php print $scripts; ?>
    <meta name="viewport"
  content="width=device-width,
  minimum-scale=1.0, maximum-scale=1.0" />
    <meta name="apple-mobile-web-app-capable" content="yes" />
    <meta name="apple-mobile-web-app-status-bar-style" content="black" />
    <meta name="application-name" content="Lifetouch"/>
    <meta name="description" content="LBC Lifetouch database"/>
    <link rel="icon" href="SHL-icon32x32.png" sizes="32x32"/>
    <link rel="icon" href="SHL-icon48x48.png" sizes="48x48"/>
    <link rel="apple-touch-startup-image" href="/startup.png" />

  </head>

  <body > 
    <div id="page" class="<?php print $body_classes; ?>">

    <!-- ______________________ HEADER _______________________ -->

    <div id="header">
	  <?php if (!empty($site_name) || !empty($site_slogan) || !empty($logo)): ?>
	    <div id="name-and-slogan">
	     <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
           <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
         </a>
         <h1 id="site-name">
          <a href="<?php print $front_page ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
         </h1>
         <div id="site-slogan"><?php print $site_slogan; ?></div>
        </div> <!-- /name-and-slogan -->
	  <?php endif; ?>
    
    <?php if (isset($_GET['destination']) && strstr($body_classes,'section-node-edit')): ?>
	    <a id="homelink" class="back" href="/<?php print $_GET['destination'] ?>" title="<?php print t('Home'); ?>" rel="home"><span>Back</span></a>
    <?php elseif (isset($_GET['destination'])): ?>
	    <a id="homelink" href="/<?php print $_GET['destination'] ?>" title="<?php print t('Home'); ?>" rel="home"><span>Cancel</span></a>
	  <?php elseif (!$title && !strstr($body_classes,'section-node-edit')): ?>
	    <a id="homelink" class="back" href="<?php print $front_page ?>" title="<?php print t('Home'); ?>" rel="home"><span>Back</span></a>
    <?php elseif (!strstr($body_classes,'section-node-add') && !strstr($body_classes,'section-node-edit')): ?>
      <a id="homelink" href="<?php print $front_page ?>" title="<?php print t('Home'); ?>" rel="home"><span>Home</span></a>
    <?php elseif (!strstr($body_classes,'section-node-edit')): ?>
      <a id="homelink" href="<?php print $front_page ?>" title="<?php print t('Home'); ?>" rel="home"><span>Cancel</span></a>
    <?php endif; ?>
	  
	  <?php if ($title): ?>
        <h1 class="title"><?php print $title; ?></h1>
      <?php endif; ?>
	  <?php if ($tabs && !$title): ?>
        <div class="tabs"><?php print $tabs; ?></div>
      <?php endif; ?>
	  
	  <?php if ($header): ?>
        <div id="header-region">
          <?php print $header; ?>
        </div>
      <?php endif; ?>
	  <?php if (!empty($primary_links)){ print theme('links', $primary_links, array('id' => 'primary', 'class' => 'links main-menu')); } ?>
       

    </div> <!-- /header -->

    <!-- ______________________ MAIN _______________________ -->

    <div id="main" class="clearfix">
    
      <div id="content">
        <div id="content-inner" class="inner column center">

          <?php if ($content_top): ?>
            <div id="content-top">
              <?php print $content_top; ?>
            </div> <!-- /#content-top -->
          <?php endif; ?>

          <?php if ($mission || $messages || $help || $tabs): ?>
            <div id="content-header">

              <?php if ($tabs && $title): ?>
                <div class="tabs"><?php print $tabs; ?></div>
              <?php endif; ?>

              <?php if ($mission): ?>
                <div id="mission"><?php print $mission; ?></div>
              <?php endif; ?>

              <?php print $messages; ?>

              <?php print $help; ?> 

             

            </div> <!-- /#content-header -->
          <?php endif; ?>

          <div id="content-area">
            <?php print $content; ?>
          </div> <!-- /#content-area -->

          <?php print $feed_icons; ?>

          <?php if ($content_bottom): ?>
            <div id="content-bottom">
              <?php print $content_bottom; ?>
            </div><!-- /#content-bottom -->
          <?php endif; ?>

          </div>
        </div> <!-- /content-inner /content -->


        <?php if ($left): ?>
          <div id="sidebar-first" class="column sidebar first">
            <div id="sidebar-first-inner" class="inner">
              <?php print $left; ?>
            </div>
          </div>
        <?php endif; ?> <!-- /sidebar-left -->

        <?php if ($right): ?>
          <div id="sidebar-second" class="column sidebar second">
            <div id="sidebar-second-inner" class="inner">
              <?php print $right; ?>
            </div>
          </div>
        <?php endif; ?> <!-- /sidebar-second -->

      </div> <!-- /main -->

      <!-- ______________________ FOOTER _______________________ -->

      <?php if(!empty($footer_message) || !empty($footer_block) || !empty($secondary_links)): ?>
        <div id="footer">
		<?php if (!empty($secondary_links)){ print theme('links', $secondary_links, array('id' => 'secondary', 'class' => 'links sub-menu')); } ?>
          <?php print $footer_message; ?>
          <?php print $footer_block; ?>
        </div> <!-- /footer -->
      <?php endif; ?>

    </div> <!-- /page -->
    <?php print $closure; ?>
  </body>
</html>