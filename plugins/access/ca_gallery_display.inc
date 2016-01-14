<?php

/**
 * @file
 * Plugin to provide access control based upon ca_staff admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Gallery: Display Type'),
  'description' => t('Control access by staff list type.'),
  'callback' => 'ca_gallery_display_access_check',
  'settings form' => 'ca_gallery_display_access_settings',
  'settings form submit' => 'ca_gallery_display_access_settings_submit',
  'summary' => 'ca_gallery_display_access_summary',
);

/**
 * Settings form for the 'by gallery list type' access plugin.
 */
function ca_gallery_display_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_gallery_display'] = array(
    '#type' => 'select',
    '#title' => t('Gallery\'s display type'),
    '#options' => array(
      'ca_gallery_display_landscape' => t('Display Landscape'),
      'ca_gallery_display_portrait' => t('Display Portrait'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_gallery_display'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_gallery_display_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_gallery_display_access_check($conf, $context) {
  return $conf['ca_gallery_display'] == variable_get('ca_gallery_display', 'ca_gallery_display_landscape');
}

/**
 * Provide a summary description based upon the checked gallery list type.
 */
function ca_gallery_display_access_summary($conf, $context) {
  switch ($conf['ca_gallery_display']) {
    case 'ca_gallery_display_landscape':
      $template = t('Display Landscape');
      break;
    case 'ca_gallery_display_portrait':
      $template = t('Display Portrait');
      break;
  }
    
  return t('Display template is set to: ' . $template);
}
