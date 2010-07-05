<?php
// $Id: page.tpl.php,v 1.1.2.1 2009/02/24 15:34:45 dvessel Exp $
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">

<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>

<body class="<?php print $body_classes; ?> show-grid">
<?php if (!empty($admin)) print $admin; ?> 

  <div id="page" class="container-16 clear-block">
    
    <div id="headertop" class="grid-16">
    <?php if ($main_menu_links || $secondary_menu_links): ?>
      <div id="secondary-links" class="grid-5 prefix-11">
                <?php print $secondary_menu_links; ?>
         </div>  
         <?php endif; ?> <!-- Cierra Menu Secundario -->
      
    </div>
    <div id="site-header" class="clear-block">
        <div id="branding" class="grid-16">
                <?php if ($linked_logo_img): ?>
                <span id="logo" class="grid-1 alpha"><?php print $linked_logo_img; ?></span>
                <?php endif; ?>
                <?php if ($linked_site_name): ?>
                <h1 id="site-name" class="grid-4 alpha omega"><?php print $linked_site_name; ?></h1>
                <?php endif; ?>
                <?php if ($site_slogan): ?>
                <div id="site-slogan" class="grid-12 alpha omega"><h1 class="site-slogan"><?php print $site_slogan; ?></h1></div>
                <?php endif; ?>
         </div> <!-- Cierra branding -->
       
        
            </div> <!-- Cierra Header -->


   <div id="site-subheader" class="prefix-1 suffix-1 clear-block">
      <?php if ($mission): ?>
      <div id="mission" class="<?php print ns('grid-14', $header, 7); ?>">
      <?php print $mission; ?>
      </div> <!-- Cierra Mission -->
    <?php endif; ?>
    <?php if ($header): ?>
    <div id="header-region" class="region <?php print ns('grid-14', $mission, 7); ?> clear-block">
       <?php print $header; ?>
      </div>
    <?php endif; ?>
    </div> <!-- Cierra Subheader-->

   <div id="main-top" class="grid-16">
    <?php if ($main_menu_links || $secondary_menu_links): ?>
      <div id="site-menu" class="grid-12 alpha omega">
      <!-- <div id="menu-image-left" class="grid-1 alpha omega"></div> -->
        <?php print $main_menu_links; ?>
       <!-- <div id="menu-image-right" class="grid-1 alpha omega"></div> -->
                </div> <!-- Cierra menú principal -->
                
    <?php endif; ?>
    <?php if ($search_box): ?>
         <div id="search-box" class="grid-3 omega prefix-1">
         <?php print $search_box; ?>
                 </div> <!-- Cierra Serch Box -->
         <?php endif; ?>
   </div> <!-- Cierra Main-top -->


<div id="wrapper" class="grid-16">

   <div id="main" class="grid-12 alpha omega">
  

      <!-- <?php print $breadcrumb; ?> -->
      <?php if ($title): ?>
        <h1 class="title" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php if ($tabs): ?>
        <div class="tabs"><?php print $tabs; ?></div>
      <?php endif; ?>
      <?php print $messages; ?>
      <?php print $help; ?>

      <div id="main-content" class="region clear-block">
        <?php print $content; ?>
      </div>

      <?php print $feed_icons; ?>
    </div>

  <?php if ($left): ?>
    <div id="sidebar-left" class="column sidebar region grid-4 <?php print ns('pull-12', $right, 3); ?>">
      <?php print $left; ?>
    </div>
  <?php endif; ?>

  <?php if ($right): ?>
    <div id="sidebar-right" class="column sidebar region grid-3 prefix-1 omega">
      <?php print $right; ?>
    </div>
  <?php endif; ?>



</div><!-- Cierra Wrapper -->

  <div id="footer" class="grid-16 alpha omega">
    <?php if ($footer): ?>
      <div id="footer-region">
        <?php print $footer; ?>
      </div>
    <?php endif; ?>

    <?php if ($footer_message): ?>
      <div id="footer-message">
        <?php print $footer_message; ?>
      </div>
    <?php endif; ?>
  </div>

  </div>
  <?php print $closure; ?>
</body>
</html>
