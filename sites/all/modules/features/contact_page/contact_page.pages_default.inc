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
  $page->name = 'contact_page';
  $page->task = 'page';
  $page->admin_title = 'contact page';
  $page->admin_description = '';
  $page->path = 'contactpage';
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
  $handler->name = 'page_contact_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'contact_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
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
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'map',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'info' => array(
        'type' => 'region',
        'title' => 'info',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
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
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'info' => NULL,
      'map' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '50cae5df-d3a8-40dd-beb8-b049c234c4d0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-43ac95f0-b15d-4e92-ad25-3efecfa9cd55';
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
    $pane->uuid = '43ac95f0-b15d-4e92-ad25-3efecfa9cd55';
    $display->content['new-43ac95f0-b15d-4e92-ad25-3efecfa9cd55'] = $pane;
    $display->panels['info'][0] = 'new-43ac95f0-b15d-4e92-ad25-3efecfa9cd55';
    $pane = new stdClass();
    $pane->pid = 'new-0986577f-4644-46f5-81aa-0cd9e151a18f';
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
    $pane->uuid = '0986577f-4644-46f5-81aa-0cd9e151a18f';
    $display->content['new-0986577f-4644-46f5-81aa-0cd9e151a18f'] = $pane;
    $display->panels['map'][0] = 'new-0986577f-4644-46f5-81aa-0cd9e151a18f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact_page'] = $page;

  return $pages;

}
