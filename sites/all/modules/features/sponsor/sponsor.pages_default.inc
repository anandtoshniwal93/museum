<?php
/**
 * @file
 * sponsor.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function sponsor_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sponsor_details';
  $page->task = 'page';
  $page->admin_title = 'Sponsor Details';
  $page->admin_description = '';
  $page->path = 'sponser/%id';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'id' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_sponsor_details__panel';
  $handler->task = 'page';
  $handler->subtask = 'sponsor_details';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'sponsors',
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
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '70.15057193325444',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'column',
        'width' => '29.84942806674556',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 's',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar_2',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      's' => array(
        'type' => 'region',
        'title' => 'Sidebar 1',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sidebar_2' => array(
        'type' => 'region',
        'title' => 'Sidebar 2',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      's' => NULL,
      'sidebar_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5a4d796e-1462-42c3-b2e2-4ef263a260a5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-37320ba4-864b-4473-be8e-4f8624c1cfcc';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-sponsor_page-block';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sponsor',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '37320ba4-864b-4473-be8e-4f8624c1cfcc';
    $display->content['new-37320ba4-864b-4473-be8e-4f8624c1cfcc'] = $pane;
    $display->panels['center'][0] = 'new-37320ba4-864b-4473-be8e-4f8624c1cfcc';
    $pane = new stdClass();
    $pane->pid = 'new-15d3fe32-f405-45d8-aaee-f808f460471b';
    $pane->panel = 's';
    $pane->type = 'block';
    $pane->subtype = 'views-categories-block';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'categories',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '15d3fe32-f405-45d8-aaee-f808f460471b';
    $display->content['new-15d3fe32-f405-45d8-aaee-f808f460471b'] = $pane;
    $display->panels['s'][0] = 'new-15d3fe32-f405-45d8-aaee-f808f460471b';
    $pane = new stdClass();
    $pane->pid = 'new-c190e101-f487-4f53-8d71-582745d090c8';
    $pane->panel = 'sidebar_2';
    $pane->type = 'block';
    $pane->subtype = 'advpoll-advpoll_block_22';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'poll',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c190e101-f487-4f53-8d71-582745d090c8';
    $display->content['new-c190e101-f487-4f53-8d71-582745d090c8'] = $pane;
    $display->panels['sidebar_2'][0] = 'new-c190e101-f487-4f53-8d71-582745d090c8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sponsor_details'] = $page;

  return $pages;

}
