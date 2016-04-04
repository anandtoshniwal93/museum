<?php
/**
 * @file
 * static_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function static_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_webform';
  $strongarm->value = '0';
  $export['comment_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_address';
  $strongarm->value = 'phoenix mall Pune, india';
  $export['locationmap_address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_block_mapheight';
  $strongarm->value = 0;
  $export['locationmap_block_mapheight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_block_mapwidth';
  $strongarm->value = 0;
  $export['locationmap_block_mapwidth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_block_text_top';
  $strongarm->value = '';
  $export['locationmap_block_text_top'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_block_type';
  $strongarm->value = 'interactive';
  $export['locationmap_block_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_body';
  $strongarm->value = array(
    'value' => '',
    'format' => 'filtered_html',
  );
  $export['locationmap_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_footer';
  $strongarm->value = array(
    'value' => '',
    'format' => 'filtered_html',
  );
  $export['locationmap_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_height';
  $strongarm->value = '300';
  $export['locationmap_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_info';
  $strongarm->value = array(
    'value' => '',
    'format' => 'filtered_html',
  );
  $export['locationmap_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_lat';
  $strongarm->value = '18.5603563';
  $export['locationmap_lat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_lng';
  $strongarm->value = '73.9157978';
  $export['locationmap_lng'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_title';
  $strongarm->value = 'Our Location';
  $export['locationmap_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_type';
  $strongarm->value = 'google.maps.MapTypeId.ROADMAP';
  $export['locationmap_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_width';
  $strongarm->value = '800';
  $export['locationmap_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_zoom';
  $strongarm->value = '15';
  $export['locationmap_zoom'] = $strongarm;

  return $export;
}
