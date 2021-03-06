<?php
/**
 * @file
 * bos_component_video.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bos_component_video_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'paragraphs_item-video-field_extra_info'.
  $field_instances['paragraphs_item-video-field_extra_info'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The ID of the video you want to embed. Currently only supports Youtube. If given the Youtube URL https://www.youtube.com/watch?v=bTqVqk7FSmY, then "bTqVqk7FSmY" would be ID.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_extra_info',
    'label' => 'Video ID',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video-field_image'.
  $field_instances['paragraphs_item-video-field_image'] = array(
    'bundle' => 'video',
    'deleted' => 0,
    'description' => 'Large scale image to use as the image for the video.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => '',
          'lazyload_aspect_ratio' => '',
          'picture_mapping' => 'wide_2000x700',
        ),
        'type' => 'picture',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_image',
    'label' => 'Poster Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'video-image-[current-date:file_directory_storage_date]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '2000x700',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'bahstun_media_browser_tabs--bahstun_media' => 0,
          'bahstun_media_browser_tabs--icons' => 0,
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video-field_photo_credit'.
  $field_instances['paragraphs_item-video-field_photo_credit'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Give credit to the department or person that created this video. Examples:

By Marty Walsh
By <a href="/departments/public-works">Public Works</a> (By &lt;a href=&quot;/departments/public-works&quot;&gt;Public Works&lt;/a&gt;)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_photo_credit',
    'label' => 'Video Credit',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video-field_short_title'.
  $field_instances['paragraphs_item-video-field_short_title'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This will display as the subnav on topic pages.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_short_title',
    'label' => 'Short Title',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video-field_title'.
  $field_instances['paragraphs_item-video-field_title'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Give credit to the department or person that created this video. Examples:

By Marty Walsh
By <a href="/departments/public-works">Public Works</a> (By &lt;a href=&quot;/departments/public-works&quot;&gt;Public Works&lt;/a&gt;)');
  t('Large scale image to use as the image for the video.');
  t('Poster Image');
  t('Short Title');
  t('The ID of the video you want to embed. Currently only supports Youtube. If given the Youtube URL https://www.youtube.com/watch?v=bTqVqk7FSmY, then "bTqVqk7FSmY" would be ID.');
  t('This will display as the subnav on topic pages.');
  t('Title');
  t('Video Credit');
  t('Video ID');

  return $field_instances;
}
