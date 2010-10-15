<?php
// $Id: itweak_login.pages.inc,v 1.5 2009/08/07 04:27:01 iva2k Exp $

/**
 * @file
 * Implementation of itweak_login forms.
 */

function itweak_login_admin_settings_submit($form, &$form_state) {
  module_invoke('menu', 'rebuild');
  drupal_set_message(t('Menus have been rebuilt.'));
}

/**
 * Module settings form.
 */
function _itweak_login_admin_settings() {
  $form = array();
  $form['#submit'] = array('itweak_login_admin_settings_submit');
  
  $lt_enabled = (module_exists('logintoboggan') && variable_get('logintoboggan_login_with_email', 0));
  $form['itweak_login_username_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Label for "Username" field'),
    '#default_value' => variable_get('itweak_login_username_label', ''),
    '#description' => t('Text to use as "Username" textfield label. Leave empty to use the default.'),
  );
  
  $form['itweak_login_password_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Label for "Password" field'),
    '#default_value' => variable_get('itweak_login_password_label', ''),
    '#description' => t('Text to use as "Password" textfield label. Leave empty to use the default.'),
  );

  // Avoid conflict with LoginToboggan if it is installed and enables email login.
  // Should use theme functions lt_username_title() and lt_password_title() instead.
  if ($lt_enabled) {
    global $base_url;
    $form['itweak_login_username_label']['#disabled'] = TRUE;
    $form['itweak_login_password_label']['#disabled'] = TRUE;

    $form['itweak_login_username_label']['#description'] = t('Disabled, because <a href="!url">LoginToboggan</a> controls that label (Setting "!checkbox" is enabled).',
	  array(
	    '!url' => $base_url . '/admin/user/logintoboggan', 
	    '!checkbox' => t('Allow users to login using their e-mail address'),
	));
    $form['itweak_login_password_label']['#description'] = t('Disabled, because <a href="!url">LoginToboggan</a> controls that label (Setting "!checkbox" is enabled).',
	  array(
	    '!url' => $base_url . '/admin/user/logintoboggan', 
	    '!checkbox' => t('Allow users to login using their e-mail address'),
	));
  }
  
  $form['itweak_login_register_button'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show "Register" button on user login'),
    '#default_value' => variable_get('itweak_login_register_button', FALSE),
    '#description' => t('If checked, use "Register" button instead of the "Create new account" link on Login page.'),
  );

  $form['itweak_login_register_button_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name for "Register" button'),
    '#default_value' => variable_get('itweak_login_register_button_name', ''),
    '#description' => t('(Only if "Show button" is enabled) Text to use as "Register" button label.  Leave empty to use the default.'),
  );

  $form['itweak_login_login_button_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name for "Log in" button'),
    '#default_value' => variable_get('itweak_login_login_button_name', ''),
    '#description' => t('Text to use as "Log in" button label.  Leave empty to use the default.'),
  );

  $form['itweak_login_register_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Text for "Create new account" link'),
    '#default_value' => variable_get('itweak_login_register_name', ''),
    '#description' => t('(Only if "Show button" is disabled) Text to use in the "Create new account" link.  Leave empty to use the default.'),
  );

  $form['itweak_login_recover_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Text for "Request new password" link'),
    '#default_value' => variable_get('itweak_login_recover_name', ''),
    '#description' => t('Text to use in the "Request new password" link.  Leave empty to use the default.'),
  );

  $form['itweak_login_recover_url'] = array(
    '#type' => 'textfield',
    '#title' => t('URL for "Request new password" link'),
    '#default_value' => variable_get('itweak_login_recover_url', ''),
    '#description' => t('URL to use in the "Request new password" link.  Leave empty to use the default (user/password).'),
  );
  
  return $form;
}
function itweak_login_admin_settings() {
  return system_settings_form(_itweak_login_admin_settings());
}

/**
 * After_build callback for login forms.
 */
function itweak_login_form_after_build($form, &$form_state) {
  // FAPI ensures a weight is assigned to all elements before after_build
  // callback is invoked.

  // Get the weight assigned to the submit button.
  $original_submit_weight = $form['submit']['#weight'];
/*
  // Increase the weight of all elements with a weight equal or
  // greater to the weight assigned to the submit button to make
  // room for the "Register" button.
  foreach (element_children($form) as $key) {
    if (isset($form[$key]) && $form[$key]) {
      if ($form[$key]['#weight'] >= $original_submit_weight) {
        $form[$key]['#weight'] += 1;
      }
    }
  }
*/

  // Give the "Register" button the weight originally assigned
  // to the submit button + tiny bit - that will place it right after the "Log in" button.
  $form['register']['#weight'] = $original_submit_weight + 0.001;

  // Ensure drupal_render() performs the sort by weight step on the form.
  unset($form['#sorted']);

  // Adjust the tabindex of the plain login form.
  if (isset($form['submit']['#attributes']) && isset($form['submit']['#attributes']['tabindex'])) {
    $tabindex = (int)$form['submit']['#attributes']['tabindex'];
    $form['register']['#attributes']['tabindex'] = $tabindex + 1;
  }

  return $form;
}
