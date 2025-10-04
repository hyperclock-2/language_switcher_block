<?php
/**
 * @file
 * Admin settings for ME25 Language Switcher module.
 */

/**
 * Admin settings form.
 */
function me25_language_switcher_admin_form($form, &$form_state) {
  // Load config values
  $config = config('me25_language_switcher.settings');
  $display_mode = $config->get('display_mode');
  
  $form['description'] = array(
    '#markup' => '<p>' . t('Configure how the ME25 language switcher should display languages.') . '</p>',
  );
  
  $form['display_mode'] = array(
    '#type' => 'radios',
    '#title' => t('Display mode'),
    '#description' => t('Choose how languages should be displayed in the language switcher.'),
    '#options' => array(
      'flag_with_name' => t('Flag with language name'),
      'only_flag' => t('Only flag'),
      'only_name' => t('Only language name'),
    ),
    '#default_value' => isset($display_mode) ? $display_mode : 'flag_with_name',
  );
  
  // Add submit button
  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );
  
  return $form;
}

/**
 * Form submit handler.
 */
function me25_language_switcher_admin_form_submit($form, &$form_state) {
  $config = config('me25_language_switcher.settings');
  $config->set('display_mode', $form_state['values']['display_mode']);
  $config->save();
  
  backdrop_set_message(t('The configuration options have been saved.'));
}