<?php
/**
 * @file
 * smash_vendors_base.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function smash_vendors_base_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'Exhibitors',
  'log' => '',
  'status' => '1',
  'comment' => '0',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '780a0738-17e0-4118-b9e6-7fa65f5332e6',
  'type' => 'registration_form',
  'language' => 'und',
  'created' => '1347463932',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'f4efcf59-c77e-4ff4-8fed-71c25e930549',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Or are you a seller of DVDs, merchandise, books, video games or clothing?',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => 'Or are you a seller of DVDs, merchandise, books, video games or clothing?',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_registration' => array(
    'und' => array(
      0 => array(
        'registration_type' => 'vendor',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2012-09-13 01:32:12 +1000',
);
  return $nodes;
}
