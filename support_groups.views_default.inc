<?php

/**
 * Implementation of hook_views_default_views().
 */
function support_groups_views_default_views() {
  $views = array();

  // Exported view: support_groups
  $view = new view;
  $view->name = 'support_groups';
  $view->description = 'This view will lookup nearby support groups based on postal code.';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'postal_code' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'postal_code',
      'table' => 'location',
      'field' => 'postal_code',
      'relationship' => 'none',
    ),
    'distance' => array(
      'label' => 'Distance',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'origin' => 'tied',
      'units' => 'mi',
      'latitude' => '',
      'longitude' => '',
      'postal_code' => '',
      'country' => '',
      'php_code' => '',
      'nid_arg' => '',
      'nid_loc_field' => 'node',
      'uid_arg' => '',
      'exclude' => 0,
      'id' => 'distance',
      'table' => 'location',
      'field' => 'distance',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'distance' => array(
      'order' => 'ASC',
      'origin' => 'tied',
      'latitude' => '',
      'longitude' => '',
      'postal_code' => '',
      'country' => '',
      'php_code' => '',
      'nid_arg' => '',
      'nid_loc_field' => 'node',
      'uid_arg' => '',
      'id' => 'distance',
      'table' => 'location',
      'field' => 'distance',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'support_group' => 'support_group',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'distance' => array(
      'operator' => 'mbr',
      'value' => array(
        'latitude' => '',
        'longitude' => '',
        'postal_code' => '',
        'country' => '',
        'php_code' => '',
        'nid_arg' => '',
        'nid_loc_field' => 'node',
        'uid_arg' => '',
        'search_distance' => '20',
        'search_units' => 'mile',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'distance_op',
        'identifier' => 'distance',
        'label' => '',
        'user_location_choose' => 0,
        'optional' => 1,
        'remember' => 0,
      ),
      'identifier' => 'dist',
      'origin' => 'postal_default',
      'id' => 'distance',
      'table' => 'location',
      'field' => 'distance',
      'relationship' => 'none',
      'gmap_macro' => '',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Find Support Groups Near You');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('empty', 'Sorry. We couldn\'t find any support groups near you.');
  $handler->override_option('empty_format', '1');
  $handler->override_option('use_more', 0);
  $handler->override_option('use_more_always', 0);
  $handler->override_option('row_options', array(
    'inline' => array(
      'title' => 'title',
      'postal_code' => 'postal_code',
    ),
    'separator' => '-',
    'hide_empty' => 0,
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'support_group_search');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Find a Support Group',
    'description' => '',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
