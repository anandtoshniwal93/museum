<?php
/**
 * @file
 * static_pages.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function static_pages_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'about_us';
  $mini->category = '';
  $mini->admin_title = 'About us';
  $mini->admin_description = 'About us';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'A Few words about us';
  $display->uuid = '3c3c1090-80a4-41ff-8e8e-7ca42238bdf6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2dff0cd6-e46e-45dd-8426-edac76c9ee9c';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'About us',
      'title' => '',
      'body' => '<div><img src="http://static.livedemo00.template-help.com/drupal_53129/sites/all/themes/theme961/images/page2_img1.jpg" class="left-img"></div>
<h1>Vitaesaert asety kertya asplicase bosrae viseaseisagast nverit.</h1>

<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Praesent vestibulum molestie lacus. Aenean nonummy hendrerit mauris. Phasellus porta. Fusce suscipit varius mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nulla dui. Fusce feugiat malesuada odio. Morbi nunc odio, gravida at, cursus nec, luctus a, lorem. Maecenas tristique orci ac semus ultricies pharetra magnaonec accumsan.Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Praesent vestibulum molestie lacus. Aenean nonummy hendrerit mauris. Phasellus porta. Fusce suscipit varius mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.</p>
<div>
<img src="http://static.livedemo00.template-help.com/drupal_53129/sites/all/themes/theme961/images/page2_img2.jpg" class="right-img">
 </div>
<p>Malesuada orci. Donec sit amet eros. Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Mauris fermentum dictum magna. Sed laoreet aliquam leo. Ut tellus dolor, dapibus eget, elementum vel, cursus eleifend, elit.. </p>

<p>Malesuada orci. Donec sit amet eros. Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Mauris fermentum dictum magna. Sed laoreet aliquam leo. Ut tellus dolor, dapibus eget, elementum vel, cursus eleifend, elit.. </p>

 <p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Praesent vestibulum molestie lacus. Aenean nonummy hendrerit mauris. Phasellus porta. Fusce suscipit varius mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nulla dui. Fusce feugiat malesuada odio. Morbi nunc odio, gravida at, cursus nec, luctus a, lorem. Maecenas tristique orci ac semus ultricies pharetra magnaonec accumsan alesuada orci. Donec sit amet eros. Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Mauris fermentum dictum magna. Sed laoreet aliquam leo. Ut tellus dolor, dapibus eget, elementum..</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mini-block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2dff0cd6-e46e-45dd-8426-edac76c9ee9c';
    $display->content['new-2dff0cd6-e46e-45dd-8426-edac76c9ee9c'] = $pane;
    $display->panels['middle'][0] = 'new-2dff0cd6-e46e-45dd-8426-edac76c9ee9c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['about_us'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'contact';
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
  $display->uuid = '0a219415-cc20-4db1-93ae-d3e5c1d59dea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-893319ef-5c9e-4238-95b6-bd2b9a1c7aa9';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Contact Info',
      'body' => 'Sed ut perspiciatis unde omnis iste natus error sit.

Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque et quasi architecto beatae vitae dicta sunt explicabo. Mornunc odio gravida atcursus neus a lorem. Maecenas tristique orci ac sem. Duis ultric pharetra magna.

The Company Name Inc.
9870 St Vincent Place,
Glasgow, DC 45 Fr 45.
Telephone: +1 800 603 6035
FAX: +1 800 889 9898
E-mail: mail@demolink.org',
      'format' => 'filtered_html',
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
    $pane->uuid = '893319ef-5c9e-4238-95b6-bd2b9a1c7aa9';
    $display->content['new-893319ef-5c9e-4238-95b6-bd2b9a1c7aa9'] = $pane;
    $display->panels['center'][0] = 'new-893319ef-5c9e-4238-95b6-bd2b9a1c7aa9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['contact'] = $mini;

  return $export;
}
