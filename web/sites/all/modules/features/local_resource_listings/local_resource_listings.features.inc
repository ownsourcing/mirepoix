<?php
/**
 * @file
 * local_resource_listings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function local_resource_listings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function local_resource_listings_node_info() {
  $items = array(
    'local_resource' => array(
      'name' => t('Local resource'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name of resource'),
      'help' => '',
    ),
    'local_resource_list' => array(
      'name' => t('Local resource list'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name of list'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
