<?php
/**
 * @file
 * techmill_image.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function techmill_image_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Nestor Default';
  $picture_mapping->machine_name = 'nestor_default';
  $picture_mapping->breakpoint_group = 'default';
  $picture_mapping->mapping = array(
    'custom.user.xl' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '169_xl_1365x768',
      ),
    ),
    'custom.user.lg' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '169_large_1140x641',
      ),
    ),
    'custom.user.md' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '169_medium_940x529',
      ),
    ),
    'custom.user.sm' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '169_small_720x405',
      ),
    ),
    'custom.user.xs' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '169_xs_480x270',
      ),
    ),
  );
  $export['nestor_default'] = $picture_mapping;

  return $export;
}
