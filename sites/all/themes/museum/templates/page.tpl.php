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
  <meta name="viewport" content="width = device-width">
</head>
<div id="page">

  <header class="header" id="header" role="banner">
    <div class="header-section-1">
   <?php print render($page['header']); ?>

   </div>
  </header>

  <div class="content-preface" id="content-preface" >
       <?php print render($page['content_preface']); ?>
        </div>
  <div id="main">

    <div id="content" class="column" role="main">
      <?php print render($page['content']); ?>
    </div>

<div class="content-postface" id="content-postface" >
       <?php print render($page['content_postface']); ?>
</div>

<div class="footer-top" id="footer-top" >
       <?php print render($page['footer_top']); ?>
</div>

</div>
  <?php print render($page['footer']); ?>
</div>

