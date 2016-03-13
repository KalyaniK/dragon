<?php
/**
 * @file
 * dragon_blocks.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function dragon_blocks_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'contact_us_info';
  $mini->category = '';
  $mini->admin_title = 'Contact us info';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8f176c48-b2c8-4d93-b98f-0b791604539a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-74a5af3b-332c-4f6e-b1a6-956876d8e39a';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<br />
<strong><span style="font-size:18px;">Address</span></strong><br />
<br />
&nbsp;&nbsp;&nbsp; Li &amp; Fung Limited<br />
&nbsp;&nbsp;&nbsp; 11th Floor, LiFung Tower<br />
&nbsp;&nbsp;&nbsp; 888 Cheung Sha Wan Road<br />
&nbsp;&nbsp;&nbsp; Kowloon, Hong Kong<br />
&nbsp;<hr /><br />
<strong><span style="font-size:18px;">Media</span></strong><br />
<br />
&nbsp;&nbsp;&nbsp; Contact our global media team.<br />
&nbsp;&nbsp;&nbsp; media@lifung.com<br />
&nbsp;<hr /><br />
<strong><span style="font-size:18px;">Investors</span></strong><br />
<br />
&nbsp;&nbsp;&nbsp; Contact our global investor relations team.<br />
&nbsp; &nbsp; ir@lifung.com<br />
&nbsp;<hr /><br />
<span style="font-size:18px;"><strong>Shareholders</strong></span><br />
<br />
&nbsp;&nbsp;&nbsp; Contact our company secretarial team.<br />
&nbsp;&nbsp;&nbsp; cosec@lifung.com',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '74a5af3b-332c-4f6e-b1a6-956876d8e39a';
    $display->content['new-74a5af3b-332c-4f6e-b1a6-956876d8e39a'] = $pane;
    $display->panels['center'][0] = 'new-74a5af3b-332c-4f6e-b1a6-956876d8e39a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-74a5af3b-332c-4f6e-b1a6-956876d8e39a';
  $mini->display = $display;
  $export['contact_us_info'] = $mini;

  return $export;
}
