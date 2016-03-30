<?php
/**
 * @file
 * about_us.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function about_us_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about__us';
  $page->task = 'page';
  $page->admin_title = 'About us';
  $page->admin_description = 'About us';
  $page->path = 'About_us';
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
  $handler->name = 'page_about__us__panel';
  $handler->task = 'page';
  $handler->subtask = 'about__us';
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
          0 => 'main-row',
          1 => 1,
          2 => 2,
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
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'what_we_offer',
        ),
        'parent' => 'main',
        'class' => 'offer',
        'hide_empty' => 0,
      ),
      'what_we_offer' => array(
        'type' => 'region',
        'title' => 'What we offer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'offer',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'testimonials',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'testimonials' => array(
        'type' => 'region',
        'title' => 'testimonials',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'testimonials',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'what_we_offer' => NULL,
      'testimonials' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7ef4c993-22b5-4d1d-895f-52d9a0544561';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b0cef4e-cc46-402a-92b3-719cc7be317f';
    $pane->panel = 'center';
    $pane->type = 'panels_mini';
    $pane->subtype = 'about_us';
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
      'css_class' => 'about-us',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7b0cef4e-cc46-402a-92b3-719cc7be317f';
    $display->content['new-7b0cef4e-cc46-402a-92b3-719cc7be317f'] = $pane;
    $display->panels['center'][0] = 'new-7b0cef4e-cc46-402a-92b3-719cc7be317f';
    $pane = new stdClass();
    $pane->pid = 'new-88300049-e1cb-4c4b-a533-2084d53dda8a';
    $pane->panel = 'testimonials';
    $pane->type = 'block';
    $pane->subtype = 'views-testimony-block_1';
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
      'css_class' => 'testimony',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '88300049-e1cb-4c4b-a533-2084d53dda8a';
    $display->content['new-88300049-e1cb-4c4b-a533-2084d53dda8a'] = $pane;
    $display->panels['testimonials'][0] = 'new-88300049-e1cb-4c4b-a533-2084d53dda8a';
    $pane = new stdClass();
    $pane->pid = 'new-83e7dda4-a942-4f80-ad24-2ea69d595641';
    $pane->panel = 'what_we_offer';
    $pane->type = 'block';
    $pane->subtype = 'views-front_page_blocks-block_1';
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
    $pane->uuid = '83e7dda4-a942-4f80-ad24-2ea69d595641';
    $display->content['new-83e7dda4-a942-4f80-ad24-2ea69d595641'] = $pane;
    $display->panels['what_we_offer'][0] = 'new-83e7dda4-a942-4f80-ad24-2ea69d595641';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7b0cef4e-cc46-402a-92b3-719cc7be317f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about__us'] = $page;

  return $pages;

}
