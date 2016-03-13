<?php
/**
 * @file
 * dragon_panel_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dragon_panel_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_us';
  $page->task = 'page';
  $page->admin_title = 'About Us';
  $page->admin_description = '';
  $page->path = 'about-us';
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
  $handler->name = 'page_about_us__panel';
  $handler->task = 'page';
  $handler->subtask = 'about_us';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => 'dragon-panel-row',
        'region_class' => 'dragon-panel-region',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 0,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => 'dragon-panel-row-top',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Region 1',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'container',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_2',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_2' => array(
        'type' => 'region',
        'title' => 'Region 2',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_3',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_3' => array(
        'type' => 'region',
        'title' => 'Region 3',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_4',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_4' => array(
        'type' => 'region',
        'title' => 'Region 4',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_5',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_5' => array(
        'type' => 'region',
        'title' => 'Region 5',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'region_2' => NULL,
      'region_3' => NULL,
      'region_4' => NULL,
      'region_5' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a5c26e50-60df-432d-ad5b-ce2eb9e4e43e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4512077e-c14d-4c8d-a4fa-7e08cd209d55';
    $pane->panel = 'center';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '4',
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
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4512077e-c14d-4c8d-a4fa-7e08cd209d55';
    $display->content['new-4512077e-c14d-4c8d-a4fa-7e08cd209d55'] = $pane;
    $display->panels['center'][0] = 'new-4512077e-c14d-4c8d-a4fa-7e08cd209d55';
    $pane = new stdClass();
    $pane->pid = 'new-4ebe6234-80ee-4319-b3cc-c82cdd23c02c';
    $pane->panel = 'region_2';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '15',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 1,
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
      'css_class' => 'container text-center',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4ebe6234-80ee-4319-b3cc-c82cdd23c02c';
    $display->content['new-4ebe6234-80ee-4319-b3cc-c82cdd23c02c'] = $pane;
    $display->panels['region_2'][0] = 'new-4ebe6234-80ee-4319-b3cc-c82cdd23c02c';
    $pane = new stdClass();
    $pane->pid = 'new-a7a2696c-3c9f-4100-8a52-003f96934650';
    $pane->panel = 'region_3';
    $pane->type = 'panels_mini';
    $pane->subtype = 'what_we_do_features';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a7a2696c-3c9f-4100-8a52-003f96934650';
    $display->content['new-a7a2696c-3c9f-4100-8a52-003f96934650'] = $pane;
    $display->panels['region_3'][0] = 'new-a7a2696c-3c9f-4100-8a52-003f96934650';
    $pane = new stdClass();
    $pane->pid = 'new-0fc84d0d-5b4e-4e74-94e0-b5cd0d031826';
    $pane->panel = 'region_4';
    $pane->type = 'panels_mini';
    $pane->subtype = 'our_people';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0fc84d0d-5b4e-4e74-94e0-b5cd0d031826';
    $display->content['new-0fc84d0d-5b4e-4e74-94e0-b5cd0d031826'] = $pane;
    $display->panels['region_4'][0] = 'new-0fc84d0d-5b4e-4e74-94e0-b5cd0d031826';
    $pane = new stdClass();
    $pane->pid = 'new-8812c3da-ebdb-48db-b10c-38e91fc3627e';
    $pane->panel = 'region_5';
    $pane->type = 'panels_mini';
    $pane->subtype = 'working_with_customers';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8812c3da-ebdb-48db-b10c-38e91fc3627e';
    $display->content['new-8812c3da-ebdb-48db-b10c-38e91fc3627e'] = $pane;
    $display->panels['region_5'][0] = 'new-8812c3da-ebdb-48db-b10c-38e91fc3627e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4512077e-c14d-4c8d-a4fa-7e08cd209d55';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_us'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact';
  $page->task = 'page';
  $page->admin_title = 'Contact Us';
  $page->admin_description = '';
  $page->path = 'contact-us';
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
  $handler->name = 'page_contact__panel';
  $handler->task = 'page';
  $handler->subtask = 'contact';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
  $display->layout = 'flexible:sub_page_first';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'region_2' => NULL,
      'region_3' => NULL,
      'region_4' => NULL,
      'region_5' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '291cd248-7084-49e9-811f-b2c6ec3d9638';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-beb26d9d-5a93-40a1-85e8-ea8f1c2cebf6';
    $pane->panel = 'center';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3',
      'links' => 1,
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
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'beb26d9d-5a93-40a1-85e8-ea8f1c2cebf6';
    $display->content['new-beb26d9d-5a93-40a1-85e8-ea8f1c2cebf6'] = $pane;
    $display->panels['center'][0] = 'new-beb26d9d-5a93-40a1-85e8-ea8f1c2cebf6';
    $pane = new stdClass();
    $pane->pid = 'new-f9d173f9-cee2-4100-bddf-703cecc8c4a8';
    $pane->panel = 'region_2';
    $pane->type = 'panels_mini';
    $pane->subtype = 'contact_us_info';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f9d173f9-cee2-4100-bddf-703cecc8c4a8';
    $display->content['new-f9d173f9-cee2-4100-bddf-703cecc8c4a8'] = $pane;
    $display->panels['region_2'][0] = 'new-f9d173f9-cee2-4100-bddf-703cecc8c4a8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'our_services';
  $page->task = 'page';
  $page->admin_title = 'Our Services';
  $page->admin_description = '';
  $page->path = 'our-services';
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
  $handler->name = 'page_our_services__panel';
  $handler->task = 'page';
  $handler->subtask = 'our_services';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => 'dragon-panel-row',
        'region_class' => 'dragon-panel-region',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 0,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => 'dragon-panel-row-top',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Region 1',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'container',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_2',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_2' => array(
        'type' => 'region',
        'title' => 'Region 2',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'region_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fa98f2d2-0780-4883-aa63-9e6c81fed588';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-47a5bd57-a45e-4539-8c46-4b33d840909b';
    $pane->panel = 'center';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '5',
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
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '47a5bd57-a45e-4539-8c46-4b33d840909b';
    $display->content['new-47a5bd57-a45e-4539-8c46-4b33d840909b'] = $pane;
    $display->panels['center'][0] = 'new-47a5bd57-a45e-4539-8c46-4b33d840909b';
    $pane = new stdClass();
    $pane->pid = 'new-5bc2fb92-44f6-447d-a4c7-a5e9ace5b0e2';
    $pane->panel = 'region_2';
    $pane->type = 'panels_mini';
    $pane->subtype = 'our_services';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5bc2fb92-44f6-447d-a4c7-a5e9ace5b0e2';
    $display->content['new-5bc2fb92-44f6-447d-a4c7-a5e9ace5b0e2'] = $pane;
    $display->panels['region_2'][0] = 'new-5bc2fb92-44f6-447d-a4c7-a5e9ace5b0e2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-47a5bd57-a45e-4539-8c46-4b33d840909b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['our_services'] = $page;

  return $pages;

}
