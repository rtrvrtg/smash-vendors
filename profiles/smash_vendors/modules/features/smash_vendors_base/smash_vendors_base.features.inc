<?php
/**
 * @file
 * smash_vendors_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function smash_vendors_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function smash_vendors_base_node_info() {
  $items = array(
    'registration_form' => array(
      'name' => t('Registration Form'),
      'base' => 'node_content',
      'description' => t('Registration Form'),
      'has_title' => '1',
      'title_label' => t('Form Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_registration_state().
 */
function smash_vendors_base_default_registration_state() {
  $items = array();
  $items['canceled'] = entity_import('registration_state', '{
    "name" : "canceled",
    "label" : "Canceled",
    "description" : "Registration was cancelled",
    "default_state" : "0",
    "active" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['complete'] = entity_import('registration_state', '{
    "name" : "complete",
    "label" : "Complete",
    "description" : "Registration has been completed.",
    "default_state" : "1",
    "active" : "1",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['pending'] = entity_import('registration_state', '{
    "name" : "pending",
    "label" : "Pending",
    "description" : "Registration is pending.",
    "default_state" : "0",
    "active" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function smash_vendors_base_default_registration_type() {
  $items = array();
  $items['artist'] = entity_import('registration_type', '{
    "name" : "artist",
    "label" : "Artist",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['vendor'] = entity_import('registration_type', '{
    "name" : "vendor",
    "label" : "Vendor",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
