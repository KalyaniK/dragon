<?php
/**
 * @file
 * dragon_panels.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function dragon_panels_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'dragon_footer';
  $mini->category = '';
  $mini->admin_title = 'Dragon Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible:dragon_footer';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column_1' => NULL,
      'column_2' => NULL,
      'column_3' => NULL,
      'column_4' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8b459147-053c-403e-9fbb-d0b7e076b59e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3a4bb6c8-73e3-4161-ac01-8280d647eba2';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="dragon-footer-links dragon-footer-content"><a href="/dragon-dev/sitemap">Sitemap</a> | <a href="/dragon-dev/disclaimer">Disclaimer</a> | © 2015 Dragon Asia. All Rights Reserved.</div>',
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
    $pane->uuid = '3a4bb6c8-73e3-4161-ac01-8280d647eba2';
    $display->content['new-3a4bb6c8-73e3-4161-ac01-8280d647eba2'] = $pane;
    $display->panels['bottom'][0] = 'new-3a4bb6c8-73e3-4161-ac01-8280d647eba2';
    $pane = new stdClass();
    $pane->pid = 'new-f479cc50-81a8-4364-af70-b588bbb0e806';
    $pane->panel = 'column_1';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '67',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
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
    $pane->uuid = 'f479cc50-81a8-4364-af70-b588bbb0e806';
    $display->content['new-f479cc50-81a8-4364-af70-b588bbb0e806'] = $pane;
    $display->panels['column_1'][0] = 'new-f479cc50-81a8-4364-af70-b588bbb0e806';
    $pane = new stdClass();
    $pane->pid = 'new-ed5e7540-18f8-46f3-babd-b0819f4757e1';
    $pane->panel = 'column_2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Follow us',
      'body' => '<a class="dragon-footer-icon" href="http://www.linkedin.com/company/dragon-asia-hk-ltd" target="_blank"><span class="fa-stack fa-lg"><i class="fa fa-circle fa-stack-2x fa-inverse"></i><i class="fa fa-linkedin fa-stack-1x"></i></span></a> <a class="dragon-footer-icon" href="https://www.facebook.com/groups/90532451133/" target="_blank"><span class="fa-stack fa-lg"><i class="fa fa-circle fa-stack-2x fa-inverse"></i><i class="fa fa-facebook fa-stack-1x"></i></span></a> <a class="dragon-footer-icon" href="https://twitter.com/DragonAsiaHK1" target="_blank"><span class="fa-stack fa-lg"><i class="fa fa-circle fa-stack-2x fa-inverse"></i><i class="fa fa-twitter fa-stack-1x"></i></span></a>',
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
    $pane->uuid = 'ed5e7540-18f8-46f3-babd-b0819f4757e1';
    $display->content['new-ed5e7540-18f8-46f3-babd-b0819f4757e1'] = $pane;
    $display->panels['column_2'][0] = 'new-ed5e7540-18f8-46f3-babd-b0819f4757e1';
    $pane = new stdClass();
    $pane->pid = 'new-27da14b5-c910-4413-af49-3bef7f4e2611';
    $pane->panel = 'column_3';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Download Company Presentation ',
      'body' => '<div class="item-list"><ul class="list-unstyled"><li class="first last"><a class="btn btn-mini " href="/dragon-dev/"><span class="icon-text">File A.pdf</span></a></li></ul></div>',
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
    $pane->uuid = '27da14b5-c910-4413-af49-3bef7f4e2611';
    $display->content['new-27da14b5-c910-4413-af49-3bef7f4e2611'] = $pane;
    $display->panels['column_3'][0] = 'new-27da14b5-c910-4413-af49-3bef7f4e2611';
    $pane = new stdClass();
    $pane->pid = 'new-f5d86c3c-c369-48b0-9c33-a7983822ac09';
    $pane->panel = 'column_4';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Help',
      'body' => '<div class="item-list"><ul class="list-unstyled"><li class="first"><a class="btn btn-mini " href="/dragon-dev/quote"><span class="icon-text">Get a quote</span></a></li><li class="last"><a class="btn btn-mini " href="/dragon-dev/chat"><span class="icon-text">Live Chat</span></a></li></ul></div>',
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
    $pane->uuid = 'f5d86c3c-c369-48b0-9c33-a7983822ac09';
    $display->content['new-f5d86c3c-c369-48b0-9c33-a7983822ac09'] = $pane;
    $display->panels['column_4'][0] = 'new-f5d86c3c-c369-48b0-9c33-a7983822ac09';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['dragon_footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'dragon_get_a_quote';
  $mini->category = '';
  $mini->admin_title = 'Dragon Get a Quote';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'style' => 'default',
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8a6f9e23-a2a6-49c3-9adb-ceaf0050a5da';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-609a26d8-5705-44ff-aea2-bf79c0fab671';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '66',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dragon-mini-panel-middle',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '609a26d8-5705-44ff-aea2-bf79c0fab671';
    $display->content['new-609a26d8-5705-44ff-aea2-bf79c0fab671'] = $pane;
    $display->panels['middle'][0] = 'new-609a26d8-5705-44ff-aea2-bf79c0fab671';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['dragon_get_a_quote'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'navigation_5_small_actions';
  $mini->category = '';
  $mini->admin_title = 'Navigation 5 small actions';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible:dragon_5_columns';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column_1' => NULL,
      'column_2' => NULL,
      'column_3' => NULL,
      'column_4' => NULL,
      'column_5' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b7a55a57-7e1c-4521-bd61-6fb9a28997ad';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a00b670c-e923-4bf0-90bf-fd72ded36d70';
    $pane->panel = 'column_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><img alt="" src="/dragon-lang/sites/default/files/panel-block/1432137000328.png" style="width: 360px; height: 203px;" /></p>',
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
    $pane->uuid = 'a00b670c-e923-4bf0-90bf-fd72ded36d70';
    $display->content['new-a00b670c-e923-4bf0-90bf-fd72ded36d70'] = $pane;
    $display->panels['column_1'][0] = 'new-a00b670c-e923-4bf0-90bf-fd72ded36d70';
    $pane = new stdClass();
    $pane->pid = 'new-2cce6611-eaac-4e38-8bdd-26d4d616fe6a';
    $pane->panel = 'column_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Explore the SAP Store',
      'body' => 'Discover, evaluate, and buy analytics, SAP HANA, and cloud offerings quickly and from any device.',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2cce6611-eaac-4e38-8bdd-26d4d616fe6a';
    $display->content['new-2cce6611-eaac-4e38-8bdd-26d4d616fe6a'] = $pane;
    $display->panels['column_1'][1] = 'new-2cce6611-eaac-4e38-8bdd-26d4d616fe6a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a00b670c-e923-4bf0-90bf-fd72ded36d70';
  $mini->display = $display;
  $export['navigation_5_small_actions'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'navigation_detail_section';
  $mini->category = '';
  $mini->admin_title = 'Navigation detail section';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5f7d5abf-b42d-4fbc-9c2e-47134f73462e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-96c3672b-bf0c-4bd7-bea6-de96cb410d6e';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><img alt="" src="/dragon-lang/sites/default/files/panel-block/qqjie_tu_20150531185939.jpg" style="width: 617px; height: 325px;" /></p>',
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
    $pane->uuid = '96c3672b-bf0c-4bd7-bea6-de96cb410d6e';
    $display->content['new-96c3672b-bf0c-4bd7-bea6-de96cb410d6e'] = $pane;
    $display->panels['left'][0] = 'new-96c3672b-bf0c-4bd7-bea6-de96cb410d6e';
    $pane = new stdClass();
    $pane->pid = 'new-09d438c8-f433-432b-835c-4dd197fd2789';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'What can CRM do for you?',
      'body' => 'What can CRM do for you?
What can CRM do for you?
What can CRM do for you?
What can CRM do for you?',
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
    $pane->uuid = '09d438c8-f433-432b-835c-4dd197fd2789';
    $display->content['new-09d438c8-f433-432b-835c-4dd197fd2789'] = $pane;
    $display->panels['right'][0] = 'new-09d438c8-f433-432b-835c-4dd197fd2789';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-96c3672b-bf0c-4bd7-bea6-de96cb410d6e';
  $mini->display = $display;
  $export['navigation_detail_section'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'navigation_header';
  $mini->category = '';
  $mini->admin_title = 'Navigation header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible:dragon_5_columns';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'column_1' => NULL,
      'column_2' => NULL,
      'column_3' => NULL,
      'column_4' => NULL,
      'column_5' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66667129-54df-4933-82fd-4954ca5cd73b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4995f046-8c80-4ad8-8996-4f383ea19443';
    $pane->panel = 'column_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>&nbsp;</p><p>&nbsp;</p><p>INTRANET</p>',
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
    $pane->uuid = '4995f046-8c80-4ad8-8996-4f383ea19443';
    $display->content['new-4995f046-8c80-4ad8-8996-4f383ea19443'] = $pane;
    $display->panels['column_1'][0] = 'new-4995f046-8c80-4ad8-8996-4f383ea19443';
    $pane = new stdClass();
    $pane->pid = 'new-e2defd39-c0d8-4e83-b061-79a91ad879c0';
    $pane->panel = 'column_2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'DRAGON ASIA HK LTD		
		
		
		
		
ADMINISTRATOR DASHBOARD		
		
		
		
		
EMPLOYEE DASHBOARD		
		
		
		
		
DRAGON ASIA CHINA LTD		
		',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dragon-color-red',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e2defd39-c0d8-4e83-b061-79a91ad879c0';
    $display->content['new-e2defd39-c0d8-4e83-b061-79a91ad879c0'] = $pane;
    $display->panels['column_2'][0] = 'new-e2defd39-c0d8-4e83-b061-79a91ad879c0';
    $pane = new stdClass();
    $pane->pid = 'new-c494afc4-af61-4d91-b637-2675c0bf16ae';
    $pane->panel = 'column_3';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'COMMUNICATION                   
DATA ECHANGE                                 
QUOTE REQUEST                                 
ORDER FOLLOW UP                     
PROJECT FOLLOW UP                            
LOGISTICS FOLLOW UP                           
ACCOUNTING INVOICE                                 
FORECASTING                   
PRODUCTION PLANNING            
QUALITY CONTROL',
      'format' => 'filtered_html',
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
    $pane->uuid = 'c494afc4-af61-4d91-b637-2675c0bf16ae';
    $display->content['new-c494afc4-af61-4d91-b637-2675c0bf16ae'] = $pane;
    $display->panels['column_3'][0] = 'new-c494afc4-af61-4d91-b637-2675c0bf16ae';
    $pane = new stdClass();
    $pane->pid = 'new-1c062944-2d52-41ad-9dda-33e8f6b9845a';
    $pane->panel = 'column_4';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'DRAGON ASIA INTERNATIONAL		
		
		
		
		
CUSTOMER DASHBOARD		
		
		
		
		
SUPPLIER DASHBOARD		
		
		
		
		
DRAGON ASIA WORLD	',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dragon-color-red',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1c062944-2d52-41ad-9dda-33e8f6b9845a';
    $display->content['new-1c062944-2d52-41ad-9dda-33e8f6b9845a'] = $pane;
    $display->panels['column_4'][0] = 'new-1c062944-2d52-41ad-9dda-33e8f6b9845a';
    $pane = new stdClass();
    $pane->pid = 'new-1f74f424-dc72-42b3-b2e0-2ea8d41b531f';
    $pane->panel = 'column_5';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>&nbsp;</p><p>&nbsp;</p><p>EXTRANET</p>',
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
    $pane->uuid = '1f74f424-dc72-42b3-b2e0-2ea8d41b531f';
    $display->content['new-1f74f424-dc72-42b3-b2e0-2ea8d41b531f'] = $pane;
    $display->panels['column_5'][0] = 'new-1f74f424-dc72-42b3-b2e0-2ea8d41b531f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['navigation_header'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'news';
  $mini->category = '';
  $mini->admin_title = 'News';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Our News';
  $display->uuid = 'f05df08d-a5fe-46cf-80dd-a05e0ab4d468';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b4a2ac9e-8251-4f53-a3dd-f380d18b095a';
    $pane->panel = 'left';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '59',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
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
    $pane->uuid = 'b4a2ac9e-8251-4f53-a3dd-f380d18b095a';
    $display->content['new-b4a2ac9e-8251-4f53-a3dd-f380d18b095a'] = $pane;
    $display->panels['left'][0] = 'new-b4a2ac9e-8251-4f53-a3dd-f380d18b095a';
    $pane = new stdClass();
    $pane->pid = 'new-17c4fefc-fd11-467f-9468-751e4659dd66';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '60',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
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
    $pane->uuid = '17c4fefc-fd11-467f-9468-751e4659dd66';
    $display->content['new-17c4fefc-fd11-467f-9468-751e4659dd66'] = $pane;
    $display->panels['middle'][0] = 'new-17c4fefc-fd11-467f-9468-751e4659dd66';
    $pane = new stdClass();
    $pane->pid = 'new-ba68e3ae-2cf5-4b88-9082-678aa2eb4bfa';
    $pane->panel = 'right';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '61',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
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
    $pane->uuid = 'ba68e3ae-2cf5-4b88-9082-678aa2eb4bfa';
    $display->content['new-ba68e3ae-2cf5-4b88-9082-678aa2eb4bfa'] = $pane;
    $display->panels['right'][0] = 'new-ba68e3ae-2cf5-4b88-9082-678aa2eb4bfa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['news'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'our_approach';
  $mini->category = '';
  $mini->admin_title = 'Our Approach';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Our Approach';
  $display->uuid = 'd609493c-33bd-4992-b222-18fb14451dad';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-929be4bd-549c-4532-a4f6-ce4c2aab3332';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'We care our customers and&nbsp;we beleive in honesty, collaboration, trust and &nbsp;transparency...We also beleive that supplier are part of our team and we maintain strong&nbsp;collaboration and&nbsp;a close relashionship with all of them whatever we have business or not.&nbsp;We operate and live by the company’s strong values, we have strong requirement regarding human rights and our supplier employee working environnement, condition and benefit. We are a thought leader and innovate and experiment with new ideas every day. We are so much more than a traditional trading company. We are <strong>Dragon Asia </strong>...',
      'format' => 'filtered_html',
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
    $pane->uuid = '929be4bd-549c-4532-a4f6-ce4c2aab3332';
    $display->content['new-929be4bd-549c-4532-a4f6-ce4c2aab3332'] = $pane;
    $display->panels['top'][0] = 'new-929be4bd-549c-4532-a4f6-ce4c2aab3332';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-929be4bd-549c-4532-a4f6-ce4c2aab3332';
  $mini->display = $display;
  $export['our_approach'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'our_business';
  $mini->category = '';
  $mini->admin_title = 'Our Business';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Our Business';
  $display->uuid = 'a2bbfe81-35e6-4eed-87e9-e00eb68c1266';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6c77eda2-67f2-4b20-9c21-dae3b98a0fd3';
    $pane->panel = 'left';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '63',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
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
    $pane->uuid = '6c77eda2-67f2-4b20-9c21-dae3b98a0fd3';
    $display->content['new-6c77eda2-67f2-4b20-9c21-dae3b98a0fd3'] = $pane;
    $display->panels['left'][0] = 'new-6c77eda2-67f2-4b20-9c21-dae3b98a0fd3';
    $pane = new stdClass();
    $pane->pid = 'new-9eec35dc-6805-432d-bd1e-f600118976e6';
    $pane->panel = 'right';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '64',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
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
    $pane->uuid = '9eec35dc-6805-432d-bd1e-f600118976e6';
    $display->content['new-9eec35dc-6805-432d-bd1e-f600118976e6'] = $pane;
    $display->panels['right'][0] = 'new-9eec35dc-6805-432d-bd1e-f600118976e6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['our_business'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'our_business_header';
  $mini->category = '';
  $mini->admin_title = 'Our Business header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c53b7432-4ce2-4bc0-a771-fe4980ab2f2a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3d8d8b8c-011e-43c5-821c-9506616dbd4b';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'We connect the supply chain to bring our customers the goods they rely on every day',
      'body' => '<p><img alt="" src="/dragon-lang/sites/default/files/panel-block/what-we-do-head5.jpg" style="width: 1700px; height: 720px;" /></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dragon-mini-panel-pane-our-business-header',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3d8d8b8c-011e-43c5-821c-9506616dbd4b';
    $display->content['new-3d8d8b8c-011e-43c5-821c-9506616dbd4b'] = $pane;
    $display->panels['middle'][0] = 'new-3d8d8b8c-011e-43c5-821c-9506616dbd4b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3d8d8b8c-011e-43c5-821c-9506616dbd4b';
  $mini->display = $display;
  $export['our_business_header'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'our_business_logistics';
  $mini->category = '';
  $mini->admin_title = 'Our Business Logistics';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->title = '';
  $display->uuid = 'eaca7256-4b72-49c3-baf4-cf6da9d15c52';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-65bc858f-6646-424b-b560-c4a403eb7e67';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Delivering fast, reliable, and cost-effective logistics solutions',
      'body' => 'LF Logistics is the supply chain partner of choice for companies looking to grow in Asia. Our network, spanning Greater China, ASEAN, Japan, Korea, the Middle East and the Indian subcontinent provides us with a strong "home court advantage" in this culturally diverse and economically active region.

We’re not just about moving things from one place to another. We analyze each customer’s needs, anticipate challenges, design options and set up contingency plans so our customers never have to worry about the journey. Our strength lies in scale. We manage more than 20 million square feet of space and are growing every year. Partnering with more than 400 world-renowned companies, we deliver 100 million units of consumer products every day.

Competition in the fast-changing logistics industry is intense. Our ability to sense and respond effectively to changes in the competitive landscape is essential to a sustainable and profitable operation. Our real competitive strength lies in our people, who work closely with internal and external customers to anticipate their needs and develop solutions to meet or exceed their expectations.

By employing both analytics tools and models based on our deep experience we design optimum solutions for our customers. We develop business continuity and disaster recovery plans to manage anticipated risks. Our best-in-class IT systems provide efficiency and tracking visibility across every aspect of our customers’ supply chains.',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dragon-mini-panel-pane-width',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '65bc858f-6646-424b-b560-c4a403eb7e67';
    $display->content['new-65bc858f-6646-424b-b560-c4a403eb7e67'] = $pane;
    $display->panels['bottom'][0] = 'new-65bc858f-6646-424b-b560-c4a403eb7e67';
    $pane = new stdClass();
    $pane->pid = 'new-7d9974f8-6f9e-4324-bcf2-9cfd64f0b6d2';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'logistics Logistics
LF Logistics operates an extensive global network. Our end-to-end solution spans the time the product leaves the factory to the time it reaches the hands of the consumer.

We offer a comprehensive menu of logistics solutions, including distribution center management, transport management, freight forwarding, hubbing and consolidation, order management services and other value-added services. We are focused on moving our customers’ products efficiently through the supply chain.',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dragon-mini-panel-pane-image-text',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7d9974f8-6f9e-4324-bcf2-9cfd64f0b6d2';
    $display->content['new-7d9974f8-6f9e-4324-bcf2-9cfd64f0b6d2'] = $pane;
    $display->panels['left'][0] = 'new-7d9974f8-6f9e-4324-bcf2-9cfd64f0b6d2';
    $pane = new stdClass();
    $pane->pid = 'new-ace85092-b177-401d-ad0c-7db63ab9501a';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Logistics',
      'body' => '<p><img alt="" src="/dragon-lang/sites/default/files/panel-block/trading.jpg" style="width: 860px; height: 495px;" /></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dragon-mini-panel-pane-logistics',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ace85092-b177-401d-ad0c-7db63ab9501a';
    $display->content['new-ace85092-b177-401d-ad0c-7db63ab9501a'] = $pane;
    $display->panels['right'][0] = 'new-ace85092-b177-401d-ad0c-7db63ab9501a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ace85092-b177-401d-ad0c-7db63ab9501a';
  $mini->display = $display;
  $export['our_business_logistics'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'our_business_trading';
  $mini->category = '';
  $mini->admin_title = 'Our Business trading';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->title = '';
  $display->uuid = 'eaca7256-4b72-49c3-baf4-cf6da9d15c52';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-65bc858f-6646-424b-b560-c4a403eb7e67';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'We collaborate. We innovate. We source. We oversee.',
      'body' => 'Our trading business is the core of Li & Fung. It operates as a global multi-channel sourcing platform enabling us to create tailored sourcing options to meet customers\' specific requirements. From product design and raw material sourcing to production management and quality control, we collaborate with our customers, and assist them to produce the finished products that their customers demand. 

We create an array of consumer goods across a wide range of product categories. These include everything from designer apparel to home decor and furnishings, children\'s clothing, handbags and accessories, toys, sporting goods and footwear, as well as health and beauty products.

Our comprehensive product design and development capabilities enable us to take an initial design idea all the way through to the finished product in the consumer’s hands. We constantly strive to address each customer’s specific needs in the areas of design, sales and marketing, and distribution as well as responsibly managing the entire supply chain end to end. Our dedicated teams of product specialists focus on each customer segment, leveraging their close ties with suppliers to offer inside knowledge that helps customers make informed buying decisions.

We are delighted that our many customers choose to work with us, including global brands, department stores, hypermarkets, specialty stores, catalogue-led companies, and ecommerce sites.',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dragon-mini-panel-pane-width',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '65bc858f-6646-424b-b560-c4a403eb7e67';
    $display->content['new-65bc858f-6646-424b-b560-c4a403eb7e67'] = $pane;
    $display->panels['bottom'][0] = 'new-65bc858f-6646-424b-b560-c4a403eb7e67';
    $pane = new stdClass();
    $pane->pid = 'new-ace85092-b177-401d-ad0c-7db63ab9501a';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Trading',
      'body' => '<p><img alt="" src="/dragon-lang/sites/default/files/panel-block/trading.jpg" style="width: 860px; height: 495px;" /></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dragon-mini-panel-pane-trading',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ace85092-b177-401d-ad0c-7db63ab9501a';
    $display->content['new-ace85092-b177-401d-ad0c-7db63ab9501a'] = $pane;
    $display->panels['left'][0] = 'new-ace85092-b177-401d-ad0c-7db63ab9501a';
    $pane = new stdClass();
    $pane->pid = 'new-7d9974f8-6f9e-4324-bcf2-9cfd64f0b6d2';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'Our trading business is the core of Li & Fung and provides sourcing services across multiple product lines to retailers and brands across the globe.  

Through a growing network of over 15,000 suppliers in more than 40 countries, Li & Fung strives to find quality-conscious, sustainable and cost-effective manufacturers to match the production needs of our customers worldwide.',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dragon-mini-panel-pane-image-text',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7d9974f8-6f9e-4324-bcf2-9cfd64f0b6d2';
    $display->content['new-7d9974f8-6f9e-4324-bcf2-9cfd64f0b6d2'] = $pane;
    $display->panels['right'][0] = 'new-7d9974f8-6f9e-4324-bcf2-9cfd64f0b6d2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ace85092-b177-401d-ad0c-7db63ab9501a';
  $mini->display = $display;
  $export['our_business_trading'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'our_people';
  $mini->category = '';
  $mini->admin_title = 'Our Team';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
    'bottom' => array(
      'style' => '-1',
    ),
    'left' => array(
      'style' => '-1',
    ),
    'right' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2e22b794-0b30-4503-b828-4baaef61b60e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b369656f-d403-43a3-853c-38190f7dca02';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<img alt="" src="/dragon-dev/sites/default/files/u2/2011-12-20_09.46.51.jpg" style="width: 250px; height: 310px;" /><br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ​Robert Bellemare<br />
​&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Dragon Asia HK Ltd',
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
    $pane->uuid = 'b369656f-d403-43a3-853c-38190f7dca02';
    $display->content['new-b369656f-d403-43a3-853c-38190f7dca02'] = $pane;
    $display->panels['left'][0] = 'new-b369656f-d403-43a3-853c-38190f7dca02';
    $pane = new stdClass();
    $pane->pid = 'new-b9070eb4-aa6e-4edd-8ebe-8c95463b52f5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<img alt="" src="/dragon-dev/sites/default/files/u2/luc_0.jpg" style="width: 275px; height: 320px;" /><br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Luc Bellemare<br />
​&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Dragon Asie International',
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
    $pane->uuid = 'b9070eb4-aa6e-4edd-8ebe-8c95463b52f5';
    $display->content['new-b9070eb4-aa6e-4edd-8ebe-8c95463b52f5'] = $pane;
    $display->panels['middle'][0] = 'new-b9070eb4-aa6e-4edd-8ebe-8c95463b52f5';
    $pane = new stdClass();
    $pane->pid = 'new-a261fe7b-7c03-4a1f-a411-414c79db4632';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<img alt="" src="/dragon-dev/sites/default/files/u2/jerry.jpg" style="width: 235px; height: 315px;" /><br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;​Jerry Slutzsken<br />
​&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;VP Sales North America',
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
    $pane->uuid = 'a261fe7b-7c03-4a1f-a411-414c79db4632';
    $display->content['new-a261fe7b-7c03-4a1f-a411-414c79db4632'] = $pane;
    $display->panels['right'][0] = 'new-a261fe7b-7c03-4a1f-a411-414c79db4632';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['our_people'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'our_services';
  $mini->category = '';
  $mini->admin_title = 'Our Services';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Our Services';
  $display->uuid = 'e79c11a0-1bb3-4aee-8511-2bfc9f467474';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6b9a3ad9-330d-4f88-9d5d-0f455c512ece';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Our Services',
      'body' => '<?php
$menuItems = menu_tree_page_data(\'user-menu\'); 

foreach($menuItems as $key => $m) {
      //check current active menu
   if ($m[\'link\'][\'in_active_trail\'] && $menuItems [$key][\'below\']) {
       $menu = menu_tree_output($menuItems [$key][\'below\']);
   }  
}

//print the menu
print render($menu);',
      'format' => 'php_code',
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
    $pane->uuid = '6b9a3ad9-330d-4f88-9d5d-0f455c512ece';
    $display->content['new-6b9a3ad9-330d-4f88-9d5d-0f455c512ece'] = $pane;
    $display->panels['middle'][0] = 'new-6b9a3ad9-330d-4f88-9d5d-0f455c512ece';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-6b9a3ad9-330d-4f88-9d5d-0f455c512ece';
  $mini->display = $display;
  $export['our_services'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'what_we_do';
  $mini->category = '';
  $mini->admin_title = 'What We Do';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'What we do';
  $display->uuid = '46c44f96-7c5a-4c61-bfb0-47934baa159d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-89cfc9d5-b420-4fb3-a70c-e12fc8adc48b';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '62',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 1,
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
    $pane->uuid = '89cfc9d5-b420-4fb3-a70c-e12fc8adc48b';
    $display->content['new-89cfc9d5-b420-4fb3-a70c-e12fc8adc48b'] = $pane;
    $display->panels['middle'][0] = 'new-89cfc9d5-b420-4fb3-a70c-e12fc8adc48b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['what_we_do'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'what_we_do_features';
  $mini->category = '';
  $mini->admin_title = 'What We Do Features';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '95b109c5-f7a4-4794-abfa-2ea81f798c0d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2263c409-3cf3-4640-8e47-4b011ebdb609';
    $pane->panel = 'left';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '68',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 1,
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
    $pane->uuid = '2263c409-3cf3-4640-8e47-4b011ebdb609';
    $display->content['new-2263c409-3cf3-4640-8e47-4b011ebdb609'] = $pane;
    $display->panels['left'][0] = 'new-2263c409-3cf3-4640-8e47-4b011ebdb609';
    $pane = new stdClass();
    $pane->pid = 'new-4b3640ce-5e3d-4650-9365-3fcf909a9084';
    $pane->panel = 'right';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '69',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 1,
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
    $pane->uuid = '4b3640ce-5e3d-4650-9365-3fcf909a9084';
    $display->content['new-4b3640ce-5e3d-4650-9365-3fcf909a9084'] = $pane;
    $display->panels['right'][0] = 'new-4b3640ce-5e3d-4650-9365-3fcf909a9084';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['what_we_do_features'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'working_with_customers';
  $mini->category = '';
  $mini->admin_title = 'Working with Customers';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0694a348-34e8-42f6-8298-79b80cd7dc92';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-efbb100b-b070-45af-8a6c-7bb3767208af';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<img alt="" src="http://go.sap.com/dam/application/imagelibrary/photos/275000/275318.jpg.adapt.843_474.false.jpg" style="width: 842px; height: 474px;" />',
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
    $pane->uuid = 'efbb100b-b070-45af-8a6c-7bb3767208af';
    $display->content['new-efbb100b-b070-45af-8a6c-7bb3767208af'] = $pane;
    $display->panels['left'][0] = 'new-efbb100b-b070-45af-8a6c-7bb3767208af';
    $pane = new stdClass();
    $pane->pid = 'new-e064d463-0429-442d-b4f7-7441d16832a7';
    $pane->panel = 'right';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '70',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
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
    $pane->uuid = 'e064d463-0429-442d-b4f7-7441d16832a7';
    $display->content['new-e064d463-0429-442d-b4f7-7441d16832a7'] = $pane;
    $display->panels['right'][0] = 'new-e064d463-0429-442d-b4f7-7441d16832a7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-efbb100b-b070-45af-8a6c-7bb3767208af';
  $mini->display = $display;
  $export['working_with_customers'] = $mini;

  return $export;
}
