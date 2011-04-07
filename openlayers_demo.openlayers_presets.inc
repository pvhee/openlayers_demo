<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function openlayers_demo_openlayers_presets() {
  $export = array();
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'story_map';
  $openlayers_presets->title = 'Stories map';
  $openlayers_presets->description = 'Displays stories';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '13.007812499481, 52.589700767207',
        'zoom' => '3',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'story_map_data_openlayers_1' => 'story_map_data_openlayers_1',
        ),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'story_map_data_openlayers_1',
        'point_zoom_level' => '5',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'story_map_data_openlayers_1' => 'story_map_data_openlayers_1',
    ),
    'layer_styles' => array(),
    'layer_activated' => array(
      'story_map_data_openlayers_1' => 'story_map_data_openlayers_1',
    ),
    'layer_switcher' => array(
      'story_map_data_openlayers_1' => 'story_map_data_openlayers_1',
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );

  $export['story_map'] = $openlayers_presets;
  return $export;
}
