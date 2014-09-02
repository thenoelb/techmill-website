<?php
/**
 * @file
 * techmill_image.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function techmill_image_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'picture_ckeditor_label';
  $strongarm->value = 'Image size (required)';
  $export['picture_ckeditor_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'picture_ckeditor_mappings';
  $strongarm->value = array(
    'nestor_default' => array(
      'enabled' => 1,
      'weight' => '1',
      'fallback' => 'image_full_width',
    ),
  );
  $export['picture_ckeditor_mappings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'picture_js_scope';
  $strongarm->value = 'footer';
  $export['picture_js_scope'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'picture_updated_to_file_entity_2';
  $strongarm->value = TRUE;
  $export['picture_updated_to_file_entity_2'] = $strongarm;

  return $export;
}
