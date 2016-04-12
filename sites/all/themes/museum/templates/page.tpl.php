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

  <meta name="viewport" content="width=device-width, initial-scale=1.0">

</head>
<div id="page">

    <div class="header">
     <div class="menu-wrapper">
      <?php print render($page['header']); ?>
      </div>
      <div class="logo-wrap">
      </div>
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
  <div class="footer">
    <?php print render($page['footer']); ?>
    <div class="social">
    <ul>

    <li class="social-items"><i class="fa fa-rss"></i></li>
    <li class="social-items"><i class="fa fa-facebook"></i></li>
    <li class="social-items"> <i class="fa fa-google-plus"></i></li>
    <li class="social-items"><i class="fa fa-twitter"></i></li>
    </ul>
    </div>

    <div class="privacy-policy">
      <li class="rights"><a href="#">MUSEUM © 2016</li>
      <li class="policy"><a href="#">PRIVACY POLICY</li>
    </div>
  </div>
</div>

