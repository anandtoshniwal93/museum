<?php
/**
 * @file
 * home.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function home_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'font_mini';
  $mini->category = '';
  $mini->admin_title = 'font-mini';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '736d0207-3c1e-49b0-b5d0-1e9770b2e7ec';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-00b3ac6d-1e4f-467d-8e2b-127a1df06ed0';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div id="parallax_one_wrapper" class="parallax_one_wrapper video-bg" style="position: relative;"><div class="mbYTP_wrapper" id="wrapper_mbYTP_YTP_1461043574642" style="position: absolute; z-index: 0; min-width: 100%; min-height: 100%; left: 0px; top: 0px; overflow: hidden; opacity: 1;"><iframe id="mbYTP_YTP_1461043574642" class="playerBox" style="position: absolute; z-index: 0; width: 1829.8px; height: 885px; top: 0px; left: 0px; overflow: hidden; opacity: 1; margin-top: -212px; margin-left: -217.4px;" frameborder="0" allowfullscreen="1" title="YouTube video player" width="640" height="360" src="https://www.youtube.com/embed/Y6ieiWe3aiU?
autoplay=1&amp;modestbranding=1&amp;controls=0&amp;showinfo=0&amp;rel=0&amp;enablejsapi=1&amp;version=3&amp;playerapiid=mbYTP_YTP_1461043574642&amp;allowfullscreen=true&amp;loop=1&amp;playlist=Y6ieiWe3aiU&amp;wmode=transparent&amp;iv_load_policy=3&amp;html5=1&amp;widget_referrer=http%3A%2F%2Flivedemo00.template-help.com%2Fdrupal_53129%2F%3Fq%3Dnode%2F37"></iframe><div class="YTPOverlay" style="position: absolute; top: 0px; left: 0px; width: 100%; height: 100%;"></div></div>
<a class="tm_video_bg mb_YTVPlayer isMuted" data-property="{videoURL:\'http://youtu.be/Y6ieiWe3aiU\', containment:\'#parallax_one_wrapper\',autoPlay:true, showControls:false, mute:true, startAt:0, opacity:1}" id="YTP_1461043574642" style="display: none; position: relative; background-image: none;">youtube</a><div class="container-12"><div class="grid-12"> <div class="region region-parallax-one">
<div id="block-block-8" class="block-block-8 block block-block block-odd">
 <div class="content block-content">
<div class="title-1"><h1>A Memorable Historic</h1></div>
<div class="title-2"><h1>Adventure for the Whole Family! </h1></div>
<p>Vitaesaert taset aplicaserde neafayse lreo porta sere kertyu erauas aityavolernatur aut oditaut.</p>
</div>
 

</div> </div>
</div></div><div class="parallax-bg" data-parallax-type="image" data-img-url="http://livedemo00.template-help.com/drupal_53129/sites/default/files/blank.jpg" data-speed="0.5" data-invert="false"></div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'video',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '00b3ac6d-1e4f-467d-8e2b-127a1df06ed0';
    $display->content['new-00b3ac6d-1e4f-467d-8e2b-127a1df06ed0'] = $pane;
    $display->panels['middle'][0] = 'new-00b3ac6d-1e4f-467d-8e2b-127a1df06ed0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['font_mini'] = $mini;

  return $export;
}
