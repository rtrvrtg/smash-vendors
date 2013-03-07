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
  $items['rules_new_vendor_application'] = entity_import('rules_config', '{ "rules_new_vendor_application" : {
      "LABEL" : "New Vendor Application",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "registration" ],
      "ON" : [ "registration_insert" ],
      "DO" : [
        { "mail" : {
            "to" : "exhibitors@smash.org.au",
            "subject" : "New Vendor Application for [registration:entity]",
            "message" : "A new vendor has applied using email address [registration:anon-mail]\\r\\nTheir application ID is [registration:registration-id]\\r\\n\\r\\nView their application at [registration:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
