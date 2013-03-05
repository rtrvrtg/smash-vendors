<?php
/**
 * @file
 * smash_vendors_base.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function smash_vendors_base_default_rules_configuration() {
  $items = array();
  $items['rules_add_invoice_to_registration'] = entity_import('rules_config', '{ "rules_add_invoice_to_registration" : {
      "LABEL" : "Add invoice to registration",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "smash_invoice_linker", "registration" ],
      "ON" : [ "registration_insert" ],
      "DO" : [ { "smash_invoice_linker_create" : { "message" : [ "registration" ] } } ]
    }
  }');
  return $items;
}
