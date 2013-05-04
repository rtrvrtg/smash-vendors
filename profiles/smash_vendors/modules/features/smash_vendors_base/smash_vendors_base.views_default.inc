<?php
/**
 * @file
 * smash_vendors_base.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function smash_vendors_base_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'application_form';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Application Form';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'You complete the form.  We send an invoice and the terms and conditions.  You pay the invoice.  Done!';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2>[title]</h2>
<p>[body]</p>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'request/application/[title]/nojs';
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'exhibitors';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['title']['transform_dash'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'registration_form' => 'registration_form',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['path'] = 'application-form';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'exhibitors';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  $export['application_form'] = $view;

  $view = new view();
  $view->name = 'approved_registrations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'registration';
  $view->human_name = 'Approved Registrations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 1;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  /* Field: Registration: ABN */
  $handler->display->display_options['fields']['field_abn']['id'] = 'field_abn';
  $handler->display->display_options['fields']['field_abn']['table'] = 'field_data_field_abn';
  $handler->display->display_options['fields']['field_abn']['field'] = 'field_abn';
  /* Field: Registration: Additional Artists / Helpers */
  $handler->display->display_options['fields']['field_additional_artists_helpers']['id'] = 'field_additional_artists_helpers';
  $handler->display->display_options['fields']['field_additional_artists_helpers']['table'] = 'field_data_field_additional_artists_helpers';
  $handler->display->display_options['fields']['field_additional_artists_helpers']['field'] = 'field_additional_artists_helpers';
  $handler->display->display_options['fields']['field_additional_artists_helpers']['delta_offset'] = '0';
  /* Field: Registration: Additional Notes */
  $handler->display->display_options['fields']['field_additional_notes']['id'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['table'] = 'field_data_field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['field'] = 'field_additional_notes';
  /* Field: Registration: Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['label'] = 'Anon_mail';
  /* Field: Registration: Community Group Description */
  $handler->display->display_options['fields']['field_artist_blurb']['id'] = 'field_artist_blurb';
  $handler->display->display_options['fields']['field_artist_blurb']['table'] = 'field_data_field_artist_blurb';
  $handler->display->display_options['fields']['field_artist_blurb']['field'] = 'field_artist_blurb';
  $handler->display->display_options['fields']['field_artist_blurb']['label'] = 'Artist Blurb';
  /* Field: Registration: Community Group Name */
  $handler->display->display_options['fields']['field_artist_name']['id'] = 'field_artist_name';
  $handler->display->display_options['fields']['field_artist_name']['table'] = 'field_data_field_artist_name';
  $handler->display->display_options['fields']['field_artist_name']['field'] = 'field_artist_name';
  $handler->display->display_options['fields']['field_artist_name']['label'] = 'Artist Name';
  /* Field: Registration: Author entity author_uid */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'registration';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['label'] = 'Author author_uid';
  /* Field: Registration: Business/Entity Name */
  $handler->display->display_options['fields']['field_business_name']['id'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['table'] = 'field_data_field_business_name';
  $handler->display->display_options['fields']['field_business_name']['field'] = 'field_business_name';
  /* Field: Registration: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  /* Field: Registration: Contact Number */
  $handler->display->display_options['fields']['field_contact_number']['id'] = 'field_contact_number';
  $handler->display->display_options['fields']['field_contact_number']['table'] = 'field_data_field_contact_number';
  $handler->display->display_options['fields']['field_contact_number']['field'] = 'field_contact_number';
  /* Field: Registration: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Registration: Floorspace */
  $handler->display->display_options['fields']['field_floorspace']['id'] = 'field_floorspace';
  $handler->display->display_options['fields']['field_floorspace']['table'] = 'field_data_field_floorspace';
  $handler->display->display_options['fields']['field_floorspace']['field'] = 'field_floorspace';
  /* Field: Registration: Intended Activities */
  $handler->display->display_options['fields']['field_intended_activities']['id'] = 'field_intended_activities';
  $handler->display->display_options['fields']['field_intended_activities']['table'] = 'field_data_field_intended_activities';
  $handler->display->display_options['fields']['field_intended_activities']['field'] = 'field_intended_activities';
  /* Field: Registration: Neighbour Nomination */
  $handler->display->display_options['fields']['field_neighbour_nomination']['id'] = 'field_neighbour_nomination';
  $handler->display->display_options['fields']['field_neighbour_nomination']['table'] = 'field_data_field_neighbour_nomination';
  $handler->display->display_options['fields']['field_neighbour_nomination']['field'] = 'field_neighbour_nomination';
  /* Field: Registration: Other Artist Name */
  $handler->display->display_options['fields']['field_other_artist_name']['id'] = 'field_other_artist_name';
  $handler->display->display_options['fields']['field_other_artist_name']['table'] = 'field_data_field_other_artist_name';
  $handler->display->display_options['fields']['field_other_artist_name']['field'] = 'field_other_artist_name';
  /* Field: Registration: Passes for Attending Staff */
  $handler->display->display_options['fields']['field_staff_names']['id'] = 'field_staff_names';
  $handler->display->display_options['fields']['field_staff_names']['table'] = 'field_data_field_staff_names';
  $handler->display->display_options['fields']['field_staff_names']['field'] = 'field_staff_names';
  $handler->display->display_options['fields']['field_staff_names']['delta_offset'] = '0';
  /* Field: Registration: Postal Address */
  $handler->display->display_options['fields']['field_postal_address']['id'] = 'field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['field'] = 'field_postal_address';
  /* Field: Registration: State entity */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'registration';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'State';
  /* Field: Registration: Table Name */
  $handler->display->display_options['fields']['field_table_name']['id'] = 'field_table_name';
  $handler->display->display_options['fields']['field_table_name']['table'] = 'field_data_field_table_name';
  $handler->display->display_options['fields']['field_table_name']['field'] = 'field_table_name';
  /* Field: Registration: Table Selection */
  $handler->display->display_options['fields']['field_table_selection']['id'] = 'field_table_selection';
  $handler->display->display_options['fields']['field_table_selection']['table'] = 'field_data_field_table_selection';
  $handler->display->display_options['fields']['field_table_selection']['field'] = 'field_table_selection';
  /* Field: Registration: Trading Name */
  $handler->display->display_options['fields']['field_trading_name']['id'] = 'field_trading_name';
  $handler->display->display_options['fields']['field_trading_name']['table'] = 'field_data_field_trading_name';
  $handler->display->display_options['fields']['field_trading_name']['field'] = 'field_trading_name';
  /* Field: Registration: Registration type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'registration';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Type';
  /* Field: Registration: Date updated */
  $handler->display->display_options['fields']['updated']['id'] = 'updated';
  $handler->display->display_options['fields']['updated']['table'] = 'registration';
  $handler->display->display_options['fields']['updated']['field'] = 'updated';
  $handler->display->display_options['fields']['updated']['label'] = 'Updated';
  $handler->display->display_options['fields']['updated']['date_format'] = 'long';
  /* Field: Registration: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_registration';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Registration: Website Banner Image */
  $handler->display->display_options['fields']['field_website_banner_image']['id'] = 'field_website_banner_image';
  $handler->display->display_options['fields']['field_website_banner_image']['table'] = 'field_data_field_website_banner_image';
  $handler->display->display_options['fields']['field_website_banner_image']['field'] = 'field_website_banner_image';
  $handler->display->display_options['fields']['field_website_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_website_banner_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Registration: Website Blurb */
  $handler->display->display_options['fields']['field_website_blurb']['id'] = 'field_website_blurb';
  $handler->display->display_options['fields']['field_website_blurb']['table'] = 'field_data_field_website_blurb';
  $handler->display->display_options['fields']['field_website_blurb']['field'] = 'field_website_blurb';
  /* Field: Registration: Website URL */
  $handler->display->display_options['fields']['field_website_url']['id'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['table'] = 'field_data_field_website_url';
  $handler->display->display_options['fields']['field_website_url']['field'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website_url']['delta_offset'] = '0';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['state_label']['id'] = 'state_label';
  $handler->display->display_options['filters']['state_label']['table'] = 'registration';
  $handler->display->display_options['filters']['state_label']['field'] = 'state_label';
  $handler->display->display_options['filters']['state_label']['operator'] = 'in';
  $handler->display->display_options['filters']['state_label']['value'] = array(
    1 => '1',
    4 => '4',
  );
  $handler->display->display_options['filters']['state_label']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'export.json';
  $export['approved_registrations'] = $view;

  return $export;
}
