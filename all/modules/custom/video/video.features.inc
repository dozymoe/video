<?php
/**
 * @file
 * video.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function video_commerce_product_default_types() {
  $items = array(
    'video' => array(
      'type' => 'video',
      'name' => 'Video',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function video_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "commerce_autosku" && $api == "autosku_pattern") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Movie Title'),
      'help' => '',
    ),
  );
  return $items;
}
