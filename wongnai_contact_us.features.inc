<?php
/**
 * @file
 * wongnai_contact_us.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function wongnai_contact_us_node_info() {
  $items = array(
    'contact_us' => array(
      'name' => t('Contact Us'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
