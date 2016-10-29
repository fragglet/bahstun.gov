<?php
/**
 * @file
 * bos_settings_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bos_settings_theme_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_bahstun_admin_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'style_checkboxes' => 1,
    'display_icons_config' => 1,
    'rounded_buttons' => 1,
    'sticky_actions' => 0,
    'avoid_custom_font' => 0,
    'use_custom_media_queries' => 0,
    'media_query_mobile' => 'only screen and (max-width: 480px)',
    'media_query_tablet' => 'only screen and (min-width : 481px) and (max-width : 1024px)',
    'custom_css' => 0,
    'adminimal_theme_skin' => 'default',
    'jquery_update_jquery_version' => 'default',
  );
  $export['theme_bahstun_admin_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_bahstun_public_settings';
  $strongarm->value = array(
    'toggle_name' => 1,
    'toggle_favicon' => 1,
    'toggle_secondary_menu' => 1,
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bahstun_breadcrumb' => 'yes',
    'bahstun_breadcrumb_separator' => ' › ',
    'bahstun_breadcrumb_home' => 1,
    'bahstun_breadcrumb_trailing' => 0,
    'bahstun_breadcrumb_title' => 0,
    'bahstun_skip_link_anchor' => 'main-menu',
    'bahstun_skip_link_text' => 'Jump to navigation',
    'bahstun_meta' => array(
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'jquery_update_jquery_version' => '',
  );
  $export['theme_bahstun_public_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_bahstun_settings';
  $strongarm->value = array(
    'toggle_name' => 1,
    'toggle_favicon' => 1,
    'toggle_secondary_menu' => 1,
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bahstun_breadcrumb' => 'yes',
    'bahstun_breadcrumb_separator' => ' › ',
    'bahstun_breadcrumb_home' => 1,
    'bahstun_breadcrumb_trailing' => 0,
    'bahstun_breadcrumb_title' => 0,
    'bahstun_layout' => NULL,
    'bahstun_skip_link_anchor' => 'main-menu',
    'bahstun_skip_link_text' => 'Jump to navigation',
    'bahstun_meta' => array(
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'jquery_update_jquery_version' => '',
  );
  $export['theme_bahstun_settings'] = $strongarm;

  return $export;
}
