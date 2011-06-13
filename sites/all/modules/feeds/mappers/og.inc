<?php
// $Id: og.inc,v 1.1.2.1 2010/10/25 22:43:03 alexb Exp $

/**
 * @file
 * On behalf implementation of mapping hooks for Organic Groups module.
 */

/**
 * Implementation of hook_feeds_parser_sources_alter().
 */
function og_feeds_parser_sources_alter(&$sources, $content_type) {
  if (!empty($content_type)) {
    $sources['parent:og_groups'] = array(
      'name' => t('Feed node: Organic group(s)'),
      'description' => t('One or more organic groups that the feed node is part of or the organic group that the feed node represents.'),
      'callback' => 'og_feeds_get_source',
    );
  }
  $sources['user:og_register'] = array(
    'name' => 'User: Organic Group(s)',
    'callback' => 'og_feeds_get_source',
    'description' => t('One or more organic groups that the importung user is part of.'),
  );
}

/**
 * Callback, returns OG of feed node.
 */
function og_feeds_get_source(FeedsImportBatch $batch, $key) {
 switch($key) {
   case 'parent:og_groups':
      if ($node = node_load($batch->feed_nid)) {
        if (in_array($node->type, og_get_types('group'))) {
          return array(
            $node->nid => $node->nid,
          );
        }
        else {
          return isset($node->og_groups) ? $node->og_groups : NULL;
        }
      }      
      break;
      
   case 'user:og_register':
     global $user;
      foreach ($user->og_groups as $nid => $og_array) {
       $field[$nid] = $nid;
     }
     return $field;
      break;
 }
}

/**
 * Implementation of hook_feeds_node_processor_targets_alter().
 */
function og_feeds_node_processor_targets_alter(&$targets, $content_type) {
  if (in_array($content_type, og_get_types('group_post'))) {
    $targets['og_groups:title'] = array(
      'name' => t('Organic group(s) (by Title)'),
      'callback' => 'og_feeds_set_target',
      'description' => t('One or more organic groups that the node is part of, matched by node title.'),
      'real_target' => 'og_groups',
    );
    $targets['og_groups:nid'] = array(
      'name' => t('Organic group(s) (by NID)'),
      'callback' => 'og_feeds_set_target',
      'description' => t('One or more organic groups that the node is part of, matched by node nid.'),
      'real_target' => 'og_groups',
    );
    $targets['og_groups:url'] = array(
      'name' => t('Organic group(s) (by URL)'),
      'callback' => 'og_feeds_set_target',
      'description' => t('One or more organic groups that the node is part of, matched by Feeds URL.'),
      'real_target' => 'og_groups',
    );
    $targets['og_groups:guid'] = array(
      'name' => t('Organic group(s) (by GUID)'),
      'callback' => 'og_feeds_set_target',
      'description' => t('One or more organic groups that the node is part of, matched by Feeds GUID.'),
      'real_target' => 'og_groups',
    );
  }
  if (in_array($content_type, og_get_types('group'))) {
    $targets['og_description'] = array(
      'name' => t('Organic group description'),
      'callback' => 'og_feeds_set_target',
      'description' => t('Set the description of an imported Organic Group node.'),
    );
  }
}

/**
 * Implementation of feeds_user_processor_targets_alter().
 */
function og_feeds_user_processor_targets_alter(&$targets) {
  $targets['og_register:title'] = array(
    'name' => 'Organic Group(s) (by Title)',
    'callback' => 'og_feeds_set_user_target',
    'description' => t('The user is assigned as a member of the organic group, matched by Title.'),
  );
  $targets['og_register:nid'] = array(
    'name' => 'Organic Group(s) (by NID)',
    'callback' => 'og_feeds_set_user_target',
    'description' => t('The user is assigned as a member of the organic group, matched by NID.'),
  );
  $targets['og_register:url'] = array(
    'name' => 'Organic Group(s) (by URL)',
    'callback' => 'og_feeds_set_user_target',
    'description' => t('The user is assigned as a member of the organic group, matched by URL.'),
  );
  $targets['og_register:guid'] = array(
    'name' => 'Organic Group (by GUID)',
    'callback' => 'og_feeds_set_user_target',
    'description' => t('The user is assigned as a member of the organic group, matched by GUID.'),
  );
}

/**
 * Callback for mapping.
 */
function og_feeds_set_target($node, $target, $value) {
  // Determine whether we are matching against the title or nid.
  list($target, $match_key) = explode(':', $target, 2);

  // Allow for multiple-value fields.
  $value = is_array($value) ? $value : array($value);

  // Allow importing to the same target with multiple mappers.
  $field = isset($node->{$target}) ? $node->{$target} : array();

  // Match values against nodes and add to field.
  foreach ($value as $v) {
    switch($target) {
     case 'og_groups':
        switch($match_key) {
         case 'url':
         case 'guid':
           // Lookup node ID by Feeds unique value.
           if ($nid = db_result(db_query("SELECT nid FROM {feeds_node_item} WHERE %s = '%s'", $match_key, $v))) {
             // Ensure nid is a valid node id for this field (and use first result).
             $fieldvalue[] = key(_og_feeds_potential_references('', NULL, array($nid)));
           }
           break;
   
         case 'title':
           // Validate title.
           if ((is_string($v) && $v !== '') || is_numeric($v)) {
             // Lookup potential exact matches for the value (and use first result).
             $fieldvalue[] = key(_og_feeds_potential_references($v, 'equals', array(), 1));
           }
           break;

         case 'nid':
         default:
           // Ensure nid is a valid node id for this field (and use first result).
           $fieldvalue[] = key(_og_feeds_potential_references('', NULL, array($v)));
           break;
       }
       break;
       
     case 'og_description':
       $fieldvalue = $v;
       break;
   }
  }
  
  $node->{$target} = $fieldvalue;
}

/**
 * Set the user profile target after import.
 */
function og_feeds_set_user_target($account, $target, $value) {
 // Determine whether we are matching against the title or nid.
  list($target, $match_key) = explode(':', $target, 2);
  
  // Allow for multiple-value fields.
  $value = is_array($value) ? $value : array($value);

  // Allow importing to the same target with multiple mappers.
  $field = isset($account->{$target}) ? $account->{$target} : array();

  // Match values against nodes and add to field.
  foreach ($value as $v) {
    switch($match_key) {
     case 'url':
      case 'guid':
        // Lookup node ID by Feeds unique value.
        if ($nid = db_result(db_query("SELECT nid FROM {feeds_node_item} WHERE %s = '%s'", $match_key, $v))) {
          // Ensure nid is a valid node id for this field (and use first result).
          $nid = key(_og_feeds_potential_references('', NULL, array($nid)));
          $field[$nid] = $nid;
        }
        break;

      case 'title':
        // Validate title.
        if ((is_string($v) && $v !== '') || is_numeric($v)) {
          // Lookup potential exact matches for the value (and use first result).
          $nid = key(_og_feeds_potential_references($v, 'equals', array(), 1));
          $field[$nid] = $nid;
        }
        break;

      case 'nid':
      default:
        // Ensure nid is a valid node id for this field (and use first result).
        $nid = key(_og_feeds_potential_references('', NULL, array($v)));
        $field[$nid] = $nid;
        break;
    }
  }
  
  $account->{$target} = $field;
  return $account;
}

/*
 * Helper function for looking up potential Organic Group node references by title or id
 */
function _og_feeds_potential_references($string = '', $match = 'contains', $ids = array(), $limit = NULL) {
  static $references = array();

  // Set a unique CID for this reference lookup
  $cid = $match .':'. ($string !== '' ? $string : implode('-', $ids)) .':'. $limit;

  if (!isset($references[$cid])) {
    $references[$cid] = array();
   $og_types = array();
   $where = array();
   $args = array();
 
   if (is_array(og_get_types('group'))) {
     foreach (array_filter(og_get_types('group')) as $og_type) {
       $og_types[] = "n.type = '%s'";
       $args[] = $og_type;
     }
   }
 
   $where[] = implode(' OR ', $og_types);
 
   if (count($og_types)) {
     if ($string !== '') {
       $like = $GLOBALS["db_type"] == 'pgsql' ? "ILIKE" : "LIKE";
       $match_clauses = array(
         'contains' => "$like '%%%s%%'",
         'equals' => "= '%s'",
         'starts_with' => "$like '%s%%'",
       );
       $where[] = 'n.title '. (isset($match_clauses[$match]) ? $match_clauses[$match] : $match_clauses['contains']);
       $args[] = $string;
     }
     elseif ($ids) {
       $where[] = 'n.nid IN (' . db_placeholders($ids) . ')';
       $args = array_merge($args, $ids);
     }
   
     $where_clause = $where ? 'WHERE ('. implode(') AND (', $where) .')' : '';
     $sql = db_rewrite_sql("SELECT n.nid, n.title AS node_title, n.type AS node_type FROM {node} n $where_clause ORDER BY n.title, n.type");
     $result = $limit ? db_query_range($sql, $args, 0, $limit) : db_query($sql, $args);

     while ($node = db_fetch_object($result)) {
       $references[$cid][$node->nid] = array(
         'title' => $node->node_title,
         'rendered' => check_plain($node->node_title),
       );
     }
   }
  }

  return $references[$cid];
}