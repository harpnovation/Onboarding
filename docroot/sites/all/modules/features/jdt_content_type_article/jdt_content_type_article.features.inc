<?php
/**
 * @file
 * jdt_content_type_article.features.inc
 */

/**
 * Implements hook_node_info().
 */
function jdt_content_type_article_node_info() {
  $items = array(
    'jdt_article' => array(
      'name' => t('JDT Article'),
      'base' => 'node_content',
      'description' => t('Onboarding content type
Fields:
Title: (required)
Slug: teaser of just article (required)
Article Image: image to accompany article
Body: text area description
Article Date: Date'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
