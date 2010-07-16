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
    
            <div id="navigation" class="grid-16">
                    <?php if ($main_menu_links || $secondary_menu_links): ?>
                    <div id="site-menu" class="grid-11 alpha omega">
                        <?php print $main_menu_links; ?>
                    </div> <!-- Cierra menú principal -->
                <?php if ($main_menu_links || $secondary_menu_links): ?>
                    <div id="secondary-links" class="grid-5 alpha omega">
                        <?php print $secondary_menu_links; ?>
                    </div>   <!-- Cierra Menu Secundario -->
                <?php endif; ?>
            </div> <!-- Cierra Navigation -->
        
            <div id="header-wrapper" class="grid-16 alpha omega clear-block">
                    <div id="branding-wrapper">
                        <div id="branding"> 
                            <?php if ($linked_logo_img): ?>
                                <div id="logo"><?php print $linked_logo_img; ?></div>
                            <?php endif; ?>
                                <?php if ($linked_site_name): ?>
                                <h1 id="site-name"><?php print $linked_site_name; ?></h1>
                            <?php endif; ?>
                                <?php if ($site_slogan): ?>
                                <div id="site-slogan"><h1 class="site-slogan"><?php print $site_slogan; ?></h1></div>
                            <?php endif; ?>
                        </div> <!-- Cierra branding -->  
                    </div> <!-- Cierra branding-wrapper -->
           </div> <!-- Cierra Header Wrapper-->


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

   
<div id="wrapper" class="grid-16">

   <div id="main" class="grid-12 alpha omega">
  

      <!-- <?php print $breadcrumb; ?> -->
      
      <?php if ($tabs): ?>
        <div class="tabs"><?php print $tabs; ?></div>
      <?php endif; ?>
      <?php print $messages; ?>
      <?php print $help; ?>

      <div id="main-content" class="region clear-block">
        <?php if ($title): ?>
        <h1 class="title" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
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
    <div id="sidebar-right" class="column sidebar region grid-4 omega">
      <div id="sidebar-right-container">
      <?php print $right; ?>
     
         <?php endif; ?>
         </div>
    </div><!-- Cierra sidebar-right -->
  <?php endif; ?>


</div><!-- Cierra Main -->


  <div id="footer" class="grid-12 clear-block">
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
  </div><!-- Cierra footer -->
</div><!-- Cierra Wrapper -->
  </div>

  <?php print $closure; ?>
</body>
</html>
