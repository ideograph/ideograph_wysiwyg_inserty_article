<?php
/**
 * @file
 * ideograph_wysiwyg_inserty_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ideograph_wysiwyg_inserty_article_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function ideograph_wysiwyg_inserty_article_node_info() {
  $items = array(
    'inserty_article' => array(
      'name' => t('Inserty Article'),
      'base' => 'node_content',
      'description' => t('An content type meant to demonstrate different configurations of insert module with progressive enhancement.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
