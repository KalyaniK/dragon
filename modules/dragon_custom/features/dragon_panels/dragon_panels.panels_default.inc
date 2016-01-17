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
      'body' => '<div>Dragon Asia Hk Ltd. will accompany you in your Asia projects. Our goal is to become the extension of your company an Asia... We can offer you the following services:&nbsp; product development, supplier research, factory audit, production follow up, quality control , documentation and customs clearance, delivery to your business. Dragon Asia design tailor-made logistic solutions for his customers, we principally deemed with distributors that deliver to the largest retail chain in Canada, USA and England. We also support manufacturing companies by providing them the raw material, semi finished products and finish products (retail ready) for distribution in stores... We deliver your goods according to your requests all over the world</div>',
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
    $pane->pid = 'new-b8ab83db-c1bc-48cb-bc4d-ec724cfa7499';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Get a Quote',
      'title' => 'Get a Quote',
      'body' => '<p><span style="font-size: 14px;"><strong>YOU HAVE A PROJECT START NOW....</strong></span><br />
	&nbsp;</p><p><a class="dragon-quote-link" href="quote">Start&nbsp;Now</a>&nbsp;&nbsp;</p>',
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
  $display->hide_title = PANELS_TITLE_NONE;
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
    $pane->pid = 'new-2ed25d10-c7af-410a-9c01-30fac652e66e';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Dragon Asia International',
      'body' => '<p class="rteindent1"><strong>Dragon Asia Ltd </strong>is proud to announce that since april 2014 we have a Canada sister Company <strong>Dragon Asia International&nbsp; inc </strong>base in Quebec, Canada. Mr Luc Beaulac Bellemare will manage this new Company. <strong>Dragon Asia International</strong> <strong>Inc </strong>will be the North America sales, logistics &nbsp;and import Company. This new Company will be able to take care of all the import, documentation and delivery&nbsp;process. More over <strong>Dragon Asia International Inc&nbsp;</strong>will have a complete sales and technical support team for our Canada customer so that we can help you in each step of your new project development.</p><p class="rteindent1">&nbsp;</p>',
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
      'admin_title' => 'New Chinese Company',
      'title' => 'New Chinese Company',
      'body' => 'The CEO of Dragon Asia Hk Ltd Mr. Robert Bellemare announce that we will have a new sister Company in the new Shanghai Free Zone in 2016. Doing so, Dragon Asia Hk Ltd will be in a better position to export goods for China and to support our customer that want to sell in China. The new Company will be a Wholly Own Foreign company ( WFOE ).',
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
      'title' => 'New Web Portal',
      'body' => '<p><strong>Dragon Asia Hk Ltd</strong> is proud to announce that they will launch in early 2016 our new Web Portal. This new portal is part of our Business Intelligence Strategy to support in a better way our customer in all there Asia project development.</p>',
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
    $pane->pid = 'new-929be4bd-549c-4532-a4f6-ce4c2aab3332';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'We care for the communities in which we operate and live by the company’s strong values. We are a thought leader and innovate and experiment with new ideas every day. We are so much more than a traditional trading company. We are <strong>Dragon Asia </strong>...',
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
    $pane->pid = 'new-1a00e16d-b74e-49f2-92ef-ad893079fcd5';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Trading',
      'title' => 'Trading',
      'body' => '<p><span dstinfo="0:2" id="ouHighlight__0_2TO0_2" paragraphname="paragraph0" srcinfo="0:2">Our</span><span id="noHighlight_0.9298375740690188"> </span><span dstinfo="4:15" id="ouHighlight__17_28TO4_15" paragraphname="paragraph0" srcinfo="17:28">negotiations</span><span id="noHighlight_0.5933932218603282"> </span><span dstinfo="17:19" id="ouHighlight__30_31TO17_19" paragraphname="paragraph0" srcinfo="30:31">and</span><span id="noHighlight_0.7356493187914165"> </span><span dstinfo="21:31" id="ouHighlight__33_52TO21_31" paragraphname="paragraph0" srcinfo="33:52">procurement</span><span id="noHighlight_0.05560739890247357"> </span><span dstinfo="33:42" id="ouHighlight__4_12TO33_42" paragraphname="paragraph0" srcinfo="4:12">activities</span><span id="noHighlight_0.5409546361707382"> </span><span dstinfo="44:46" id="ouHighlight__54_57TO44_46" paragraphname="paragraph0" srcinfo="54:57">are</span><span id="noHighlight_0.3681006452532912"> </span><span dstinfo="48:50" id="ouHighlight__59_60TO48_50" paragraphname="paragraph0" srcinfo="59:60">the</span><span id="noHighlight_0.1323676563891104"> </span><span dstinfo="52:56" id="ouHighlight__62_65TO52_56" paragraphname="paragraph0" srcinfo="62:65">heart</span><span id="noHighlight_0.28640166782713216"> </span><span dstinfo="58:59" id="ouHighlight__67_68TO58_59" paragraphname="paragraph0" srcinfo="67:68">of</span><span id="noHighlight_0.8948163621882793"> </span><span dstinfo="61:66" id="ouHighlight__70_75TO61_66" paragraphname="paragraph0" srcinfo="70:75">Dragon</span><span id="noHighlight_0.7095131246599464"> </span><span dstinfo="68:71" id="ouHighlight__77_80TO68_71" paragraphname="paragraph0" srcinfo="77:80">Asia</span><span id="noHighlight_0.4027606117640326"> </span><span dstinfo="73:74" id="ouHighlight__82_83TO73_74" paragraphname="paragraph0" srcinfo="82:83">Hk</span><span id="noHighlight_0.37559846685082476"> </span><span dstinfo="76:78" id="ouHighlight__85_87TO76_78" paragraphname="paragraph0" srcinfo="85:87">Ltd</span><span id="noHighlight_0.884606317034129">,</span><span id="noHighlight_0.7191317104250203"> </span><span dstinfo="81:86" id="ouHighlight__90_96TO81_86" paragraphname="paragraph0" srcinfo="90:96">thanks</span><span id="noHighlight_0.8295459292271834"> to </span><span dstinfo="91:95" id="ouHighlight__98_100TO91_95" paragraphname="paragraph0" srcinfo="98:100">these</span><span id="noHighlight_0.8877994719817975"> </span><span dstinfo="97:98" id="ouHighlight__102_103TO97_98" paragraphname="paragraph0" srcinfo="102:103">17</span><span id="noHighlight_0.6779340379472483"> </span><span dstinfo="100:104" id="ouHighlight__105_107TO100_104" paragraphname="paragraph0" srcinfo="105:107">years</span><span id="noHighlight_0.47448573519658654"> </span><span dstinfo="106:118" id="ouHighlight__109_120TO106_118" paragraphname="paragraph0" srcinfo="109:120">of experience</span><span id="noHighlight_0.05102050819283871"> </span><span dstinfo="120:121" id="ouHighlight__122_123TO120_121" paragraphname="paragraph0" srcinfo="122:123">in</span><span id="noHighlight_0.23058078311109797"> </span><span dstinfo="123:126" id="ouHighlight__125_128TO123_126" paragraphname="paragraph0" srcinfo="125:128">Asia</span><span id="noHighlight_0.55313754346178">,</span><span id="noHighlight_0.46292494625692554"> </span><span dstinfo="129:134" id="ouHighlight__131_136TO129_134" paragraphname="paragraph0" srcinfo="131:136">Dragon</span><span id="noHighlight_0.30462427121340285"> </span><span dstinfo="136:139" id="ouHighlight__138_141TO136_139" paragraphname="paragraph0" srcinfo="138:141">Asia</span><span id="noHighlight_0.43984035366891483"> provides </span><span dstinfo="150:152" id="ouHighlight__143_146TO150_152" paragraphname="paragraph0" srcinfo="143:146">you</span><span id="noHighlight_0.037848244710427525"> </span><span dstinfo="154:157" id="ouHighlight__148_154TO154_157" paragraphname="paragraph0" srcinfo="148:154">with</span><span id="noHighlight_0.5444576864346431"> </span><span dstinfo="159:159" id="ouHighlight__156_167TO159_159" paragraphname="paragraph0" srcinfo="156:167">a</span><span id="noHighlight_0.5782504349139999"> </span><span dstinfo="161:166" id="ouHighlight__189_190TO161_166" paragraphname="paragraph0" srcinfo="189:190">supply</span><span id="noHighlight_0.10907499869089221"> </span><span dstinfo="168:169" id="ouHighlight__192_198TO168_169" paragraphname="paragraph0" srcinfo="192:198">of</span><span id="noHighlight_0.6196239406243201"> </span><span dstinfo="171:177" id="ouHighlight__200_202TO171_177" paragraphname="paragraph0" srcinfo="200:202">quality</span><span id="noHighlight_0.4763805714730042"> </span><span dstinfo="179:180" id="ouHighlight__204_206TO179_180" paragraphname="paragraph0" srcinfo="204:206">on</span><span id="noHighlight_0.9356899665060087"> </span><span dstinfo="182:182" id="ouHighlight__208_212TO182_182" paragraphname="paragraph0" srcinfo="208:212">a</span><span id="noHighlight_0.3864454934685102"> </span><span dstinfo="184:187" id="ouHighlight__214_218TO184_187" paragraphname="paragraph0" srcinfo="214:218">wide</span><span id="noHighlight_0.11193264898941268"> </span><span dstinfo="189:193" id="ouHighlight__220_221TO189_193" paragraphname="paragraph0" srcinfo="220:221">range</span><span id="noHighlight_0.94748390034057"> </span><span dstinfo="195:196" id="ouHighlight__223_230TO195_196" paragraphname="paragraph0" srcinfo="223:230">of</span><span id="noHighlight_0.8616998737167527"> </span><span dstinfo="198:205" id="ouHighlight__232_233TO198_205" paragraphname="paragraph0" srcinfo="232:233">products</span><span id="noHighlight_0.269152470207471"> </span><span dstinfo="207:209" id="ouHighlight__235_242TO207_209" paragraphname="paragraph0" srcinfo="235:242">and</span><span id="noHighlight_0.3534960090970625"> </span><span dstinfo="211:218" id="ouHighlight__243_243TO211_218" paragraphname="paragraph0" srcinfo="243:243">services</span><span id="noHighlight_0.015906504610981642">. </span><span dstinfo="221:222" id="ouHighlight__245_248TO221_222" paragraphname="paragraph0" srcinfo="245:248">We</span><span id="noHighlight_0.3325362350724001"> </span><span dstinfo="224:232" id="ouHighlight__255_262TO224_232" paragraphname="paragraph0" srcinfo="255:262">make sure</span><span id="noHighlight_0.26155998486706344"> </span><span dstinfo="234:235" id="ouHighlight__264_265TO234_235" paragraphname="paragraph0" srcinfo="264:265">to</span><span id="noHighlight_0.2949781240576086"> </span><span dstinfo="237:240" id="ouHighlight__267_272TO237_240" paragraphname="paragraph0" srcinfo="267:272">keep</span><span id="noHighlight_0.8222523588895323"> </span><span dstinfo="242:253" id="ouHighlight__274_285TO242_253" paragraphname="paragraph0" srcinfo="274:285">confidential</span><span id="noHighlight_0.45939470025396134"> </span><span dstinfo="255:257" id="ouHighlight__287_288TO255_257" paragraphname="paragraph0" srcinfo="287:288">the</span><span id="noHighlight_0.8316674104244053"> </span><span dstinfo="259:264" id="ouHighlight__290_299TO259_264" paragraphname="paragraph0" srcinfo="290:299">source</span><span id="noHighlight_0.6842317938092338"> </span><span dstinfo="266:267" id="ouHighlight__301_302TO266_267" paragraphname="paragraph0" srcinfo="301:302">of</span><span id="noHighlight_0.45837081701373994"> </span><span dstinfo="269:272" id="ouHighlight__304_306TO269_272" paragraphname="paragraph0" srcinfo="304:306">your</span><span id="noHighlight_0.9750527124447428"> </span><span dstinfo="274:281" id="ouHighlight__308_315TO274_281" paragraphname="paragraph0" srcinfo="308:315">products</span><span id="noHighlight_0.999944759281578"> </span><span dstinfo="283:284" id="ouHighlight__317_323TO283_284" paragraphname="paragraph0" srcinfo="317:323">so</span><span id="noHighlight_0.4997909562929713"> </span><span dstinfo="286:288" id="ouHighlight__325_328TO286_288" paragraphname="paragraph0" srcinfo="325:328">you</span><span id="noHighlight_0.912240886153725"> </span><span dstinfo="290:292" id="ouHighlight__330_338TO290_292" paragraphname="paragraph0" srcinfo="330:338">can</span><span id="noHighlight_0.5381089783557875"> </span><span dstinfo="294:297" id="ouHighlight__343_351TO294_297" paragraphname="paragraph0" srcinfo="343:351">keep</span><span id="noHighlight_0.8252102009983222"> </span><span dstinfo="299:302" id="ouHighlight__353_357TO299_302" paragraphname="paragraph0" srcinfo="353:357">your</span><span id="noHighlight_0.002024649338415674"> </span><span dstinfo="304:312" id="ouHighlight__368_381TO304_312" paragraphname="paragraph0" srcinfo="368:381">strategic</span><span id="noHighlight_0.08068950719195056"> </span><span dstinfo="314:322" id="ouHighlight__359_366TO314_322" paragraphname="paragraph0" srcinfo="359:366">advantage</span><span dstinfo="323:325" id="ouHighlight__368_381TO323_325" paragraphname="paragraph0" srcinfo="368:381">...</span><span id="noHighlight_0.8145677502326742"> </span><span dstinfo="327:330" id="ouHighlight__383_385TO327_330" paragraphname="paragraph0" srcinfo="383:385">Your</span><span id="noHighlight_0.5141429046537044"> </span><span dstinfo="332:339" id="ouHighlight__387_397TO332_339" paragraphname="paragraph0" srcinfo="387:397">provider</span><span id="noHighlight_0.772344220086167"> </span><span dstinfo="341:346" id="ouHighlight__399_409TO341_346" paragraphname="paragraph0" srcinfo="399:409">cannot</span><span id="noHighlight_0.9442124153681242"> </span><span dstinfo="348:349" id="ouHighlight__411_414TO348_349" paragraphname="paragraph0" srcinfo="411:414">be</span><span id="noHighlight_0.5631166186824936"> </span><span dstinfo="351:356" id="ouHighlight__416_423TO351_356" paragraphname="paragraph0" srcinfo="416:423">traced</span><span id="noHighlight_0.3741882430769964"> </span><span dstinfo="358:359" id="ouHighlight__425_427TO358_359" paragraphname="paragraph0" srcinfo="425:427">at</span><span id="noHighlight_0.3930823563523321"> </span><span dstinfo="361:363" id="ouHighlight__429_433TO361_363" paragraphname="paragraph0" srcinfo="429:433">any</span><span id="noHighlight_0.13195572493300145"> </span><span dstinfo="365:371" id="ouHighlight__443_449TO365_371" paragraphname="paragraph0" srcinfo="443:449">customs</span><span id="noHighlight_0.4982984219945156"> </span><span dstinfo="373:374" id="ouHighlight__451_452TO373_374" paragraphname="paragraph0" srcinfo="451:452">or</span><span id="noHighlight_0.854026504592028"> </span><span dstinfo="376:392" id="ouHighlight__457_470TO376_392" paragraphname="paragraph0" srcinfo="457:470">freight forwarder</span><span id="noHighlight_0.48413869253160096"> </span><span dstinfo="394:397" id="ouHighlight__435_438TO394_397" paragraphname="paragraph0" srcinfo="435:438">site</span><span dstinfo="398:400" id="ouHighlight__457_470TO398_400" paragraphname="paragraph0" srcinfo="457:470">...</span><span id="noHighlight_0.26995479949957124"> </span><span dstinfo="402:404" id="ouHighlight__472_476TO402_404" paragraphname="paragraph0" srcinfo="472:476">Our</span><span id="noHighlight_0.5348790368435585"> </span><span dstinfo="406:414" id="ouHighlight__478_486TO406_414" paragraphname="paragraph0" srcinfo="478:486">expertise</span><span id="noHighlight_0.4714403730753758">,</span><span id="noHighlight_0.657213808609856"> </span><span dstinfo="417:431" id="ouHighlight__489_505TO417_431" paragraphname="paragraph0" srcinfo="489:505">professionalism</span><span id="noHighlight_0.7020167840102138"> </span><span dstinfo="433:435" id="ouHighlight__507_508TO433_435" paragraphname="paragraph0" srcinfo="507:508">and</span><span id="noHighlight_0.1270648883408454"> </span><span dstinfo="437:445" id="ouHighlight__510_518TO437_445" paragraphname="paragraph0" srcinfo="510:518">integrity</span><span id="noHighlight_0.5153303057172066"> </span><span dstinfo="447:450" id="ouHighlight__520_522TO447_450" paragraphname="paragraph0" srcinfo="520:522">have</span><span id="noHighlight_0.5744294202110965"> </span><span dstinfo="452:462" id="ouHighlight__524_532TO452_462" paragraphname="paragraph0" srcinfo="524:532">contributed</span><span id="noHighlight_0.4001715237309615"> </span><span dstinfo="464:465" id="ouHighlight__534_534TO464_465" paragraphname="paragraph0" srcinfo="534:534">to</span><span id="noHighlight_0.8078250820833854"> </span><span dstinfo="467:469" id="ouHighlight__536_540TO467_469" paragraphname="paragraph0" srcinfo="536:540">our</span><span id="noHighlight_0.026791319853616602"> </span><span dstinfo="471:480" id="ouHighlight__542_551TO471_480" paragraphname="paragraph0" srcinfo="542:551">reputation</span><span id="noHighlight_0.7053596035544647"> </span><span dstinfo="482:484" id="ouHighlight__553_554TO482_484" paragraphname="paragraph0" srcinfo="553:554">and</span><span id="noHighlight_0.14040518499969878"> </span><span dstinfo="486:493" id="ouHighlight__556_563TO486_493" paragraphname="paragraph0" srcinfo="556:563">resulted</span><span id="noHighlight_0.7064250095971353"> in </span><span dstinfo="498:506" id="ouHighlight__580_587TO498_506" paragraphname="paragraph0" srcinfo="580:587">continued</span><span id="noHighlight_0.7135784482214865"> </span><span dstinfo="508:513" id="ouHighlight__569_578TO508_513" paragraphname="paragraph0" srcinfo="569:578">growth</span><span id="noHighlight_0.5649742981118047"> in </span><span dstinfo="518:520" id="ouHighlight__592_594TO518_520" paragraphname="paragraph0" srcinfo="592:594">our</span><span id="noHighlight_0.3094296130797191"> </span><span dstinfo="522:531" id="ouHighlight__596_605TO522_531" paragraphname="paragraph0" srcinfo="596:605">activities</span><span id="noHighlight_0.7763795318482634"> </span><span dstinfo="533:536" id="ouHighlight__607_625TO533_536" paragraphname="paragraph0" srcinfo="607:625">over</span><span id="noHighlight_0.13295233120655936"> </span><span dstinfo="538:540" id="ouHighlight__626_626TO538_540" paragraphname="paragraph0" srcinfo="626:626">the</span><span id="noHighlight_0.1847226627797583"> years.</span></p>',
      'format' => 'full_html',
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
      'admin_title' => 'Logistics',
      'title' => 'Logistics',
      'body' => '<p><strong>Dragon Asia Hk Ltd</strong> is a end-to-end logistics solutions span the time the product leaves the factory to the time it reaches the hands of the consumer. We are focused on moving our customers’ materials and products efficiently through the supply chain. We handle express shipment, air shipment, LCL, consolidation and full container load. We use the best reliable freight forwarder in teh world and assure you of a ontime delivery at best best rate available..</p>',
      'format' => 'full_html',
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
    $pane->pid = 'new-cf45400f-5fe3-4769-b36d-dc15cfecf708';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'What we do',
      'title' => '',
      'body' => '<div paragraphname="paragraph0"><strong><span class="highlight" dstinfo="0:5" id="ouHighlight__0_5TO0_5" paragraphname="paragraph0" srcinfo="0:5">Dragon</span><span id="noHighlight_0.19355893201464092"> </span><span dstinfo="7:10" id="ouHighlight__7_10TO7_10" paragraphname="paragraph0" srcinfo="7:10">Asia</span><span id="noHighlight_0.667659052849472"> </span><span dstinfo="12:13" id="ouHighlight__12_13TO12_13" paragraphname="paragraph0" srcinfo="12:13">Hk</span><span id="noHighlight_0.1459990039567648"> </span><span dstinfo="15:18" id="ouHighlight__15_17TO15_18" paragraphname="paragraph0" srcinfo="15:17">Ltd.</span></strong><span id="noHighlight_0.599212791067026"> </span><span dstinfo="20:23" id="ouHighlight__19_22TO20_23" paragraphname="paragraph0" srcinfo="19:22">will</span><span id="noHighlight_0.18481925479253314"> </span><span dstinfo="25:33" id="ouHighlight__24_33TO25_33" paragraphname="paragraph0" srcinfo="24:33">accompany</span><span id="noHighlight_0.3307117505688564"> you </span><span dstinfo="39:40" id="ouHighlight__35_38TO39_40" paragraphname="paragraph0" srcinfo="35:38">in</span><span id="noHighlight_0.5495169365721616"> </span><span dstinfo="46:49" id="ouHighlight__45_47TO46_49" paragraphname="paragraph0" srcinfo="45:47">your</span><span id="noHighlight_0.10527876819258297"> Asia </span><span dstinfo="51:58" id="ouHighlight__49_55TO51_58" paragraphname="paragraph0" srcinfo="49:55">projects</span><span dstinfo="60:69" id="ouHighlight__57_70TO60_69" paragraphname="paragraph0" srcinfo="57:70">.</span><span id="noHighlight_0.2033281296073874"> </span><span dstinfo="71:73" id="ouHighlight__72_76TO71_73" paragraphname="paragraph0" srcinfo="72:76">Our</span><span id="noHighlight_0.6650056071428054"> </span><span dstinfo="75:78" id="ouHighlight__78_80TO75_78" paragraphname="paragraph0" srcinfo="78:80">goal</span><span id="noHighlight_0.8035825105835169"> </span><span dstinfo="80:81" id="ouHighlight__82_84TO80_81" paragraphname="paragraph0" srcinfo="82:84">is</span><span id="noHighlight_0.2528473603793141"> </span><span dstinfo="83:84" id="ouHighlight__86_87TO83_84" paragraphname="paragraph0" srcinfo="86:87">to</span><span id="noHighlight_0.8981799817586902"> </span><span dstinfo="86:91" id="ouHighlight__89_95TO86_91" paragraphname="paragraph0" srcinfo="89:95">become</span><span id="noHighlight_0.058576836100549146"> </span><span dstinfo="93:105" id="ouHighlight__97_107TO93_105" paragraphname="paragraph0" srcinfo="97:107">the extension</span><span id="noHighlight_0.4539605803349508"> </span><span dstinfo="107:108" id="ouHighlight__109_110TO107_108" paragraphname="paragraph0" srcinfo="109:110">of</span><span id="noHighlight_0.4833560378626319"> </span><span dstinfo="110:113" id="ouHighlight__112_116TO110_113" paragraphname="paragraph0" srcinfo="112:116">your</span><span id="noHighlight_0.2371550667329015"> </span><span dstinfo="115:121" id="ouHighlight__118_126TO115_121" paragraphname="paragraph0" srcinfo="118:126">company</span><span id="noHighlight_0.47105544360997775"> </span><span dstinfo="123:124" id="ouHighlight__128_129TO123_124" paragraphname="paragraph0" srcinfo="128:129">an</span><span id="noHighlight_0.7395232472845583"> </span><span dstinfo="126:132" id="ouHighlight__131_136TO126_132" paragraphname="paragraph0" srcinfo="131:136">Asia...</span><span id="noHighlight_0.7351368395406925"> </span><span dstinfo="134:135" id="ouHighlight__137_140TO134_135" paragraphname="paragraph0" srcinfo="137:140">We</span><span id="noHighlight_0.9990518570565823"> can </span><span dstinfo="137:141" id="ouHighlight__147_153TO137_141" paragraphname="paragraph0" srcinfo="147:153">offer</span><span id="noHighlight_0.5807181048476502"> you the following&nbsp;</span><span dstinfo="149:155" id="ouHighlight__158_164TO149_155" paragraphname="paragraph0" srcinfo="158:164">services:</span><span id="noHighlight_0.8758725882962403">&nbsp;</span><span id="noHighlight_0.853476345450199"> </span><span dstinfo="160:166" id="ouHighlight__186_192TO160_166" paragraphname="paragraph0" srcinfo="186:192">product</span><span id="noHighlight_0.7770404299178557"> </span><span dstinfo="168:178" id="ouHighlight__169_181TO168_178" paragraphname="paragraph0" srcinfo="169:181">development</span><span id="noHighlight_0.7061305133860901">,</span><span id="noHighlight_0.18005025453545642"> supplier </span><span dstinfo="181:188" id="ouHighlight__195_203TO181_188" paragraphname="paragraph0" srcinfo="195:203">research</span><span id="noHighlight_0.3816738012937718">,</span><span id="noHighlight_0.8705383926042065"> factory audit, </span><span dstinfo="213:222" id="ouHighlight__234_243TO213_222" paragraphname="paragraph0" srcinfo="234:243">production follow up</span><span id="noHighlight_0.6972456900015078">,</span><span id="noHighlight_0.4274729863156447"> quality </span><span dstinfo="225:231" id="ouHighlight__246_253TO225_231" paragraphname="paragraph0" srcinfo="246:253">control</span><span id="noHighlight_0.3817346370380419"> </span><span id="noHighlight_0.6886183804608816">,</span><span id="noHighlight_0.37713291811968"> </span><span dstinfo="242:254" id="ouHighlight__265_277TO242_254" paragraphname="paragraph0" srcinfo="265:277">documentation</span><span id="noHighlight_0.9188177628384671"> </span><span dstinfo="256:258" id="ouHighlight__279_280TO256_258" paragraphname="paragraph0" srcinfo="279:280">and</span><span id="noHighlight_0.29954048261147703"> </span><span dstinfo="260:276" id="ouHighlight__282_293TO260_276" paragraphname="paragraph0" srcinfo="282:293">customs clearance</span><span id="noHighlight_0.6043581624160345">,</span><span id="noHighlight_0.747759555127359"> </span><span dstinfo="279:286" id="ouHighlight__296_304TO279_286" paragraphname="paragraph0" srcinfo="296:304">delivery</span><span id="noHighlight_0.5007247380559543"> </span><span dstinfo="288:289" id="ouHighlight__306_306TO288_289" paragraphname="paragraph0" srcinfo="306:306">to</span><span id="noHighlight_0.26425202941443654"> </span><span dstinfo="291:294" id="ouHighlight__308_312TO291_294" paragraphname="paragraph0" srcinfo="308:312">your</span><span id="noHighlight_0.3710856838126543"> </span><span dstinfo="296:306" id="ouHighlight__314_326TO296_306" paragraphname="paragraph0" srcinfo="314:326">business. </span><span dstinfo="308:313" id="ouHighlight__328_333TO308_313" paragraphname="paragraph0" srcinfo="328:333">Dragon</span><span id="noHighlight_0.756060190997387"> </span><span dstinfo="315:318" id="ouHighlight__335_338TO315_318" paragraphname="paragraph0" srcinfo="335:338">Asia</span><span id="noHighlight_0.8559017509427784"> </span><span dstinfo="320:326" id="ouHighlight__340_346TO320_326" paragraphname="paragraph0" srcinfo="340:346">design</span><span id="noHighlight_0.09044923192607046"> </span><span dstinfo="328:338" id="ouHighlight__378_388TO328_338" paragraphname="paragraph0" srcinfo="378:388">tailor-made</span><span id="noHighlight_0.9651076869904901"> logistic solutions </span><span dstinfo="340:342" id="ouHighlight__390_392TO340_342" paragraphname="paragraph0" srcinfo="390:392">for</span><span id="noHighlight_0.05344400648251996"> his</span><span id="noHighlight_0.11556404610633203"> </span><span dstinfo="348:356" id="ouHighlight__401_401TO348_356" paragraphname="paragraph0" srcinfo="401:401">customers</span><span id="noHighlight_0.30496393191379867">,</span><span id="noHighlight_0.041468363447513035"> we </span><span dstinfo="379:389" id="ouHighlight__419_421TO379_389" paragraphname="paragraph0" srcinfo="419:421">principally</span><span id="noHighlight_0.5670065668437073"> </span><span dstinfo="391:396" id="ouHighlight__449_459TO391_396" paragraphname="paragraph0" srcinfo="449:459">deemed</span><span id="noHighlight_0.4473735763875818"> with </span><span dstinfo="398:409" id="ouHighlight__445_447TO398_409" paragraphname="paragraph0" srcinfo="445:447">distributors</span><span id="noHighlight_0.35843523439191343"> </span><span dstinfo="411:414" id="ouHighlight__461_463TO411_414" paragraphname="paragraph0" srcinfo="461:463">that</span><span id="noHighlight_0.14840667961985393"> deliver&nbsp;to</span><span id="noHighlight_0.4670986730088345"> </span><span dstinfo="424:426" id="ouHighlight__470_475TO424_426" paragraphname="paragraph0" srcinfo="470:475">the</span><span id="noHighlight_0.05353551150822139"> </span><span dstinfo="428:434" id="ouHighlight__477_485TO428_434" paragraphname="paragraph0" srcinfo="477:485">largest</span><span id="noHighlight_0.6751150739196154"> retail </span><span dstinfo="436:440" id="ouHighlight__487_493TO436_440" paragraphname="paragraph0" srcinfo="487:493">chain </span><span dstinfo="453:454" id="ouHighlight__504_504TO453_454" paragraphname="paragraph0" srcinfo="504:504">in</span><span id="noHighlight_0.39007012850502326"> </span><span dstinfo="456:461" id="ouHighlight__511_514TO456_461" paragraphname="paragraph0" srcinfo="511:514">Canada</span><span id="noHighlight_0.09613941435390522">,</span><span id="noHighlight_0.001480946155244467"> </span><span dstinfo="464:466" id="ouHighlight__519_531TO464_466" paragraphname="paragraph0" srcinfo="519:531">USA</span><span id="noHighlight_0.4444491231935395"> </span><span dstinfo="468:470" id="ouHighlight__532_532TO468_470" paragraphname="paragraph0" srcinfo="532:532">and</span><span id="noHighlight_0.32993496927843835"> England. </span><span dstinfo="0:1" id="ouHighlight__0_3TO0_1" paragraphname="paragraph1" srcinfo="0:3">We</span><span id="noHighlight_0.8188203766466569"> </span><span dstinfo="3:6" id="ouHighlight__16_20TO3_6" paragraphname="paragraph1" srcinfo="16:20">also</span><span id="noHighlight_0.9738407823717587"> </span><span dstinfo="8:14" id="ouHighlight__5_14TO8_14" paragraphname="paragraph1" srcinfo="5:14">support</span><span id="noHighlight_0.6146431546259912"> </span><span dstinfo="20:32" id="ouHighlight__36_50TO20_32" paragraphname="paragraph1" srcinfo="36:50">manufacturing</span><span id="noHighlight_0.05909724644132902"> </span><span dstinfo="34:42" id="ouHighlight__26_34TO34_42" paragraphname="paragraph1" srcinfo="26:34">companies</span><span id="noHighlight_0.5576573305545194"> </span><span dstinfo="44:45" id="ouHighlight__52_53TO44_45" paragraphname="paragraph1" srcinfo="52:53">by</span><span id="noHighlight_0.069644580799262"> </span><span dstinfo="47:55" id="ouHighlight__55_68TO47_55" paragraphname="paragraph1" srcinfo="55:68">providing</span><span id="noHighlight_0.48975545546094034"> </span><span dstinfo="57:59" id="ouHighlight__70_71TO57_59" paragraphname="paragraph1" srcinfo="70:71">them the </span><span dstinfo="61:63" id="ouHighlight__82_90TO61_63" paragraphname="paragraph1" srcinfo="82:90">raw</span><span id="noHighlight_0.7375808909789521"> </span><span dstinfo="65:73" id="ouHighlight__73_80TO65_73" paragraphname="paragraph1" srcinfo="73:80">material</span><span id="noHighlight_0.7659844341163654">,</span><span id="noHighlight_0.49641373549032835"> </span><span dstinfo="76:79" id="ouHighlight__111_114TO76_79" paragraphname="paragraph1" srcinfo="111:114">semi</span><span id="noHighlight_0.969520032574293"> </span><span dstinfo="81:88" id="ouHighlight__116_117TO81_88" paragraphname="paragraph1" srcinfo="116:117">finished</span><span id="noHighlight_0.29161273474115146"> </span><span dstinfo="90:97" id="ouHighlight__106_109TO90_97" paragraphname="paragraph1" srcinfo="106:109">products</span><span id="noHighlight_0.8286755981411684"> </span><span dstinfo="99:101" id="ouHighlight__119_121TO99_101" paragraphname="paragraph1" srcinfo="119:121">and</span><span id="noHighlight_0.9445110910503829"> finish </span><span dstinfo="103:110" id="ouHighlight__137_139TO103_110" paragraphname="paragraph1" srcinfo="137:139">products (retail ready) for</span><span id="noHighlight_0.4626146564309554"> </span><span dstinfo="124:135" id="ouHighlight__160_166TO124_135" paragraphname="paragraph1" srcinfo="160:166">distribution</span><span id="noHighlight_0.31427787665270884"> </span><span dstinfo="137:138" id="ouHighlight__168_170TO137_138" paragraphname="paragraph1" srcinfo="168:170">in</span><span id="noHighlight_0.8278373689497287"> stores... </span><span dstinfo="149:150" id="ouHighlight__172_175TO149_150" paragraphname="paragraph1" srcinfo="172:175">We</span><span id="noHighlight_0.24775666264607005"> </span><span dstinfo="152:158" id="ouHighlight__177_183TO152_158" paragraphname="paragraph1" srcinfo="177:183">deliver</span><span id="noHighlight_0.48491222935307404"> </span><span dstinfo="160:163" id="ouHighlight__185_189TO160_163" paragraphname="paragraph1" srcinfo="185:189">your</span><span id="noHighlight_0.6265880153830102"> </span><span dstinfo="165:169" id="ouHighlight__191_201TO165_169" paragraphname="paragraph1" srcinfo="191:201">goods</span><span id="noHighlight_0.24271864848097502"> </span><span dstinfo="171:182" id="ouHighlight__203_207TO171_182" paragraphname="paragraph1" srcinfo="203:207">according to</span><span id="noHighlight_0.8056505972945681"> </span><span dstinfo="184:187" id="ouHighlight__209_211TO184_187" paragraphname="paragraph1" srcinfo="209:211">your</span><span id="noHighlight_0.023581484138090747"> </span><span dstinfo="189:196" id="ouHighlight__213_220TO189_196" paragraphname="paragraph1" srcinfo="213:220">requests</span><span id="noHighlight_0.6354097821402691"> </span><span dstinfo="202:204" id="ouHighlight__228_234TO202_204" paragraphname="paragraph1" srcinfo="228:234">all</span><span id="noHighlight_0.16502171030021961"> </span><span dstinfo="206:209" id="ouHighlight__236_239TO206_209" paragraphname="paragraph1" srcinfo="236:239">over</span><span id="noHighlight_0.814730822461393"> </span><span dstinfo="211:213" id="ouHighlight__241_242TO211_213" paragraphname="paragraph1" srcinfo="241:242">the</span><span id="noHighlight_0.03359372587350212"> </span><span dstinfo="215:219" id="ouHighlight__244_248TO215_219" paragraphname="paragraph1" srcinfo="244:248">world</span><span id="noHighlight_0.0055850198211365165">.</span></div>',
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
