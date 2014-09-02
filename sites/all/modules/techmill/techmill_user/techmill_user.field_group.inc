<?php
/**
 * @file
 * techmill_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function techmill_user_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account_settings|user|user|form';
  $field_group->group_name = 'group_account_settings';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Account Settings',
    'weight' => '7',
    'children' => array(
      0 => 'ckeditor',
      1 => 'mollom',
      2 => 'account',
      3 => 'timezone',
      4 => 'contact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Account Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-account-settings field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_account_settings|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_media|user|user|form';
  $field_group->group_name = 'group_social_media';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social Media',
    'weight' => '6',
    'children' => array(
      0 => 'field_user_twitter',
      1 => 'field_user_facebook',
      2 => 'field_user_linkedin',
      3 => 'field_user_github',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Social Media',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-social-media field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_social_media|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_username_title|user|user|default';
  $field_group->group_name = 'group_username_title';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Username Title',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_title',
      1 => 'name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Username Title',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-username-title field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_username_title|user|user|default'] = $field_group;

  return $export;
}
