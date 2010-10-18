<?php

/**
 * Implementation of hook_content_default_fields().
 */
function support_groups_content_default_fields() {
  $fields = array();

  // Exported field: field_email
  $fields['support_group-field_email'] = array(
    'field_name' => 'field_email',
    'type_name' => 'support_group',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      '2' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'contact',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'contact',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'contact',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '1',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Contact email address',
      'weight' => '31',
      'description' => 'This email address will not be revealed publicly. It will only be used for sending emails directly from the site for users who are interested in finding out about this support group.',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_group_location
  $fields['support_group-field_group_location'] = array(
    'field_name' => 'field_group_location',
    'type_name' => 'support_group',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      '2' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
    ),
    'widget_active' => '1',
    'type' => 'location',
    'required' => '1',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'name' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '2',
          ),
          'street' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '4',
          ),
          'additional' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '6',
          ),
          'city' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '8',
          ),
          'province' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '10',
          ),
          'postal_code' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '12',
          ),
          'country' => array(
            'collect' => '4',
            'default' => 'us',
            'weight' => '14',
          ),
          'locpick' => array(
            'collect' => '0',
            'weight' => '20',
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'name' => 'name',
          'additional' => 'additional',
          'country' => 'country',
          'locpick' => 'locpick',
          'province_name' => 'province_name',
          'country_name' => 'country_name',
          'map_link' => 'map_link',
          'coords' => 'coords',
          'street' => 0,
          'city' => 0,
          'province' => 0,
          'postal_code' => 0,
        ),
      ),
    ),
    'gmap_macro' => '[gmap ]',
    'gmap_marker' => 'small blue',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'street' => '',
          'city' => '',
          'province' => '',
          'postal_code' => '',
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'name' => array(
                  'default' => '',
                  'collect' => '0',
                  'weight' => '2',
                ),
                'street' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '4',
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => '0',
                  'weight' => '6',
                ),
                'city' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '8',
                ),
                'province' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '10',
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '12',
                ),
                'country' => array(
                  'default' => 'us',
                  'collect' => '4',
                  'weight' => '14',
                ),
                'locpick' => array(
                  'default' => FALSE,
                  'collect' => '0',
                  'weight' => '20',
                  'nodiff' => TRUE,
                ),
                'cck_preview_in_progress' => array(
                  'default' => TRUE,
                ),
                'location_settings' => array(
                  'default' => array(
                    'form' => array(
                      'fields' => array(
                        'name' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '2',
                        ),
                        'street' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '4',
                        ),
                        'additional' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '6',
                        ),
                        'city' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '8',
                        ),
                        'province' => array(
                          'default' => '',
                          'collect' => '4',
                          'weight' => '10',
                        ),
                        'postal_code' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '12',
                        ),
                        'country' => array(
                          'default' => 'us',
                          'collect' => '4',
                          'weight' => '14',
                        ),
                        'locpick' => array(
                          'default' => FALSE,
                          'collect' => '0',
                          'weight' => '20',
                          'nodiff' => TRUE,
                        ),
                        'cck_preview_in_progress' => array(
                          'default' => TRUE,
                        ),
                        'location_settings' => array(
                          'default' => array(
                            'form' => array(
                              'fields' => array(
                                'name' => array(
                                  'default' => '',
                                  'collect' => '0',
                                  'weight' => '2',
                                ),
                                'street' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '4',
                                ),
                                'additional' => array(
                                  'default' => '',
                                  'collect' => '0',
                                  'weight' => '6',
                                ),
                                'city' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '8',
                                ),
                                'province' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '10',
                                ),
                                'postal_code' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '12',
                                ),
                                'country' => array(
                                  'default' => 'us',
                                  'collect' => '4',
                                  'weight' => '14',
                                ),
                                'locpick' => array(
                                  'default' => FALSE,
                                  'collect' => '0',
                                  'weight' => '20',
                                  'nodiff' => TRUE,
                                ),
                                'cck_preview_in_progress' => array(
                                  'default' => TRUE,
                                ),
                                'location_settings' => array(
                                  'default' => array(
                                    'form' => array(
                                      'fields' => array(
                                        'name' => array(
                                          'default' => '',
                                          'collect' => '0',
                                          'weight' => '2',
                                        ),
                                        'street' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '4',
                                        ),
                                        'additional' => array(
                                          'default' => '',
                                          'collect' => '0',
                                          'weight' => '6',
                                        ),
                                        'city' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '8',
                                        ),
                                        'province' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '10',
                                        ),
                                        'postal_code' => array(
                                          'default' => '',
                                          'collect' => '0',
                                          'weight' => '12',
                                        ),
                                        'country' => array(
                                          'default' => 'us',
                                          'collect' => '4',
                                          'weight' => '14',
                                        ),
                                        'locpick' => array(
                                          'default' => array(
                                            'user_latitude' => '',
                                            'user_longitude' => '',
                                          ),
                                          'collect' => '0',
                                          'weight' => '20',
                                          'nodiff' => TRUE,
                                        ),
                                        'cck_preview_in_progress' => array(
                                          'default' => TRUE,
                                        ),
                                        'location_settings' => array(
                                          'default' => array(
                                            'form' => array(
                                              'fields' => array(
                                                'name' => array(
                                                  'default' => '',
                                                  'collect' => '0',
                                                  'weight' => '2',
                                                ),
                                                'street' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '4',
                                                ),
                                                'additional' => array(
                                                  'default' => '',
                                                  'collect' => '0',
                                                  'weight' => '6',
                                                ),
                                                'city' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '8',
                                                ),
                                                'province' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '10',
                                                ),
                                                'postal_code' => array(
                                                  'default' => '',
                                                  'collect' => '0',
                                                  'weight' => '12',
                                                ),
                                                'country' => array(
                                                  'default' => 'us',
                                                  'collect' => '4',
                                                  'weight' => '14',
                                                ),
                                                'locpick' => array(
                                                  'default' => array(
                                                    'user_latitude' => '',
                                                    'user_longitude' => '',
                                                  ),
                                                  'collect' => '4',
                                                  'weight' => '20',
                                                  'nodiff' => TRUE,
                                                ),
                                                'cck_preview_in_progress' => array(
                                                  'default' => TRUE,
                                                ),
                                                'location_settings' => array(
                                                  'default' => array(
                                                    'form' => array(
                                                      'fields' => array(
                                                        'name' => array(
                                                          'default' => '',
                                                          'collect' => '0',
                                                          'weight' => '2',
                                                        ),
                                                        'street' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '4',
                                                        ),
                                                        'additional' => array(
                                                          'default' => '',
                                                          'collect' => '0',
                                                          'weight' => '6',
                                                        ),
                                                        'city' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '8',
                                                        ),
                                                        'province' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '10',
                                                        ),
                                                        'postal_code' => array(
                                                          'default' => '',
                                                          'collect' => '0',
                                                          'weight' => '12',
                                                        ),
                                                        'country' => array(
                                                          'default' => 'us',
                                                          'collect' => '4',
                                                          'weight' => '14',
                                                        ),
                                                        'locpick' => array(
                                                          'default' => array(
                                                            'user_latitude' => '',
                                                            'user_longitude' => '',
                                                          ),
                                                          'collect' => '1',
                                                          'weight' => '20',
                                                          'nodiff' => TRUE,
                                                        ),
                                                        'cck_preview_in_progress' => array(
                                                          'default' => TRUE,
                                                        ),
                                                        'location_settings' => array(
                                                          'default' => array(
                                                            'form' => array(
                                                              'fields' => array(
                                                                'name' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '2',
                                                                ),
                                                                'street' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '4',
                                                                ),
                                                                'additional' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '6',
                                                                ),
                                                                'city' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '8',
                                                                ),
                                                                'province' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '10',
                                                                ),
                                                                'postal_code' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '12',
                                                                ),
                                                                'country' => array(
                                                                  'default' => 'us',
                                                                  'collect' => '1',
                                                                  'weight' => '14',
                                                                ),
                                                                'locpick' => array(
                                                                  'default' => array(
                                                                    'user_latitude' => '',
                                                                    'user_longitude' => '',
                                                                  ),
                                                                  'collect' => '1',
                                                                  'weight' => '20',
                                                                  'nodiff' => TRUE,
                                                                ),
                                                                'cck_preview_in_progress' => array(
                                                                  'default' => TRUE,
                                                                ),
                                                                'location_settings' => array(
                                                                  'default' => array(
                                                                    'form' => array(
                                                                      'fields' => array(
                                                                        'lid' => array(
                                                                          'default' => FALSE,
                                                                        ),
                                                                        'name' => array(
                                                                          'default' => '',
                                                                          'collect' => 1,
                                                                          'weight' => 2,
                                                                        ),
                                                                        'street' => array(
                                                                          'default' => '',
                                                                          'collect' => 1,
                                                                          'weight' => 4,
                                                                        ),
                                                                        'additional' => array(
                                                                          'default' => '',
                                                                          'collect' => 1,
                                                                          'weight' => 6,
                                                                        ),
                                                                        'city' => array(
                                                                          'default' => '',
                                                                          'collect' => 0,
                                                                          'weight' => 8,
                                                                        ),
                                                                        'province' => array(
                                                                          'default' => '',
                                                                          'collect' => 0,
                                                                          'weight' => 10,
                                                                        ),
                                                                        'postal_code' => array(
                                                                          'default' => '',
                                                                          'collect' => 0,
                                                                          'weight' => 12,
                                                                        ),
                                                                        'country' => array(
                                                                          'default' => 'us',
                                                                          'collect' => 1,
                                                                          'weight' => 14,
                                                                        ),
                                                                        'locpick' => array(
                                                                          'default' => FALSE,
                                                                          'collect' => 1,
                                                                          'weight' => 20,
                                                                          'nodiff' => TRUE,
                                                                        ),
                                                                        'latitude' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'longitude' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'source' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'is_primary' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'delete_location' => array(
                                                                          'default' => FALSE,
                                                                          'nodiff' => TRUE,
                                                                        ),
                                                                      ),
                                                                    ),
                                                                  ),
                                                                ),
                                                                'lid' => array(
                                                                  'default' => FALSE,
                                                                ),
                                                                'latitude' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'longitude' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'source' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'is_primary' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'delete_location' => array(
                                                                  'default' => FALSE,
                                                                  'nodiff' => TRUE,
                                                                ),
                                                              ),
                                                            ),
                                                            'display' => array(
                                                              'hide' => array(
                                                                'name' => 0,
                                                                'street' => 0,
                                                                'additional' => 0,
                                                                'city' => 0,
                                                                'province' => 0,
                                                                'postal_code' => 0,
                                                                'country' => 0,
                                                                'locpick' => 0,
                                                                'province_name' => 0,
                                                                'country_name' => 0,
                                                                'map_link' => 0,
                                                                'coords' => 0,
                                                              ),
                                                            ),
                                                          ),
                                                        ),
                                                        'lid' => array(
                                                          'default' => FALSE,
                                                        ),
                                                        'latitude' => array(
                                                          'default' => 0,
                                                        ),
                                                        'longitude' => array(
                                                          'default' => 0,
                                                        ),
                                                        'source' => array(
                                                          'default' => 0,
                                                        ),
                                                        'is_primary' => array(
                                                          'default' => 0,
                                                        ),
                                                        'delete_location' => array(
                                                          'default' => FALSE,
                                                          'nodiff' => TRUE,
                                                        ),
                                                      ),
                                                    ),
                                                    'display' => array(
                                                      'hide' => array(
                                                        'name' => 'name',
                                                        'additional' => 'additional',
                                                        'country' => 'country',
                                                        'locpick' => 'locpick',
                                                        'province_name' => 'province_name',
                                                        'country_name' => 'country_name',
                                                        'map_link' => 'map_link',
                                                        'coords' => 'coords',
                                                        'street' => 0,
                                                        'city' => 0,
                                                        'province' => 0,
                                                        'postal_code' => 0,
                                                      ),
                                                    ),
                                                  ),
                                                ),
                                                'lid' => array(
                                                  'default' => FALSE,
                                                ),
                                                'latitude' => array(
                                                  'default' => 0,
                                                ),
                                                'longitude' => array(
                                                  'default' => 0,
                                                ),
                                                'source' => array(
                                                  'default' => 0,
                                                ),
                                                'is_primary' => array(
                                                  'default' => 0,
                                                ),
                                                'delete_location' => array(
                                                  'default' => FALSE,
                                                  'nodiff' => TRUE,
                                                ),
                                              ),
                                            ),
                                            'display' => array(
                                              'hide' => array(
                                                'name' => 'name',
                                                'additional' => 'additional',
                                                'country' => 'country',
                                                'locpick' => 'locpick',
                                                'province_name' => 'province_name',
                                                'country_name' => 'country_name',
                                                'map_link' => 'map_link',
                                                'coords' => 'coords',
                                                'street' => 0,
                                                'city' => 0,
                                                'province' => 0,
                                                'postal_code' => 0,
                                              ),
                                            ),
                                          ),
                                        ),
                                        'lid' => array(
                                          'default' => FALSE,
                                        ),
                                        'latitude' => array(
                                          'default' => 0,
                                        ),
                                        'longitude' => array(
                                          'default' => 0,
                                        ),
                                        'source' => array(
                                          'default' => 0,
                                        ),
                                        'is_primary' => array(
                                          'default' => 0,
                                        ),
                                        'delete_location' => array(
                                          'default' => FALSE,
                                          'nodiff' => TRUE,
                                        ),
                                      ),
                                    ),
                                    'display' => array(
                                      'hide' => array(
                                        'name' => 'name',
                                        'additional' => 'additional',
                                        'country' => 'country',
                                        'locpick' => 'locpick',
                                        'province_name' => 'province_name',
                                        'country_name' => 'country_name',
                                        'map_link' => 'map_link',
                                        'coords' => 'coords',
                                        'street' => 0,
                                        'city' => 0,
                                        'province' => 0,
                                        'postal_code' => 0,
                                      ),
                                    ),
                                  ),
                                ),
                                'lid' => array(
                                  'default' => FALSE,
                                ),
                                'latitude' => array(
                                  'default' => 0,
                                ),
                                'longitude' => array(
                                  'default' => 0,
                                ),
                                'source' => array(
                                  'default' => 0,
                                ),
                                'is_primary' => array(
                                  'default' => 0,
                                ),
                                'delete_location' => array(
                                  'default' => FALSE,
                                  'nodiff' => TRUE,
                                ),
                              ),
                            ),
                            'display' => array(
                              'hide' => array(
                                'name' => 'name',
                                'additional' => 'additional',
                                'country' => 'country',
                                'locpick' => 'locpick',
                                'province_name' => 'province_name',
                                'country_name' => 'country_name',
                                'map_link' => 'map_link',
                                'coords' => 'coords',
                                'street' => 0,
                                'city' => 0,
                                'province' => 0,
                                'postal_code' => 0,
                              ),
                            ),
                          ),
                        ),
                        'lid' => array(
                          'default' => FALSE,
                        ),
                        'latitude' => array(
                          'default' => 0,
                        ),
                        'longitude' => array(
                          'default' => 0,
                        ),
                        'source' => array(
                          'default' => 0,
                        ),
                        'is_primary' => array(
                          'default' => 0,
                        ),
                        'delete_location' => array(
                          'default' => FALSE,
                          'nodiff' => TRUE,
                        ),
                      ),
                    ),
                    'display' => array(
                      'hide' => array(
                        'name' => 'name',
                        'additional' => 'additional',
                        'country' => 'country',
                        'locpick' => 'locpick',
                        'province_name' => 'province_name',
                        'country_name' => 'country_name',
                        'map_link' => 'map_link',
                        'coords' => 'coords',
                        'street' => 0,
                        'city' => 0,
                        'province' => 0,
                        'postal_code' => 0,
                      ),
                    ),
                  ),
                ),
                'lid' => array(
                  'default' => FALSE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
              ),
            ),
            'display' => array(
              'hide' => array(
                'name' => 'name',
                'additional' => 'additional',
                'country' => 'country',
                'locpick' => 'locpick',
                'province_name' => 'province_name',
                'country_name' => 'country_name',
                'map_link' => 'map_link',
                'coords' => 'coords',
                'street' => 0,
                'city' => 0,
                'province' => 0,
                'postal_code' => 0,
              ),
            ),
          ),
          'country' => 'us',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Group location',
      'weight' => '31',
      'description' => 'This address will not be revealed publicly. It will only be used to find which support groups are closest for a given user.',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact email address');
  t('Group location');

  return $fields;
}
