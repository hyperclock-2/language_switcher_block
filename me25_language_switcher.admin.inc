<?php
/**
 * @file
 * Admin settings for ME25 Language Switcher module.
 */

/**
 * Admin settings form.
 */
function me25_language_switcher_admin_form($form, &$form_state) {
  $config = config('me25_language_switcher.settings');
  
  $form['#config'] = 'me25_language_switcher.settings';
  
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
    '#default_value' => $config->get('display_mode') ? $config->get('display_mode') : 'flag_with_name',
  );
  
  return system_settings_form($form);
}