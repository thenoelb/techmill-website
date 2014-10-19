<?php
/**
 * @file
 * techmill_image.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function techmill_image_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_caption|bean|image_block|image_wide';
  $field_group->group_name = 'group_image_caption';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'image_block';
  $field_group->mode = 'image_wide';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Caption',
    'weight' => '1',
    'children' => array(
      0 => 'field_image_title',
      1 => 'field_image_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Caption',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-image-caption field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image_caption|bean|image_block|image_wide'] = $field_group;

  return $export;
}
