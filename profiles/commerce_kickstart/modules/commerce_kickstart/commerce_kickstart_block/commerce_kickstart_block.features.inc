<?php
/**
 * @file
 * commerce_kickstart_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commerce_kickstart_block_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
