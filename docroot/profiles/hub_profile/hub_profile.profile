<?php
/**
 * @file
 * Hooks and code file for Bahstun.gov installation profile.
 */

/**
 * Implements hook_install_tasks().
 */
function hub_profile_install_tasks() {
  return array(
    'set_theme' => array(
      'display' => FALSE,
      'function' => '_hub_profile_set_theme',
    ),
  );
}

/**
 * Callback for set_theme install task.
 *
 * Enable and set the default theme to bahstun. Disable bartik. Ensure
 * seven is the default theme.
 *
 * @see hub_profile_install_tasks
 */
function _hub_profile_set_theme() {
  $enable = array(
    'theme_default' => 'bahstun_hub',
    'admin_theme' => 'bahstun_admin',
    'bahstun',
  );
  theme_enable($enable);
  variable_set('theme_default', 'bahstun_hub');
  variable_set('admin_theme', 'bahstun_admin');
  theme_disable(array('bartik'));
}
