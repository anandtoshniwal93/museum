<?php
/**
 * @file
 * contact_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function contact_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'Contact ';
  $page->task = 'page';
  $page->admin_title = 'Contact us';
  $page->admin_description = 'Contact us';
  $page->path = 'contactus';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_Contact __panel_context_454f0e43-0beb-42da-9fbe-9da86e8902ec';
  $handler->task = 'page';
  $handler->subtask = 'Contact ';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'contactinfo',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'info',
          1 => 'contact_form',
        ),
        'parent' => 'main',
        'class' => 'container-12',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'map',
        ),
        'parent' => 'main',
        'class' => 'Map container-12',
        'hide_empty' => 0,
      ),
      'map' => array(
        'type' => 'region',
        'title' => 'map',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'info' => array(
        'type' => 'region',
        'title' => 'Info',
        'width' => '39.31220922922168',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'contact_form' => array(
        'type' => 'region',
        'title' => 'Contact Form',
        'width' => '60.68779077077832',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'separator' => array(
          'active' => 1,
          'element_type' => '',
          'show_css' => 1,
          'element_class' => 'contact',
        ),
      ),
      'center' => NULL,
      'info' => NULL,
      'map' => NULL,
      'contact_form' => NULL,
    ),
    'style' => 'semantic_panels',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7230f554-d70a-4ebf-83b6-9311bf225397';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4886ee92-4d0c-4202-9041-995be9866c97';
    $pane->panel = 'contact_form';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-26';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4886ee92-4d0c-4202-9041-995be9866c97';
    $display->content['new-4886ee92-4d0c-4202-9041-995be9866c97'] = $pane;
    $display->panels['contact_form'][0] = 'new-4886ee92-4d0c-4202-9041-995be9866c97';
    $pane = new stdClass();
    $pane->pid = 'new-78fec34a-f21f-485f-bde8-5a81126e84a1';
    $pane->panel = 'info';
    $pane->type = 'panels_mini';
    $pane->subtype = 'contact_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '78fec34a-f21f-485f-bde8-5a81126e84a1';
    $display->content['new-78fec34a-f21f-485f-bde8-5a81126e84a1'] = $pane;
    $display->panels['info'][0] = 'new-78fec34a-f21f-485f-bde8-5a81126e84a1';
    $pane = new stdClass();
    $pane->pid = 'new-b991624c-0637-4544-8fe8-b441ccdc8043';
    $pane->panel = 'map';
    $pane->type = 'block';
    $pane->subtype = 'locationmap-image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b991624c-0637-4544-8fe8-b441ccdc8043';
    $display->content['new-b991624c-0637-4544-8fe8-b441ccdc8043'] = $pane;
    $display->panels['map'][0] = 'new-b991624c-0637-4544-8fe8-b441ccdc8043';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['Contact '] = $page;

  return $pages;

}
