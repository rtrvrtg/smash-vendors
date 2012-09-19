<?php
/**
 * @file
 * smash_vendors_siteconfig.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function smash_vendors_siteconfig_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
