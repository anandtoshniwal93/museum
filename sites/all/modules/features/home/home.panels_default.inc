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
      'body' => '<h1>A Memorable Historic </h1>
<h1>Adventure for the Whole Family!</h1>
<p>Vitaesaert taset aplicaserde neafayse lreo porta sere kertyu erauas aityavolernatur aut oditaut.</p>',
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
