<?php
/**
 * @file
 * testimonials_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function testimonials_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'testimonials';
  $page->task = 'page';
  $page->admin_title = 'Testimonials';
  $page->admin_description = 'Testimonials';
  $page->path = 'testimonials';
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
  $handler->name = 'page_testimonials__panel';
  $handler->task = 'page';
  $handler->subtask = 'testimonials';
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
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '29.143663354189673',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar1',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'column',
        'width' => '70.85633664581033',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 3,
        ),
        'class' => 'Content',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar2',
        ),
        'parent' => 'main',
        'class' => 'row 2',
        'hide_empty' => 0,
      ),
      'sidebar1' => array(
        'type' => 'region',
        'title' => 'Sidebar1',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sidebar2' => array(
        'type' => 'region',
        'title' => 'Sidebar2',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
        ),
        'parent' => '1',
        'class' => 'row',
        'hide_empty' => 0,
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
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
      'sidebar1' => NULL,
      'sidebar2' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9d3c871b-9478-4005-9ebb-21273a9d5511';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d37cf79d-0cbf-476c-aded-b6db2d6a4a40';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'views-testimony-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Testimonials',
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
    $pane->uuid = 'd37cf79d-0cbf-476c-aded-b6db2d6a4a40';
    $display->content['new-d37cf79d-0cbf-476c-aded-b6db2d6a4a40'] = $pane;
    $display->panels['content'][0] = 'new-d37cf79d-0cbf-476c-aded-b6db2d6a4a40';
    $pane = new stdClass();
    $pane->pid = 'new-1e85efcb-0afe-41ec-b4bb-c42ddfb8042f';
    $pane->panel = 'sidebar1';
    $pane->type = 'block';
    $pane->subtype = 'views-categories-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Categories',
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
    $pane->uuid = '1e85efcb-0afe-41ec-b4bb-c42ddfb8042f';
    $display->content['new-1e85efcb-0afe-41ec-b4bb-c42ddfb8042f'] = $pane;
    $display->panels['sidebar1'][0] = 'new-1e85efcb-0afe-41ec-b4bb-c42ddfb8042f';
    $pane = new stdClass();
    $pane->pid = 'new-4572d4c2-31ce-41d6-b20d-f5095c70432d';
    $pane->panel = 'sidebar2';
    $pane->type = 'block';
    $pane->subtype = 'advpoll-advpoll_block_41';
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
    $pane->uuid = '4572d4c2-31ce-41d6-b20d-f5095c70432d';
    $display->content['new-4572d4c2-31ce-41d6-b20d-f5095c70432d'] = $pane;
    $display->panels['sidebar2'][0] = 'new-4572d4c2-31ce-41d6-b20d-f5095c70432d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['testimonials'] = $page;

  return $pages;

}
