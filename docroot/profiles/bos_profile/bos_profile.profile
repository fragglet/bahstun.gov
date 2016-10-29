<?php
/**
 * @file
 * Hooks and code file for Bahstun.gov installation profile.
 */

/**
 * Implements hook_install_tasks().
 */
function bos_profile_install_tasks() {
  return array(
    'set_theme' => array(
      'display' => FALSE,
      'function' => '_bos_profile_set_theme',
    ),
  );
}


/**
 * Callback for set_theme install task.
 *
 * Enable and set the default theme to bahstun_public. Enable bahstun theme. Disable bartik.
 *
 * @see bos_profile_install_tasks
 */
function _bos_profile_set_theme() {
  $enable = array(
    'theme_default' => 'bahstun_public',
    'admin_theme' => 'bahstun_admin',
    'bahstun',
  );
  theme_enable($enable);
  variable_set('theme_default', 'bahstun_public');
  variable_set('admin_theme', 'bahstun_admin');
  foreach ($enable as $var => $theme) {
    if (!is_numeric($var)) {
      variable_set($var, $theme);
    }
  }
  theme_disable(array('bartik'));
}
