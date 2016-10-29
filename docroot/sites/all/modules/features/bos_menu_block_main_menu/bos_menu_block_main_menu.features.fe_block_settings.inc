<?php
/**
 * @file
 * bos_menu_block_main_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bos_menu_block_main_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bahstun' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bahstun',
        'weight' => 0,
      ),
      'bahstun_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bahstun_admin',
        'weight' => 0,
      ),
      'bahstun_hub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bahstun_hub',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
