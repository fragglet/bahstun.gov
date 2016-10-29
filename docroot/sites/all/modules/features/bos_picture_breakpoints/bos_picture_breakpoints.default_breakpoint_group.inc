<?php
/**
 * @file
 * bos_picture_breakpoints.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function bos_picture_breakpoints_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'bahstun';
  $breakpoint_group->name = 'Bahstun';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.bahstun.wide',
    1 => 'custom.bahstun.desktop',
    2 => 'custom.bahstun.tablet',
    3 => 'custom.bahstun.mobile',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 1;
  $export['bahstun'] = $breakpoint_group;

  return $export;
}
