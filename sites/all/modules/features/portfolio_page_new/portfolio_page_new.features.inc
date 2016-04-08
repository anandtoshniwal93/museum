<?php
/**
 * @file
 * portfolio_page_new.features.inc
 */

/**
 * Implements hook_views_api().
 */
function portfolio_page_new_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function portfolio_page_new_image_default_styles() {
  $styles = array();

  // Exported image style: 357_261.
  $styles['357_261'] = array(
    'label' => '357*261',
    'effects' => array(
      3 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 357,
          'height' => 261,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
