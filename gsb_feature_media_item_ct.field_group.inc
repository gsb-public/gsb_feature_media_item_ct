<?php
/**
 * @file
 * gsb_feature_media_item_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_media_item_ct_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication_date|node|media_item|form';
  $field_group->group_name = 'group_publication_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication Date',
    'weight' => '7',
    'children' => array(
      0 => 'field_month',
      1 => 'field_pub_date_day',
      2 => 'field_year_of_publication',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Publication Date',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_publication_date|node|media_item|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Publication Date');

  return $field_groups;
}
