<?php
/**
 * @file
 * bos_workflow.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bos_workflow_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'myworkbench__bahstun-workbench';
  $handler->task = 'myworkbench';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 101;
  $handler->conf = array(
    'title' => 'Bahstun Workbench',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'bahstun-workbench',
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'My Workbench';
  $display->uuid = 'cccc2e3b-44f9-4700-b0d3-04c40987803b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f816b827-3c46-42f9-bee1-3e563a9364cb';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'views-bahstun_edits_by_user-block_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f816b827-3c46-42f9-bee1-3e563a9364cb';
  $display->content['new-f816b827-3c46-42f9-bee1-3e563a9364cb'] = $pane;
  $display->panels['top'][0] = 'new-f816b827-3c46-42f9-bee1-3e563a9364cb';
  $pane = new stdClass();
  $pane->pid = 'new-437ff1a6-0ab4-4b0f-afcb-94a97f469568';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'views-bahstun_recent_content-block_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '437ff1a6-0ab4-4b0f-afcb-94a97f469568';
  $display->content['new-437ff1a6-0ab4-4b0f-afcb-94a97f469568'] = $pane;
  $display->panels['top'][1] = 'new-437ff1a6-0ab4-4b0f-afcb-94a97f469568';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['myworkbench__bahstun-workbench'] = $handler;

  return $export;
}
