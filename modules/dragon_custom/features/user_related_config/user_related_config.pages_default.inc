<?php
/**
 * @file
 * user_related_config.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function user_related_config_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'my_dashboard';
  $page->task = 'page';
  $page->admin_title = 'My Dashboard';
  $page->admin_description = '';
  $page->path = 'dashboard';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_my_dashboard__panel';
  $handler->task = 'page';
  $handler->subtask = 'my_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'My Dashboard Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'My Dashboard';
  $display->uuid = 'ba8e90a3-afa4-4ad8-b1e2-a2d36fc71895';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fc262739-1bf6-4f66-b9fe-532e7e70139e';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'My Details',
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
    $pane->uuid = 'fc262739-1bf6-4f66-b9fe-532e7e70139e';
    $display->content['new-fc262739-1bf6-4f66-b9fe-532e7e70139e'] = $pane;
    $display->panels['left'][0] = 'new-fc262739-1bf6-4f66-b9fe-532e7e70139e';
    $pane = new stdClass();
    $pane->pid = 'new-5365114c-191e-41f4-a578-e2e588a40317';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'comment-recent';
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
    $pane->uuid = '5365114c-191e-41f4-a578-e2e588a40317';
    $display->content['new-5365114c-191e-41f4-a578-e2e588a40317'] = $pane;
    $display->panels['left'][1] = 'new-5365114c-191e-41f4-a578-e2e588a40317';
    $pane = new stdClass();
    $pane->pid = 'new-0ebaf3f1-5348-4b91-8c57-fd96bf90ae19';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'customer_dashboard';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = '0ebaf3f1-5348-4b91-8c57-fd96bf90ae19';
    $display->content['new-0ebaf3f1-5348-4b91-8c57-fd96bf90ae19'] = $pane;
    $display->panels['right'][0] = 'new-0ebaf3f1-5348-4b91-8c57-fd96bf90ae19';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['my_dashboard'] = $page;

  return $pages;

}
