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

  return $export;
}
