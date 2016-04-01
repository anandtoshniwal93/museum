<?php
/**
 * @file
 * home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_front_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
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
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'edebc656-5cd7-4072-9fa5-2510ab9d67b8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f218fb31-5946-4f6c-b15f-e86a5b8edc2f';
    $pane->panel = 'bottom';
    $pane->type = 'panels_mini';
    $pane->subtype = 'font_mini';
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
      'css_class' => 'video-block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f218fb31-5946-4f6c-b15f-e86a5b8edc2f';
    $display->content['new-f218fb31-5946-4f6c-b15f-e86a5b8edc2f'] = $pane;
    $display->panels['bottom'][0] = 'new-f218fb31-5946-4f6c-b15f-e86a5b8edc2f';
    $pane = new stdClass();
    $pane->pid = 'new-5d8aad3a-29d4-499b-8066-298f2b87b208';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'views-sponsors-block';
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
      'css_class' => 'front-sponsors',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5d8aad3a-29d4-499b-8066-298f2b87b208';
    $display->content['new-5d8aad3a-29d4-499b-8066-298f2b87b208'] = $pane;
    $display->panels['bottom'][1] = 'new-5d8aad3a-29d4-499b-8066-298f2b87b208';
    $pane = new stdClass();
    $pane->pid = 'new-f461f526-db1c-41da-9523-763609c772bb';
    $pane->panel = 'left_below';
    $pane->type = 'block';
    $pane->subtype = 'views-front_page_blocks-block_2';
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
      'css_class' => 'front-three',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f461f526-db1c-41da-9523-763609c772bb';
    $display->content['new-f461f526-db1c-41da-9523-763609c772bb'] = $pane;
    $display->panels['left_below'][0] = 'new-f461f526-db1c-41da-9523-763609c772bb';
    $pane = new stdClass();
    $pane->pid = 'new-69432aa5-0a47-4610-9728-6468ce50a7ce';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-front_page_blocks-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'front-second',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '69432aa5-0a47-4610-9728-6468ce50a7ce';
    $display->content['new-69432aa5-0a47-4610-9728-6468ce50a7ce'] = $pane;
    $display->panels['middle'][0] = 'new-69432aa5-0a47-4610-9728-6468ce50a7ce';
    $pane = new stdClass();
    $pane->pid = 'new-5690e3bc-f90e-4b59-91d0-09304d05f053';
    $pane->panel = 'right_below';
    $pane->type = 'block';
    $pane->subtype = 'views-front_page_blocks-block_3';
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
      'css_class' => 'front-four',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5690e3bc-f90e-4b59-91d0-09304d05f053';
    $display->content['new-5690e3bc-f90e-4b59-91d0-09304d05f053'] = $pane;
    $display->panels['right_below'][0] = 'new-5690e3bc-f90e-4b59-91d0-09304d05f053';
    $pane = new stdClass();
    $pane->pid = 'new-daeff013-a91c-4130-8c5e-38eb0c9fbf29';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'views-front_page_blocks-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'front-first',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'daeff013-a91c-4130-8c5e-38eb0c9fbf29';
    $display->content['new-daeff013-a91c-4130-8c5e-38eb0c9fbf29'] = $pane;
    $display->panels['top'][0] = 'new-daeff013-a91c-4130-8c5e-38eb0c9fbf29';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-daeff013-a91c-4130-8c5e-38eb0c9fbf29';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
