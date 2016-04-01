<?php
/**
 * @file
 * archive_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function archive_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'archive_panel';
  $page->task = 'page';
  $page->admin_title = 'Archive Panel';
  $page->admin_description = '';
  $page->path = 'archive-list';
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
  $handler->name = 'page_archive_panel__panel';
  $handler->task = 'page';
  $handler->subtask = 'archive_panel';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'archivelist',
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
        'width' => '75.12498156930116',
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
          0 => 'content',
        ),
        'parent' => 'main',
        'class' => 'row',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'column',
        'width' => '24.875018430698848',
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
        'class' => 'row-1',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar_2',
        ),
        'parent' => '1',
        'class' => 'row-2',
        'hide_empty' => 0,
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
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
      'content' => NULL,
      'sidebar_1' => NULL,
      'sidebar_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ba12eb92-d3ab-4b24-abae-c500877ced94';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-75bb650a-5fac-4272-8b81-9eee04527b3f';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'views-archive-block';
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
      'css_class' => 'archive',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '75bb650a-5fac-4272-8b81-9eee04527b3f';
    $display->content['new-75bb650a-5fac-4272-8b81-9eee04527b3f'] = $pane;
    $display->panels['content'][0] = 'new-75bb650a-5fac-4272-8b81-9eee04527b3f';
    $pane = new stdClass();
    $pane->pid = 'new-9f3634ae-c24d-486a-a871-e55fc516cc3a';
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
    $pane->uuid = '9f3634ae-c24d-486a-a871-e55fc516cc3a';
    $display->content['new-9f3634ae-c24d-486a-a871-e55fc516cc3a'] = $pane;
    $display->panels['sidebar_1'][0] = 'new-9f3634ae-c24d-486a-a871-e55fc516cc3a';
    $pane = new stdClass();
    $pane->pid = 'new-672ce4ae-6e52-4ad2-8f44-f280a0d6d5b3';
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
    $pane->uuid = '672ce4ae-6e52-4ad2-8f44-f280a0d6d5b3';
    $display->content['new-672ce4ae-6e52-4ad2-8f44-f280a0d6d5b3'] = $pane;
    $display->panels['sidebar_2'][0] = 'new-672ce4ae-6e52-4ad2-8f44-f280a0d6d5b3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-75bb650a-5fac-4272-8b81-9eee04527b3f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['archive_panel'] = $page;

  return $pages;

}
