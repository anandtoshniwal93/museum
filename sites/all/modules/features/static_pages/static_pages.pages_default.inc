<?php
/**
 * @file
 * static_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function static_pages_default_page_manager_pages() {
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'what-we-offer',
    );
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
  $pages[''] = $page;

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
    $pane->pid = 'new-5f8726a1-314e-4854-94db-efd0b30568cf';
    $pane->panel = 'info';
    $pane->type = 'panels_mini';
    $pane->subtype = 'contact';
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
    $pane->uuid = '5f8726a1-314e-4854-94db-efd0b30568cf';
    $display->content['new-5f8726a1-314e-4854-94db-efd0b30568cf'] = $pane;
    $display->panels['info'][0] = 'new-5f8726a1-314e-4854-94db-efd0b30568cf';
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
  $pages[''] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'faq_panel';
  $page->task = 'page';
  $page->admin_title = 'FAQ Panel';
  $page->admin_description = '';
  $page->path = 'faq';
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
  $handler->name = 'page_faq_panel__panel';
  $handler->task = 'page';
  $handler->subtask = 'faq_panel';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'faqmain',
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
        'width' => '70.49356039169281',
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
        'width' => '29.506439608307183',
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
  $display->uuid = '8a9ef9cc-4da8-435b-bb42-22a20ac42dd7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c5276e22-f295-460d-a6a1-d1bbb3f4588b';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-faq_s-block_1';
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
      'css_class' => 'faq',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c5276e22-f295-460d-a6a1-d1bbb3f4588b';
    $display->content['new-c5276e22-f295-460d-a6a1-d1bbb3f4588b'] = $pane;
    $display->panels['center'][0] = 'new-c5276e22-f295-460d-a6a1-d1bbb3f4588b';
    $pane = new stdClass();
    $pane->pid = 'new-88261c93-df9a-4c74-8907-27e1b90c4bfd';
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
    $pane->uuid = '88261c93-df9a-4c74-8907-27e1b90c4bfd';
    $display->content['new-88261c93-df9a-4c74-8907-27e1b90c4bfd'] = $pane;
    $display->panels['sidebar_1'][0] = 'new-88261c93-df9a-4c74-8907-27e1b90c4bfd';
    $pane = new stdClass();
    $pane->pid = 'new-dd25d4ea-69f1-4685-a41c-861575a7bdbf';
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
    $pane->uuid = 'dd25d4ea-69f1-4685-a41c-861575a7bdbf';
    $display->content['new-dd25d4ea-69f1-4685-a41c-861575a7bdbf'] = $pane;
    $display->panels['sidebar_2'][0] = 'new-dd25d4ea-69f1-4685-a41c-861575a7bdbf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c5276e22-f295-460d-a6a1-d1bbb3f4588b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

  return $pages;

}
