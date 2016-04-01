<?php
/**
 * @file
 * blog_listing_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function blog_listing_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog_panel';
  $page->task = 'page';
  $page->admin_title = 'Blog Panel';
  $page->admin_description = '';
  $page->path = 'bloglist';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog_panel__panel';
  $handler->task = 'page';
  $handler->subtask = 'blog_panel';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'bloglist',
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
        'width' => '70.665054620912',
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
        'width' => '29.334945379087998',
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
          0 => 'sidebar_1',
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
      'sidebar_1' => array(
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
      'sidebar_1' => NULL,
      'sidebar_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7f6e1d77-412c-44d8-917f-193a90afa3da';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-89f7f2ee-b3a7-418b-ae37-eaaf40a556c8';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-blogs-block_1';
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
      'css_class' => 'blogs-list',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '89f7f2ee-b3a7-418b-ae37-eaaf40a556c8';
    $display->content['new-89f7f2ee-b3a7-418b-ae37-eaaf40a556c8'] = $pane;
    $display->panels['center'][0] = 'new-89f7f2ee-b3a7-418b-ae37-eaaf40a556c8';
    $pane = new stdClass();
    $pane->pid = 'new-babddc2f-8ffb-494c-b335-2a0cb4f5c128';
    $pane->panel = 'sidebar_1';
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
    $pane->uuid = 'babddc2f-8ffb-494c-b335-2a0cb4f5c128';
    $display->content['new-babddc2f-8ffb-494c-b335-2a0cb4f5c128'] = $pane;
    $display->panels['sidebar_1'][0] = 'new-babddc2f-8ffb-494c-b335-2a0cb4f5c128';
    $pane = new stdClass();
    $pane->pid = 'new-1e2569e5-3fff-4939-96e2-6a40a3f6cec1';
    $pane->panel = 'sidebar_2';
    $pane->type = 'block';
    $pane->subtype = 'advpoll-advpoll_block_29';
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
    $pane->uuid = '1e2569e5-3fff-4939-96e2-6a40a3f6cec1';
    $display->content['new-1e2569e5-3fff-4939-96e2-6a40a3f6cec1'] = $pane;
    $display->panels['sidebar_2'][0] = 'new-1e2569e5-3fff-4939-96e2-6a40a3f6cec1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-89f7f2ee-b3a7-418b-ae37-eaaf40a556c8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

  return $pages;

}
