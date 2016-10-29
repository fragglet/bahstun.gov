<?php
/**
 * @file
 * bos_picture_breakpoints.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function bos_picture_breakpoints_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.bahstun.desktop';
  $breakpoint->name = 'desktop';
  $breakpoint->breakpoint = '(min-width: 768px)';
  $breakpoint->source = 'bahstun';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '2x' => '2x',
    '1x' => '1x',
  );
  $export['custom.bahstun.desktop'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.bahstun.mobile';
  $breakpoint->name = 'mobile';
  $breakpoint->breakpoint = '(min-width: 0px)';
  $breakpoint->source = 'bahstun';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '2x' => '2x',
    '1x' => '1x',
  );
  $export['custom.bahstun.mobile'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.bahstun.tablet';
  $breakpoint->name = 'tablet';
  $breakpoint->breakpoint = '(min-width: 480px)';
  $breakpoint->source = 'bahstun';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '2x' => '2x',
    '1x' => '1x',
  );
  $export['custom.bahstun.tablet'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.bahstun.wide';
  $breakpoint->name = 'wide';
  $breakpoint->breakpoint = '(min-width: 1440px)';
  $breakpoint->source = 'bahstun';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.bahstun.wide'] = $breakpoint;

  return $export;
}
