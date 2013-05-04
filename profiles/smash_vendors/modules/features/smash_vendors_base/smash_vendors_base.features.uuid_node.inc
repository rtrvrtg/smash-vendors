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
  'title' => 'Artist',
  'log' => '',
  'status' => '1',
  'comment' => '0',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '5a588701-f87e-45fc-b888-b7db1aa6b493',
  'type' => 'registration_form',
  'language' => 'und',
  'created' => '1347890401',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '54e38ee2-599e-49ed-ae56-ed49e419266a',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Are you a manga-ka, an illustrator or a designer?',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => 'Are you a manga-ka, an illustrator or a designer?',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_registration' => array(
    'und' => array(
      0 => array(
        'registration_type' => 'artist',
      ),
    ),
  ),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="warning"><h2>Signups are full!</h2><p>Further signups will be added to a waiting list.</p></div>',
        'format' => 'full_html',
        'safe_value' => '<div class="warning"><h2>Signups are full!</h2><p>Further signups will be added to a waiting list.</p></div>',
      ),
    ),
  ),
  'field_invoice_prefix' => array(
    'und' => array(
      0 => array(
        'value' => 'ART',
        'format' => NULL,
        'safe_value' => 'ART',
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
  'publish_on' => '0',
  'unpublish_on' => '1376089200',
  'scheduler' => array(
    'published' => NULL,
    'unpublished' => 'Saturday, August 10, 2013 - 09:00',
    'publish_on' => '0',
    'unpublish_on' => '1376089200',
  ),
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2012-09-18 00:00:01 +1000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Community Group',
  'log' => '',
  'status' => '1',
  'comment' => '0',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '7d667fd9-51fa-44f0-bc12-3ee722724ae6',
  'type' => 'registration_form',
  'language' => 'und',
  'created' => '1360669348',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '6e99b0ec-71c3-4441-a1ea-1e761103db2a',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Are you a community group, a club, a not-for-profit association, or similar?',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => 'Are you a community group, a club, a not-for-profit association, or similar?',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_registration' => array(
    'und' => array(
      0 => array(
        'registration_type' => 'community_groups',
      ),
    ),
  ),
  'field_status' => array(),
  'field_invoice_prefix' => array(
    'und' => array(
      0 => array(
        'value' => 'CLB',
        'format' => NULL,
        'safe_value' => 'CLB',
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
  'date' => '2013-02-12 22:42:28 +1100',
);
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
        'value' => 'Are you a seller of DVDs, merchandise, books, video games or clothing?',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => 'Are you a seller of DVDs, merchandise, books, video games or clothing?',
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
  'field_status' => array(),
  'field_invoice_prefix' => array(
    'und' => array(
      0 => array(
        'value' => 'EXB',
        'format' => NULL,
        'safe_value' => 'EXB',
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
