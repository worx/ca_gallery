<?php

/**
 * @file
 * Plugin to provide access control based upon ca_gallery admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Gallery: list type'),
  'description' => t('Control access by gallery list type.'),
  'callback' => 'ca_gallery_list_template_access_check',
  'settings form' => 'ca_gallery_list_template_access_settings',
  'settings form submit' => 'ca_gallery_list_template_access_settings_submit',
  'summary' => 'ca_gallery_list_template_access_summary',
);

/**
 * Settings form for the 'by gallery list type' access plugin.
 */
function ca_gallery_list_template_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_gallery_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Gallery\'s list template'),
    '#options' => array(
      'ca_gallery_list_template_one' => t('Template one'),
      'ca_gallery_list_template_one_flex' => t('Template one Flex'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_gallery_list_template'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_gallery_list_template_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_gallery_list_template_access_check($conf, $context) {
  return $conf['ca_gallery_list_template'] == variable_get('ca_gallery_list_template', 'ca_gallery_list_template_one_flex');
}

/**
 * Provide a summary description based upon the checked gallery list type.
 */
function ca_gallery_list_template_access_summary($conf, $context) {
  if ($conf['ca_gallery_list_template'] == 'ca_gallery_list_template_one') {
    $template = t('Template one');
  }
  else {
    $template = t('Template one Flex');
  }

  return t('Display template is set to: ' . $template);
}
