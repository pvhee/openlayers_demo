<?php

/**
 * Implementation of hook_views_default_views().
 */
function openlayers_demo_views_default_views() {
  $views = array();

  // Exported view: story_map
  $view = new view;
  $view->name = 'story_map';
  $view->description = 'Map of stories';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('style_plugin', 'openlayers_map');
  $handler->override_option('style_options', array(
    'preset' => 'story_map',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'stories');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Stories',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  // Exported view: story_map_data
  $view = new view;
  $view->name = 'story_map_data';
  $view->description = 'Story map data';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_location_openlayers_wkt' => array(
      'label' => 'Location',
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
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'openlayers_wkt',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_location_openlayers_wkt',
      'table' => 'node_data_field_location',
      'field' => 'field_location_openlayers_wkt',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => 'Title',
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
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Stories');
  $handler->override_option('style_plugin', 'openlayers_data');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'data_source' => array(
      'value' => 'openlayers_wkt',
      'other_lat' => 'field_location_openlayers_wkt',
      'other_lon' => 'field_location_openlayers_wkt',
      'openlayers_wkt' => 'field_location_openlayers_wkt',
      'other_top' => 'field_location_openlayers_wkt',
      'other_right' => 'field_location_openlayers_wkt',
      'other_bottom' => 'field_location_openlayers_wkt',
      'other_left' => 'field_location_openlayers_wkt',
      'name_field' => 'title',
      'description_field' => '',
    ),
  ));
  $handler = $view->new_display('openlayers', 'OpenLayers Data', 'openlayers_1');
  $handler->override_option('row_plugin', '');
  $handler->override_option('displays', array());

  $views[$view->name] = $view;

  return $views;
}
