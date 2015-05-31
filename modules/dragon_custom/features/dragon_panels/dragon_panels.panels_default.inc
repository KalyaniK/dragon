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
    $pane->pid = 'new-d708c01e-9beb-47ec-8f5c-cff2b682024a';
    $pane->panel = 'column_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'About Dragon Asia',
      'body' => 'About Dragon Asia is a company..... About Dragon Asia is a company..
...About Dragon Asia is a company..... About Dragon Asia is a company.....',
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
    $pane->uuid = 'd708c01e-9beb-47ec-8f5c-cff2b682024a';
    $display->content['new-d708c01e-9beb-47ec-8f5c-cff2b682024a'] = $pane;
    $display->panels['column_1'][0] = 'new-d708c01e-9beb-47ec-8f5c-cff2b682024a';
    $pane = new stdClass();
    $pane->pid = 'new-ed5e7540-18f8-46f3-babd-b0819f4757e1';
    $pane->panel = 'column_2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Follow Us',
      'body' => '<a href="http://www.linkedin.com/company/dragon-asia-hk-ltd" class="dragon-footer-icon">in</a>',
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
      'title' => 'Downloads',
      'body' => '<div class="item-list"><ul class="list-unstyled"><li class="first last"><a href="/dragon-dev/" class="btn btn-mini "><span class="glyphicon glyphicon-file" aria-hidden="true"></span>
            <span class="icon-text">File A.pdf</span></a></li>
</ul></div>
',
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
      'body' => '<div class="item-list"><ul class="list-unstyled"><li class="first"><a href="/dragon-dev/" class="btn btn-mini "><span class="glyphicon glyphicon-pencil" aria-hidden="true"></span>
            <span class="icon-text">Get a quote</span></a></li>
<li class="last"><a href="/dragon-dev/" class="btn btn-mini "><span class="glyphicon glyphicon-user" aria-hidden="true"></span>
            <span class="icon-text">Live Chat</span></a></li>
</ul></div>',
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
  );
  $display->cache = array();
  $display->title = 'Get a Quote';
  $display->uuid = '8a6f9e23-a2a6-49c3-9adb-ceaf0050a5da';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b8ab83db-c1bc-48cb-bc4d-ec724cfa7499';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Get a Quote.....Get a Quote.....Get a Quote.....Get a Quote.....</p><p>Get a Quote.....Get a Quote.....</p><p><a class="dragon-quote-link" href="quote">Start Now</a></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
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
    $pane->uuid = 'b8ab83db-c1bc-48cb-bc4d-ec724cfa7499';
    $display->content['new-b8ab83db-c1bc-48cb-bc4d-ec724cfa7499'] = $pane;
    $display->panels['middle'][0] = 'new-b8ab83db-c1bc-48cb-bc4d-ec724cfa7499';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b8ab83db-c1bc-48cb-bc4d-ec724cfa7499';
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
    $pane->pid = 'new-2ed25d10-c7af-410a-9c01-30fac652e66e';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'Li & Fung reported results against a challenging macroeconomic environment. Despite difficult retail conditions in a number of key markets, the business delivered 1.4% growth in turnover. “2014 was a year of transition and investment to position the Company for future growth,” said Spencer Fung, Group CEO.',
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
    $pane->uuid = '2ed25d10-c7af-410a-9c01-30fac652e66e';
    $display->content['new-2ed25d10-c7af-410a-9c01-30fac652e66e'] = $pane;
    $display->panels['left'][0] = 'new-2ed25d10-c7af-410a-9c01-30fac652e66e';
    $pane = new stdClass();
    $pane->pid = 'new-71c48812-4650-4e5b-badf-48162dc4d180';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'Li & Fung reported results against a challenging macroeconomic environment. Despite difficult retail conditions in a number of key markets, the business delivered 1.4% growth in turnover. “2014 was a year of transition and investment to position the Company for future growth,” said Spencer Fung, Group CEO.',
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
    $pane->uuid = '71c48812-4650-4e5b-badf-48162dc4d180';
    $display->content['new-71c48812-4650-4e5b-badf-48162dc4d180'] = $pane;
    $display->panels['middle'][0] = 'new-71c48812-4650-4e5b-badf-48162dc4d180';
    $pane = new stdClass();
    $pane->pid = 'new-3277a19e-0ba8-42f5-b84a-ecbc1e22738d';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'Li & Fung reported results against a challenging macroeconomic environment. Despite difficult retail conditions in a number of key markets, the business delivered 1.4% growth in turnover. “2014 was a year of transition and investment to position the Company for future growth,” said Spencer Fung, Group CEO.',
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
    $pane->uuid = '3277a19e-0ba8-42f5-b84a-ecbc1e22738d';
    $display->content['new-3277a19e-0ba8-42f5-b84a-ecbc1e22738d'] = $pane;
    $display->panels['right'][0] = 'new-3277a19e-0ba8-42f5-b84a-ecbc1e22738d';
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
    $pane->pid = 'new-f1b3b775-d374-433c-b485-2e1d676b4770';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Building stronger economic futures for women along supply chains',
      'body' => 'We are implementing the HERProject at factories in Bangladesh, Cambodia, and Vietnam and India, to help women learn about finance and health.
',
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
    $pane->uuid = 'f1b3b775-d374-433c-b485-2e1d676b4770';
    $display->content['new-f1b3b775-d374-433c-b485-2e1d676b4770'] = $pane;
    $display->panels['left'][0] = 'new-f1b3b775-d374-433c-b485-2e1d676b4770';
    $pane = new stdClass();
    $pane->pid = 'new-012e5163-76bf-4399-a956-142e984ef735';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'title2',
      'body' => 'We are implementing the HERProject at factories in Bangladesh, Cambodia, and Vietnam and India, to help women learn about finance and health.
',
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
    $pane->uuid = '012e5163-76bf-4399-a956-142e984ef735';
    $display->content['new-012e5163-76bf-4399-a956-142e984ef735'] = $pane;
    $display->panels['middle'][0] = 'new-012e5163-76bf-4399-a956-142e984ef735';
    $pane = new stdClass();
    $pane->pid = 'new-9c3f4395-f9b7-4bbd-a55f-21d5e62b2f19';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'title3',
      'body' => 'We are implementing the HERProject at factories in Bangladesh, Cambodia, and Vietnam and India, to help women learn about finance and health.
',
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
    $pane->uuid = '9c3f4395-f9b7-4bbd-a55f-21d5e62b2f19';
    $display->content['new-9c3f4395-f9b7-4bbd-a55f-21d5e62b2f19'] = $pane;
    $display->panels['right'][0] = 'new-9c3f4395-f9b7-4bbd-a55f-21d5e62b2f19';
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
      'body' => 'We care for the communities in which we operate and live by the company’s strong values. We are a thought leader and innovate and experiment with new ideas every day.

We are so much more than a traditional trading company. We are Li & Fung.',
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
  $display->title = 'Our Busniess';
  $display->uuid = 'a2bbfe81-35e6-4eed-87e9-e00eb68c1266';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1a00e16d-b74e-49f2-92ef-ad893079fcd5';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Trading',
      'body' => 'Our trading business is the core of Li & Fung and provides sourcing services across multiple product lines to retailers and brands across the globe.

Expertise, professionalism and integrity have contributed to our reputation as the world’s leading consumer goods sourcing company. ',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dragon-color-dark-red',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1a00e16d-b74e-49f2-92ef-ad893079fcd5';
    $display->content['new-1a00e16d-b74e-49f2-92ef-ad893079fcd5'] = $pane;
    $display->panels['left'][0] = 'new-1a00e16d-b74e-49f2-92ef-ad893079fcd5';
    $pane = new stdClass();
    $pane->pid = 'new-8ebad555-d1db-4b52-b081-a7dd4f5aca6c';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Logistics',
      'body' => 'Our end-to-end logistics solutions span the time the product leaves the factory to the time it reaches the hands of the consumer.

We are focused on moving our customers’ materials and products efficiently through the supply chain.',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dragon-color-dark-red',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8ebad555-d1db-4b52-b081-a7dd4f5aca6c';
    $display->content['new-8ebad555-d1db-4b52-b081-a7dd4f5aca6c'] = $pane;
    $display->panels['right'][0] = 'new-8ebad555-d1db-4b52-b081-a7dd4f5aca6c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1a00e16d-b74e-49f2-92ef-ad893079fcd5';
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
  $mini->admin_title = 'Our People';
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
  $display->title = 'Our People';
  $display->uuid = '2e22b794-0b30-4503-b828-4baaef61b60e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6a97b61c-3c97-4c4e-8dd6-4d7af460d7c1';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="clearfix">
			  	<a href="/our-people/#people-414" class="hidden-xs visible-sm visible-md visible-lg"><img class="img-responsive" src="http://www.lifung.com/wp-content/uploads/2014/06/Victor.jpg" alt=""></a>
			  	<a href="/our-people/#people-m-414" class="visible-xs hidden-sm hidden-md hidden-lg"><img class="img-responsive" src="http://www.lifung.com/wp-content/uploads/2014/06/Victor.jpg" alt=""></a>
			  	<div>
				  	<p class="name hidden-xs visible-sm visible-md visible-lg"><a href="/our-people/#people-414">Victor Fung</a></p>
				  	<p class="name visible-xs hidden-sm hidden-md hidden-lg"><a href="/our-people/#people-m-414">Victor Fung</a></p>
				  	<p class="location">Hong Kong</p>
			  	</div>
			  </div>',
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
    $pane->uuid = '6a97b61c-3c97-4c4e-8dd6-4d7af460d7c1';
    $display->content['new-6a97b61c-3c97-4c4e-8dd6-4d7af460d7c1'] = $pane;
    $display->panels['left'][0] = 'new-6a97b61c-3c97-4c4e-8dd6-4d7af460d7c1';
    $pane = new stdClass();
    $pane->pid = 'new-d09398f5-b74b-4ab8-8161-8c66e8126df7';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="clearfix">
			  	<a href="/our-people/#people-414" class="hidden-xs visible-sm visible-md visible-lg"><img class="img-responsive" src="http://www.lifung.com/wp-content/uploads/2014/06/Victor.jpg" alt=""></a>
			  	<a href="/our-people/#people-m-414" class="visible-xs hidden-sm hidden-md hidden-lg"><img class="img-responsive" src="http://www.lifung.com/wp-content/uploads/2014/06/Victor.jpg" alt=""></a>
			  	<div>
				  	<p class="name hidden-xs visible-sm visible-md visible-lg"><a href="/our-people/#people-414">Victor Fung</a></p>
				  	<p class="name visible-xs hidden-sm hidden-md hidden-lg"><a href="/our-people/#people-m-414">Victor Fung</a></p>
				  	<p class="location">Hong Kong</p>
			  	</div>
			  </div>',
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
    $pane->uuid = 'd09398f5-b74b-4ab8-8161-8c66e8126df7';
    $display->content['new-d09398f5-b74b-4ab8-8161-8c66e8126df7'] = $pane;
    $display->panels['right'][0] = 'new-d09398f5-b74b-4ab8-8161-8c66e8126df7';
    $pane = new stdClass();
    $pane->pid = 'new-1b1da9c7-b5b2-4b19-aeac-625275644a7b';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'We are a diverse multinational with Asian roots and a proud entrepreneurial heritage. Our people are the reason for our success and the source of our strength and expertise.',
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
    $pane->uuid = '1b1da9c7-b5b2-4b19-aeac-625275644a7b';
    $display->content['new-1b1da9c7-b5b2-4b19-aeac-625275644a7b'] = $pane;
    $display->panels['top'][0] = 'new-1b1da9c7-b5b2-4b19-aeac-625275644a7b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1b1da9c7-b5b2-4b19-aeac-625275644a7b';
  $mini->display = $display;
  $export['our_people'] = $mini;

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
  );
  $display->cache = array();
  $display->title = 'What we do';
  $display->uuid = '46c44f96-7c5a-4c61-bfb0-47934baa159d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cf45400f-5fe3-4769-b36d-dc15cfecf708';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'Li & Fung designs customized supply chain solutions for the world’s most successful retailers and brands. We source, oversee production and deliver goods in demand from consumers
around the world.',
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
    $pane->uuid = 'cf45400f-5fe3-4769-b36d-dc15cfecf708';
    $display->content['new-cf45400f-5fe3-4769-b36d-dc15cfecf708'] = $pane;
    $display->panels['middle'][0] = 'new-cf45400f-5fe3-4769-b36d-dc15cfecf708';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cf45400f-5fe3-4769-b36d-dc15cfecf708';
  $mini->display = $display;
  $export['what_we_do'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'what_we_do_steps';
  $mini->category = '';
  $mini->admin_title = 'What We Do Steps';
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
  $display->uuid = '7aeed2cf-b446-417a-82ee-8b9aebcb65fb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a648b709-1e1f-449a-a878-3fce6bef8289';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'We collaborate',
      'body' => '<p><img alt="" src="/dragon-lang/sites/default/files/panel-block/test.jpg" /></p><p>&nbsp;</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'what-we-do-steps-title-1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a648b709-1e1f-449a-a878-3fce6bef8289';
    $display->content['new-a648b709-1e1f-449a-a878-3fce6bef8289'] = $pane;
    $display->panels['middle'][0] = 'new-a648b709-1e1f-449a-a878-3fce6bef8289';
    $pane = new stdClass();
    $pane->pid = 'new-66ea93f5-5249-4fbc-8b68-4734a8a7e7af';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'We work closely with our customers to meet their individual needs',
      'body' => 'Our individual teams of experts work closely with customers, assessing their needs and using market research, retail and fashion trend forecasts, and innovative technology to design the right supply chains to deliver their products.',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '66ea93f5-5249-4fbc-8b68-4734a8a7e7af';
    $display->content['new-66ea93f5-5249-4fbc-8b68-4734a8a7e7af'] = $pane;
    $display->panels['middle'][1] = 'new-66ea93f5-5249-4fbc-8b68-4734a8a7e7af';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a648b709-1e1f-449a-a878-3fce6bef8289';
  $mini->display = $display;
  $export['what_we_do_steps'] = $mini;

  return $export;
}
