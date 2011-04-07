<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openlayers_demo_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_presets") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function openlayers_demo_node_info() {
  $items = array(
    'story' => array(
      'name' => t('Story'),
      'module' => 'features',
      'description' => t('A <em>story</em>, similar in form to a <em>page</em>, is ideal for creating and displaying content that informs or engages website visitors. Press releases, site announcements, and informal blog-like entries may all be created with a <em>story</em> entry. By default, a <em>story</em> entry is automatically featured on the site\'s initial home page, and provides the ability to post comments.'),
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
function openlayers_demo_views_api() {
  return array(
    'api' => '2',
  );
}
