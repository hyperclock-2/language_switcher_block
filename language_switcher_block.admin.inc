<?php
/**
 * @file
 * Admin settings for Language Switcher Block.
 */

/**
 * Admin settings form.
 */
function language_switcher_block_admin_form($form, &$form_state) {
  // Load config values
  $config = config('language_switcher_block.settings');
  $display_mode = $config->get('display_mode');
  
  $form['description'] = array(
    '#markup' => '<p>' . t('Configure how the language switcher block should display languages.') . '</p>',
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
function language_switcher_block_admin_form_submit($form, &$form_state) {
  $config = config('language_switcher_block.settings');
  $config->set('display_mode', $form_state['values']['display_mode']);
  $config->save();
  
  backdrop_set_message(t('The configuration options have been saved.'));
}