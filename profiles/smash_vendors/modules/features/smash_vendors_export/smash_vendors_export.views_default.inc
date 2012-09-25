<?php
/**
 * @file
 * smash_vendors_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function smash_vendors_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'registration_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'registration';
  $view->human_name = 'Registration Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer registration';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Registration: Registration to Node */
  $handler->display->display_options['relationships']['registration_related_node']['id'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_related_node']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_node']['field'] = 'registration_related_node';
  /* Relationship: Registration: Website Banner Image (field_website_banner_image:fid) */
  $handler->display->display_options['relationships']['field_website_banner_image_fid']['id'] = 'field_website_banner_image_fid';
  $handler->display->display_options['relationships']['field_website_banner_image_fid']['table'] = 'field_data_field_website_banner_image';
  $handler->display->display_options['relationships']['field_website_banner_image_fid']['field'] = 'field_website_banner_image_fid';
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  /* Field: Registration: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'registration';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Registration: State */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'registration';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  /* Field: Registration: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Registration: Anon_mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  /* Field: Registration: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_registration';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Registration: Business/Entity Name */
  $handler->display->display_options['fields']['field_business_name']['id'] = 'field_business_name';
  $handler->display->display_options['fields']['field_business_name']['table'] = 'field_data_field_business_name';
  $handler->display->display_options['fields']['field_business_name']['field'] = 'field_business_name';
  /* Field: Registration: ABN */
  $handler->display->display_options['fields']['field_abn']['id'] = 'field_abn';
  $handler->display->display_options['fields']['field_abn']['table'] = 'field_data_field_abn';
  $handler->display->display_options['fields']['field_abn']['field'] = 'field_abn';
  /* Field: Registration: Trading Name */
  $handler->display->display_options['fields']['field_trading_name']['id'] = 'field_trading_name';
  $handler->display->display_options['fields']['field_trading_name']['table'] = 'field_data_field_trading_name';
  $handler->display->display_options['fields']['field_trading_name']['field'] = 'field_trading_name';
  /* Field: Registration: Table Name */
  $handler->display->display_options['fields']['field_table_name']['id'] = 'field_table_name';
  $handler->display->display_options['fields']['field_table_name']['table'] = 'field_data_field_table_name';
  $handler->display->display_options['fields']['field_table_name']['field'] = 'field_table_name';
  /* Field: Registration: Artist Name */
  $handler->display->display_options['fields']['field_artist_name']['id'] = 'field_artist_name';
  $handler->display->display_options['fields']['field_artist_name']['table'] = 'field_data_field_artist_name';
  $handler->display->display_options['fields']['field_artist_name']['field'] = 'field_artist_name';
  /* Field: Registration: Other Artist Name */
  $handler->display->display_options['fields']['field_other_artist_name']['id'] = 'field_other_artist_name';
  $handler->display->display_options['fields']['field_other_artist_name']['table'] = 'field_data_field_other_artist_name';
  $handler->display->display_options['fields']['field_other_artist_name']['field'] = 'field_other_artist_name';
  /* Field: Registration: Postal Address */
  $handler->display->display_options['fields']['field_postal_address']['id'] = 'field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['field'] = 'field_postal_address';
  /* Field: Registration: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  /* Field: Registration: Contact Number */
  $handler->display->display_options['fields']['field_contact_number']['id'] = 'field_contact_number';
  $handler->display->display_options['fields']['field_contact_number']['table'] = 'field_data_field_contact_number';
  $handler->display->display_options['fields']['field_contact_number']['field'] = 'field_contact_number';
  /* Field: Registration: Neighbour Nomination */
  $handler->display->display_options['fields']['field_neighbour_nomination']['id'] = 'field_neighbour_nomination';
  $handler->display->display_options['fields']['field_neighbour_nomination']['table'] = 'field_data_field_neighbour_nomination';
  $handler->display->display_options['fields']['field_neighbour_nomination']['field'] = 'field_neighbour_nomination';
  /* Field: Registration: Intended Activities */
  $handler->display->display_options['fields']['field_intended_activities']['id'] = 'field_intended_activities';
  $handler->display->display_options['fields']['field_intended_activities']['table'] = 'field_data_field_intended_activities';
  $handler->display->display_options['fields']['field_intended_activities']['field'] = 'field_intended_activities';
  /* Field: Registration: Artist Blurb */
  $handler->display->display_options['fields']['field_artist_blurb']['id'] = 'field_artist_blurb';
  $handler->display->display_options['fields']['field_artist_blurb']['table'] = 'field_data_field_artist_blurb';
  $handler->display->display_options['fields']['field_artist_blurb']['field'] = 'field_artist_blurb';
  /* Field: Registration: Table Selection */
  $handler->display->display_options['fields']['field_table_selection']['id'] = 'field_table_selection';
  $handler->display->display_options['fields']['field_table_selection']['table'] = 'field_data_field_table_selection';
  $handler->display->display_options['fields']['field_table_selection']['field'] = 'field_table_selection';
  /* Field: Registration: Floorspace */
  $handler->display->display_options['fields']['field_floorspace']['id'] = 'field_floorspace';
  $handler->display->display_options['fields']['field_floorspace']['table'] = 'field_data_field_floorspace';
  $handler->display->display_options['fields']['field_floorspace']['field'] = 'field_floorspace';
  /* Field: Registration: Additional Artists / Helpers */
  $handler->display->display_options['fields']['field_additional_artists_helpers']['id'] = 'field_additional_artists_helpers';
  $handler->display->display_options['fields']['field_additional_artists_helpers']['table'] = 'field_data_field_additional_artists_helpers';
  $handler->display->display_options['fields']['field_additional_artists_helpers']['field'] = 'field_additional_artists_helpers';
  $handler->display->display_options['fields']['field_additional_artists_helpers']['delta_offset'] = '0';
  /* Field: Registration: Passes for Attending Staff */
  $handler->display->display_options['fields']['field_staff_names']['id'] = 'field_staff_names';
  $handler->display->display_options['fields']['field_staff_names']['table'] = 'field_data_field_staff_names';
  $handler->display->display_options['fields']['field_staff_names']['field'] = 'field_staff_names';
  $handler->display->display_options['fields']['field_staff_names']['delta_offset'] = '0';
  /* Field: Registration: Additional Notes */
  $handler->display->display_options['fields']['field_additional_notes']['id'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['table'] = 'field_data_field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['field'] = 'field_additional_notes';
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
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_website_banner_image_fid';
  $handler->display->display_options['fields']['uri']['label'] = 'Website Banner Image';
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['relationship'] = 'registration_related_node';
  $handler->display->display_options['arguments']['title']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['title']['transform_dash'] = TRUE;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'application-export/%';
  $export['registration_export'] = $view;

  return $export;
}
