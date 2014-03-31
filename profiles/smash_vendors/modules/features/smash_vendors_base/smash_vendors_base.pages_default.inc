<?php
/**
 * @file
 * smash_vendors_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function smash_vendors_base_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'application_form';
  $page->task = 'page';
  $page->admin_title = 'Application Form';
  $page->admin_description = '';
  $page->path = 'application/!form';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'form' => array(
      'id' => 1,
      'identifier' => 'Node title',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_application_form_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'application_form';
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
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fedb4ee7-5143-4adf-909d-93a7555833f1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2ac6b30f-cde3-4a8c-87ef-8124fd290e6a';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'application_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ac6b30f-cde3-4a8c-87ef-8124fd290e6a';
    $display->content['new-2ac6b30f-cde3-4a8c-87ef-8124fd290e6a'] = $pane;
    $display->panels['left'][0] = 'new-2ac6b30f-cde3-4a8c-87ef-8124fd290e6a';
    $pane = new stdClass();
    $pane->pid = 'new-3aa3c7b8-0c49-46f1-ba4e-d2e71115bec8';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Additional Docs',
      'title' => '',
      'body' => '<h3>Exhibitor Info Pack</h3>
<p>For exhibitors, this is a run-down of the convention and what we have to offer you.</p>
<a href="http://www.smash.org.au/public/vendorpack2014_web-steven.pdf">Exhibitor Info Pack</a>

<h3>Terms & Conditions</h3>
<p>These are for your reference only. A copy will be sent with your invoice.</p>
<a href="http://www.smash.org.au/public/exhibitor-terms-2013.pdf">Stallholder Conditions</a>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3aa3c7b8-0c49-46f1-ba4e-d2e71115bec8';
    $display->content['new-3aa3c7b8-0c49-46f1-ba4e-d2e71115bec8'] = $pane;
    $display->panels['left'][1] = 'new-3aa3c7b8-0c49-46f1-ba4e-d2e71115bec8';
    $pane = new stdClass();
    $pane->pid = 'new-287fb1d7-175a-4948-8721-6f916b48620b';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'application_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'context' => array(
        0 => 'argument_string_1.raw',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ajax-result-pane-form-display',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '287fb1d7-175a-4948-8721-6f916b48620b';
    $display->content['new-287fb1d7-175a-4948-8721-6f916b48620b'] = $pane;
    $display->panels['right'][0] = 'new-287fb1d7-175a-4948-8721-6f916b48620b';
    $pane = new stdClass();
    $pane->pid = 'new-63649b88-a430-477b-86e2-ab735af00a01';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1>What do I do?</h1>
<p>You complete the form. We send you an invoice and the terms and conditions. You pay the invoice. Done!</p>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '63649b88-a430-477b-86e2-ab735af00a01';
    $display->content['new-63649b88-a430-477b-86e2-ab735af00a01'] = $pane;
    $display->panels['top'][0] = 'new-63649b88-a430-477b-86e2-ab735af00a01';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2ac6b30f-cde3-4a8c-87ef-8124fd290e6a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['application_form'] = $page;

  return $pages;

}
