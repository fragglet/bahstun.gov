<?php
/**
 * @file
 * bos_content_type_topic_page.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function bos_content_type_topic_page_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'wide_2000x460';
  $picture_mapping->machine_name = 'wide_2000x460';
  $picture_mapping->breakpoint_group = 'bahstun';
  $picture_mapping->mapping = array(
    'custom.bahstun.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'resp_wide_2000x460custom_bahstun_wide_1x',
      ),
    ),
    'custom.bahstun.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'resp_wide_2000x460custom_bahstun_desktop_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'resp_wide_2000x460custom_bahstun_desktop_2x',
      ),
    ),
    'custom.bahstun.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'resp_wide_2000x460custom_bahstun_tablet_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'resp_wide_2000x460custom_bahstun_tablet_2x',
      ),
    ),
    'custom.bahstun.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'resp_wide_2000x460custom_bahstun_mobile_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'resp_wide_2000x460custom_bahstun_mobile_2x',
      ),
    ),
  );
  $export['wide_2000x460'] = $picture_mapping;

  return $export;
}
