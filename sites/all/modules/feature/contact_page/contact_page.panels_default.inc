<?php
/**
 * @file
 * contact_page.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function contact_page_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'contact_info';
  $mini->category = '';
  $mini->admin_title = 'Contact info';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1f261e18-cf7f-49cb-ad9d-266454acdbb3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-af098e48-50c0-42ef-b338-c86498f0b517';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'contact info',
      'title' => 'Contact Info',
      'body' => '<h1> Sed ut perspiciatis unde omnis iste natus error sit.</h1>

<p> Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque et quasi architecto beatae vitae dicta sunt explicabo. Mornunc odio gravida atcursus neus a lorem. Maecenas tristique orci ac sem. Duis ultric pharetra magna. </p>

The Company Name Inc.
9870 St Vincent Place,
Glasgow, DC 45 Fr 45.
Telephone: +1 800 603 6035
FAX: +1 800 889 9898
E-mail: mail@demolink.org',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'af098e48-50c0-42ef-b338-c86498f0b517';
    $display->content['new-af098e48-50c0-42ef-b338-c86498f0b517'] = $pane;
    $display->panels['center'][0] = 'new-af098e48-50c0-42ef-b338-c86498f0b517';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-af098e48-50c0-42ef-b338-c86498f0b517';
  $mini->display = $display;
  $export['contact_info'] = $mini;

  return $export;
}
