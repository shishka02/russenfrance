<?php
/**
 * @file
 * ref_common.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function ref_common_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['fr'] = array(
  'site_name' => 'RUSS en FRANCE',
  'site_slogan' => 'Portail pour les Russes vo France',
);
  $realm_variables['language']['ru'] = array(
  'site_name' => 'RUSS en FRANCE',
  'site_slogan' => 'Портал для русских во Франции',
);

return $realm_variables;
}
