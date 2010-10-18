<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function support_groups_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:support_group_search
  $menu_links['primary-links:support_group_search'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'support_group_search',
    'router_path' => 'support_group_search',
    'link_title' => 'Find a Support Group',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Find a Support Group');


  return $menu_links;
}
