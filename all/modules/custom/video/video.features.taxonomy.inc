<?php
/**
 * @file
 * video.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function video_taxonomy_default_vocabularies() {
  return array(
    'content_rating' => array(
      'name' => 'Content Rating',
      'machine_name' => 'content_rating',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'genre' => array(
      'name' => 'Genre',
      'machine_name' => 'genre',
      'description' => 'Video Categories',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'kategori' => array(
      'name' => 'Kategori',
      'machine_name' => 'kategori',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'koleksi' => array(
      'name' => 'Koleksi',
      'machine_name' => 'koleksi',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'version' => array(
      'name' => 'Version',
      'machine_name' => 'version',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
