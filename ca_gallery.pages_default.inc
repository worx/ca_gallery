<?php
/**
 * @file
 * ca_gallery.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_gallery_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_gallery_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'CA Gallery: Gallery Grid Image View',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_gallery' => 'ca_gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_gallery_list_template',
          'settings' => array(
            'ca_gallery_list_template' => 'ca_gallery_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-gallery-node ca-gallery-node-template-1',
  );
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
  $display->title = '%node:title';
  $display->uuid = 'b79b5e0b-473e-4112-a881-49ce57af4cec';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8fbadb11-242b-42d3-9a5b-2dc54dc8a39e';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_list-ca_gallery_sub_list_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8fbadb11-242b-42d3-9a5b-2dc54dc8a39e';
  $display->content['new-8fbadb11-242b-42d3-9a5b-2dc54dc8a39e'] = $pane;
  $display->panels['middle'][0] = 'new-8fbadb11-242b-42d3-9a5b-2dc54dc8a39e';
  $pane = new stdClass();
  $pane->pid = 'new-064ed749-b43c-4140-bc55-3fabd83f2ffd';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_image_list-ca_gallery_image_list_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '064ed749-b43c-4140-bc55-3fabd83f2ffd';
  $display->content['new-064ed749-b43c-4140-bc55-3fabd83f2ffd'] = $pane;
  $display->panels['middle'][1] = 'new-064ed749-b43c-4140-bc55-3fabd83f2ffd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_gallery_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_gallery_node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'CA Gallery: Gallery Flex Image View',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_gallery' => 'ca_gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_gallery_list_template',
          'settings' => array(
            'ca_gallery_list_template' => 'ca_gallery_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-gallery-node ca-gallery-node-template-1',
  );
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
  $display->title = '%node:title';
  $display->uuid = 'b79b5e0b-473e-4112-a881-49ce57af4cec';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ebfb6f00-0f69-4893-aeb2-ce260bb16cb2';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_list-ca_gallery_flex_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ebfb6f00-0f69-4893-aeb2-ce260bb16cb2';
  $display->content['new-ebfb6f00-0f69-4893-aeb2-ce260bb16cb2'] = $pane;
  $display->panels['middle'][0] = 'new-ebfb6f00-0f69-4893-aeb2-ce260bb16cb2';
  $pane = new stdClass();
  $pane->pid = 'new-06cbd0e2-1b19-4f31-adf3-e129b2048b93';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_image_list-ca_gallery_image_flex_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '06cbd0e2-1b19-4f31-adf3-e129b2048b93';
  $display->content['new-06cbd0e2-1b19-4f31-adf3-e129b2048b93'] = $pane;
  $display->panels['middle'][1] = 'new-06cbd0e2-1b19-4f31-adf3-e129b2048b93';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_gallery_node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_791222a0-c0d2-48eb-a0ec-6d1df984d9c0';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora Gallery: Gallery Flex Image View',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_gallery' => 'ca_gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_gallery_list_template',
          'settings' => array(
            'ca_gallery_list_template' => 'ca_gallery_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-gallery-node ca-gallery-node-template-1',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'b79b5e0b-473e-4112-a881-49ce57af4cec';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-45001ca1-754d-48a5-978f-30eda3334e83';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_list-ca_gallery_sub_flex_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45001ca1-754d-48a5-978f-30eda3334e83';
  $display->content['new-45001ca1-754d-48a5-978f-30eda3334e83'] = $pane;
  $display->panels['first-first'][0] = 'new-45001ca1-754d-48a5-978f-30eda3334e83';
  $pane = new stdClass();
  $pane->pid = 'new-06cbd0e2-1b19-4f31-adf3-e129b2048b93';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_image_list-ca_gallery_image_flex_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '06cbd0e2-1b19-4f31-adf3-e129b2048b93';
  $display->content['new-06cbd0e2-1b19-4f31-adf3-e129b2048b93'] = $pane;
  $display->panels['first-first'][1] = 'new-06cbd0e2-1b19-4f31-adf3-e129b2048b93';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_791222a0-c0d2-48eb-a0ec-6d1df984d9c0'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_ca8170b5-74b6-4db1-847e-c4a305ffe4b0';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Gallery: Gallery Grid Image View',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_gallery' => 'ca_gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_gallery_list_template',
          'settings' => array(
            'ca_gallery_list_template' => 'ca_gallery_list_template_one',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-gallery-node ca-gallery-node-template-1',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'b79b5e0b-473e-4112-a881-49ce57af4cec';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8fbadb11-242b-42d3-9a5b-2dc54dc8a39e';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_list-ca_gallery_sub_list_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8fbadb11-242b-42d3-9a5b-2dc54dc8a39e';
  $display->content['new-8fbadb11-242b-42d3-9a5b-2dc54dc8a39e'] = $pane;
  $display->panels['first-first'][0] = 'new-8fbadb11-242b-42d3-9a5b-2dc54dc8a39e';
  $pane = new stdClass();
  $pane->pid = 'new-064ed749-b43c-4140-bc55-3fabd83f2ffd';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_image_list-ca_gallery_image_list_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '064ed749-b43c-4140-bc55-3fabd83f2ffd';
  $display->content['new-064ed749-b43c-4140-bc55-3fabd83f2ffd'] = $pane;
  $display->panels['first-first'][1] = 'new-064ed749-b43c-4140-bc55-3fabd83f2ffd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_ca8170b5-74b6-4db1-847e-c4a305ffe4b0'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_gallery_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_gallery_add_gallery';
  $page->task = 'page';
  $page->admin_title = 'CA Gallery: Add Gallery';
  $page->admin_description = '';
  $page->path = 'gallery/add_gallery';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 198476701,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Gallery',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_add_gallery_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_add_gallery';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_gallery',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_gallery_add_gallery'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_gallery_add_image';
  $page->task = 'page';
  $page->admin_title = 'CA Gallery: Add Image';
  $page->admin_description = '';
  $page->path = 'node/%node/add_image';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_gallery' => 'ca_gallery',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 198476701,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Image',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_add_image_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_add_image';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'entityref_create_node:ca_gallery_image:field_ca_gallery_image_parent',
    'context_admin_options_items' => 'ca_gallery_image',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'argument_entity_id:node_1',
    'context_admin_field' => 'field_ca_gallery_image_parent',
    'context_admin_custom_redirect' => '',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_gallery_add_image'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_gallery_add_sub_gallery';
  $page->task = 'page';
  $page->admin_title = 'CA Gallery: Add Sub Gallery';
  $page->admin_description = '';
  $page->path = 'node/%node/add_sub_gallery';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_gallery' => 'ca_gallery',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 198476701,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Sub Gallery',
    'name' => 'navigation',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_add_sub_gallery_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_add_sub_gallery';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'entityref_create_node:ca_gallery:field_ca_gallery_parent_gallery',
    'context_admin_options_items' => 'ca_gallery',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'argument_entity_id:node_1',
    'context_admin_field' => 'field_ca_gallery_parent_gallery',
    'context_admin_custom_redirect' => '',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_gallery_add_sub_gallery'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_gallery_gallery_administration';
  $page->task = 'page';
  $page->admin_title = 'CA Gallery: Gallery Administration';
  $page->admin_description = '';
  $page->path = 'gallery/admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 198476701,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '2',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_gallery_administration_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_gallery_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Gallery: Gallery Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-gallery-admin',
  );
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
  $display->title = 'Administer';
  $display->uuid = 'a8878e0e-1ce7-4a58-aaed-1a615935404f';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-73c12842-a63d-451e-99c9-0c12150ce2d7';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_admin-ca_gallery_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '73c12842-a63d-451e-99c9-0c12150ce2d7';
  $display->content['new-73c12842-a63d-451e-99c9-0c12150ce2d7'] = $pane;
  $display->panels['middle'][0] = 'new-73c12842-a63d-451e-99c9-0c12150ce2d7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_gallery_gallery_administration'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_gallery_gallery_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Gallery: Gallery Sort';
  $page->admin_description = '';
  $page->path = 'gallery/admin/sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 198476701,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_gallery_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_gallery_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Gallery: Gallery Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-gallery-admin',
  );
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
  $display->title = 'Sort';
  $display->uuid = 'd403006d-99b7-49d4-8849-fe1dfc7796d0';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c481e8b0-3a2e-4c5a-bb09-f9a4a42a0048';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_sort-ca_gallery_sort_parent_gallery_sort';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c481e8b0-3a2e-4c5a-bb09-f9a4a42a0048';
  $display->content['new-c481e8b0-3a2e-4c5a-bb09-f9a4a42a0048'] = $pane;
  $display->panels['middle'][0] = 'new-c481e8b0-3a2e-4c5a-bb09-f9a4a42a0048';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_gallery_gallery_sort'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_gallery_image_admin';
  $page->task = 'page';
  $page->admin_title = 'CA Gallery: Image Admin';
  $page->admin_description = '';
  $page->path = 'node/%node/admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_gallery' => 'ca_gallery',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 198476701,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '3',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_image_admin_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_image_admin';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Gallery: Image Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-gallery-admin',
  );
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
  $display->title = 'Administer';
  $display->uuid = 'c17d76b0-710b-4b23-a12c-cfcfa4309031';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-627adf65-9904-477e-ae47-6d2eb3e210aa';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_admin-ca_gallery_sub_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '627adf65-9904-477e-ae47-6d2eb3e210aa';
  $display->content['new-627adf65-9904-477e-ae47-6d2eb3e210aa'] = $pane;
  $display->panels['middle'][0] = 'new-627adf65-9904-477e-ae47-6d2eb3e210aa';
  $pane = new stdClass();
  $pane->pid = 'new-cf758a24-0e41-4b80-bc1b-e29d3f05396f';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_admin-ca_gallery_image_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cf758a24-0e41-4b80-bc1b-e29d3f05396f';
  $display->content['new-cf758a24-0e41-4b80-bc1b-e29d3f05396f'] = $pane;
  $display->panels['middle'][1] = 'new-cf758a24-0e41-4b80-bc1b-e29d3f05396f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_gallery_image_admin'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_gallery_image_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Gallery: Image Sort';
  $page->admin_description = '';
  $page->path = 'node/%node/admin/image_sort_order';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_gallery' => 'ca_gallery',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 198476701,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_image_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_image_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Gallery: Image Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-gallery-admin',
  );
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
  $display->title = 'Image Sort';
  $display->uuid = 'a7a119d7-9aec-4632-9fbb-7665a4973951';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9f71b1aa-4638-4bea-b888-7e4f145f6ca4';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_sort-ca_gallery_sort_sub_gallery_sort';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9f71b1aa-4638-4bea-b888-7e4f145f6ca4';
  $display->content['new-9f71b1aa-4638-4bea-b888-7e4f145f6ca4'] = $pane;
  $display->panels['middle'][0] = 'new-9f71b1aa-4638-4bea-b888-7e4f145f6ca4';
  $pane = new stdClass();
  $pane->pid = 'new-71975c8d-9f37-4b58-9d57-029bdfe0568a';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_sort-ca_gallery_sort_image_sort';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '71975c8d-9f37-4b58-9d57-029bdfe0568a';
  $display->content['new-71975c8d-9f37-4b58-9d57-029bdfe0568a'] = $pane;
  $display->panels['middle'][1] = 'new-71975c8d-9f37-4b58-9d57-029bdfe0568a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_gallery_image_sort'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_gallery_list_view';
  $page->task = 'page';
  $page->admin_title = 'CA Gallery: List View';
  $page->admin_description = '';
  $page->path = 'gallery/view';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Gallery',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_list_view__panel_context_8317135a-ce83-48c9-97ea-55fa4776dc4b';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora  Gallery: List View Landscape',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-gallery-list ca-gallery-list-template-1 ca-gallery-list-template-1-landscape',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_gallery_list_template',
          'settings' => array(
            'ca_gallery_list_template' => 'ca_gallery_list_template_one',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_gallery_display',
          'settings' => array(
            'ca_gallery_display' => 'ca_gallery_display_landscape',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3201c771-4308-46a3-87af-38fd0c194f91';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8f23e62a-b94a-4f7e-9bd7-2abf44c1ae25';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_list-ca_gallery_list_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8f23e62a-b94a-4f7e-9bd7-2abf44c1ae25';
  $display->content['new-8f23e62a-b94a-4f7e-9bd7-2abf44c1ae25'] = $pane;
  $display->panels['first-first'][0] = 'new-8f23e62a-b94a-4f7e-9bd7-2abf44c1ae25';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_list_view__panel_context_cce29761-4d40-4d02-87ad-e4f4605f3310';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Aurora Gallery: Flex Grid View Landscape',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-gallery-flex ca-gallery-flex-template-1 ca-gallery-flex-template-1-landscape',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_gallery_list_template',
          'settings' => array(
            'ca_gallery_list_template' => 'ca_gallery_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3201c771-4308-46a3-87af-38fd0c194f91';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2839a846-ddf0-45d2-986e-8e23e386278d';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_list-ca_gallery_flex_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2839a846-ddf0-45d2-986e-8e23e386278d';
  $display->content['new-2839a846-ddf0-45d2-986e-8e23e386278d'] = $pane;
  $display->panels['first-first'][0] = 'new-2839a846-ddf0-45d2-986e-8e23e386278d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_list_view_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'CA Gallery: Grid View Landscape',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-gallery-list ca-gallery-list-template-1 ca-gallery-list-template-1-landscape',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_gallery_list_template',
          'settings' => array(
            'ca_gallery_list_template' => 'ca_gallery_list_template_one',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_gallery_display',
          'settings' => array(
            'ca_gallery_display' => 'ca_gallery_display_landscape',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
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
  $display->uuid = '3201c771-4308-46a3-87af-38fd0c194f91';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8f23e62a-b94a-4f7e-9bd7-2abf44c1ae25';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_list-ca_gallery_list_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8f23e62a-b94a-4f7e-9bd7-2abf44c1ae25';
  $display->content['new-8f23e62a-b94a-4f7e-9bd7-2abf44c1ae25'] = $pane;
  $display->panels['middle'][0] = 'new-8f23e62a-b94a-4f7e-9bd7-2abf44c1ae25';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_list_view_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'CA Gallery: Flex Grid View Landscape',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-gallery-flex ca-gallery-flex-template-1 ca-gallery-flex-template-1-landscape',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_gallery_list_template',
          'settings' => array(
            'ca_gallery_list_template' => 'ca_gallery_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_gallery_display',
          'settings' => array(
            'ca_gallery_display' => 'ca_gallery_display_landscape',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
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
  $display->uuid = '3201c771-4308-46a3-87af-38fd0c194f91';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2839a846-ddf0-45d2-986e-8e23e386278d';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_list-ca_gallery_flex_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2839a846-ddf0-45d2-986e-8e23e386278d';
  $display->content['new-2839a846-ddf0-45d2-986e-8e23e386278d'] = $pane;
  $display->panels['middle'][0] = 'new-2839a846-ddf0-45d2-986e-8e23e386278d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_list_view__aurora-gallery-list-view-protrait';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora Gallery: List View Protrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-gallery-list ca-gallery-list-template-1 ca-gallery-list-template-1-portrait',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_gallery_list_template',
          'settings' => array(
            'ca_gallery_list_template' => 'ca_gallery_list_template_one',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_gallery_display',
          'settings' => array(
            'ca_gallery_display' => 'ca_gallery_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'aurora-gallery-list-view-protrait',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3201c771-4308-46a3-87af-38fd0c194f91';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e73edfa6-82b1-4472-9154-ab1e1d179617';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_list-ca_gallery_list_1_portrait';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e73edfa6-82b1-4472-9154-ab1e1d179617';
  $display->content['new-e73edfa6-82b1-4472-9154-ab1e1d179617'] = $pane;
  $display->panels['first-first'][0] = 'new-e73edfa6-82b1-4472-9154-ab1e1d179617';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_list_view__aurora-gallery-flex-grid-view-portrait';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Aurora Gallery: Flex Grid View Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-gallery-flex ca-gallery-flex-template-1 ca-gallery-flex-template-1-portrait',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_gallery_list_template',
          'settings' => array(
            'ca_gallery_list_template' => 'ca_gallery_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'ca_gallery_display',
          'settings' => array(
            'ca_gallery_display' => 'ca_gallery_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'aurora-gallery-flex-grid-view-portrait',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3201c771-4308-46a3-87af-38fd0c194f91';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-68bbcf8c-818a-4072-8f94-f2f8357a46ca';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_list-ca_gallery_flex_1_portrait';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '68bbcf8c-818a-4072-8f94-f2f8357a46ca';
  $display->content['new-68bbcf8c-818a-4072-8f94-f2f8357a46ca'] = $pane;
  $display->panels['first-first'][0] = 'new-68bbcf8c-818a-4072-8f94-f2f8357a46ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_list_view__ca-gallery-grid-view-portrait';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'CA Gallery: Grid View Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-gallery-list ca-gallery-list-template-1 ca-gallery-list-template-1-portrait',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_gallery_list_template',
          'settings' => array(
            'ca_gallery_list_template' => 'ca_gallery_list_template_one',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_gallery_display',
          'settings' => array(
            'ca_gallery_display' => 'ca_gallery_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'ca-gallery-grid-view-portrait',
  );
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
  $display->uuid = '3201c771-4308-46a3-87af-38fd0c194f91';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8f23e62a-b94a-4f7e-9bd7-2abf44c1ae25';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_list-ca_gallery_list_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8f23e62a-b94a-4f7e-9bd7-2abf44c1ae25';
  $display->content['new-8f23e62a-b94a-4f7e-9bd7-2abf44c1ae25'] = $pane;
  $display->panels['middle'][0] = 'new-8f23e62a-b94a-4f7e-9bd7-2abf44c1ae25';
  $pane = new stdClass();
  $pane->pid = 'new-6d588f13-13e0-42ea-924b-8fdb97e01597';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_list-ca_gallery_list_1_portrait';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6d588f13-13e0-42ea-924b-8fdb97e01597';
  $display->content['new-6d588f13-13e0-42ea-924b-8fdb97e01597'] = $pane;
  $display->panels['middle'][1] = 'new-6d588f13-13e0-42ea-924b-8fdb97e01597';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_gallery_list_view__ca-gallery-flex-grid-view-portrait';
  $handler->task = 'page';
  $handler->subtask = 'ca_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'CA Gallery: Flex Grid View Portrait',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-gallery-flex ca-gallery-flex-template-1 ca-gallery-flex-template-1-portrait',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_gallery_list_template',
          'settings' => array(
            'ca_gallery_list_template' => 'ca_gallery_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_gallery_display',
          'settings' => array(
            'ca_gallery_display' => 'ca_gallery_display_portrait',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'ca-gallery-flex-grid-view-portrait',
  );
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
  $display->uuid = '3201c771-4308-46a3-87af-38fd0c194f91';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-544f38c3-8302-4ef2-b65a-01349529c120';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_gallery_list-ca_gallery_flex_1_portrait';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '544f38c3-8302-4ef2-b65a-01349529c120';
  $display->content['new-544f38c3-8302-4ef2-b65a-01349529c120'] = $pane;
  $display->panels['middle'][0] = 'new-544f38c3-8302-4ef2-b65a-01349529c120';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_gallery_list_view'] = $page;

  return $pages;

}
