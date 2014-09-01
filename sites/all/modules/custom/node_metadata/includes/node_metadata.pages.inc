<?php

//page callback from page callback in node_metadata.module
function node_metadata_page($node) {
  //use the drupal shortcut to get the entire node.
  //the node_load loads the node object here, but we don't really need it if
  //we pass in the entire node.
  //$node = node_load($nid);
  $output = '';
  
  $output .= '<div><label>Author:</label>' . $node->name . '</div>';
  $output .= '<div><label>Created:</label>' . format_date($node->created) . '</div>';
  $output .= '<div><label>Updated:</label>' . format_date($node->changed) . '</div>';
  $output .= '<div><label>Comment Count:</label>' . $node->comment_count . '</div>';
  return $output;
}