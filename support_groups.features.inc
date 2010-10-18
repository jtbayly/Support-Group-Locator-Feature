<?php

/**
 * Implementation of hook_node_info().
 */
function support_groups_node_info() {
  $items = array(
    'support_group' => array(
      'name' => t('Support Group'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function support_groups_views_api() {
  return array(
    'api' => '2',
  );
}
