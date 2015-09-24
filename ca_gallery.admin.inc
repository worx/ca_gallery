<?php

/** 
 * @file
 * CA_Gallery admin system, which overrides the default feature settings.
 * 
 * Will allow us to make visual changes to the feature without overriding the
 * actual feature.
 */

/**
 * Defines the menu for overriding news feature settings.
 * 
 * @return
 *   Fully formed Form API array.
 */
function ca_gallery_settings_form() {
  $form = array();
  
  $form['ca_gallery_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_gallery_menu_title', 'Gallery'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
  $form['ca_gallery_panel_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Panel Title'),
    '#default_value' => variable_get('ca_gallery_panel_title', 'Gallery'),
    '#required' => TRUE,
    '#description' => t('What would you like the panel title to be?'),
  );
  $form['ca_gallery_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Gallery\'s list template'),
    '#options' => array(
      'ca_gallery_list_template_one' => t('Template one'),
      'ca_gallery_list_template_one_flex' => t('Template one Flex'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_gallery_list_template', 'ca_gallery_list_template_one'),
  );
    $form['ca_gallery_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of galleries to display'),
    '#default_value' => variable_get('ca_gallery_list_count', 16),
    '#required' => TRUE,
    '#description' => t('How many galleries would you like displayed per page? Suggested in groups for 4.'),
  );
    $form['ca_gallery_sublist_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of sub galleries to display'),
    '#default_value' => variable_get('ca_gallery_sublist_count', 4),
    '#required' => TRUE,
    '#description' => t('How many sub galleries would you like displayed per page? Suggested in groups for 4.'),
  );
  $form['ca_gallery_image_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of images to display'),
    '#default_value' => variable_get('ca_gallery_image_list_count', 16),
    '#required' => TRUE,
    '#description' => t('How many gallery images would you like displayed per page? Suggested in groups for 4.'),
  );
  
  return system_settings_form($form);
}
