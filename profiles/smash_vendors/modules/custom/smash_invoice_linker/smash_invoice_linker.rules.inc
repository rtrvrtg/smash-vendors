<?php

/**
 * Implements hook_rules_action_info() on behalf of the system module.
 */
function smash_invoice_linker_rules_action_info() {
  return array(
    'smash_invoice_linker_create' => array(
      'label' => t('Create an invoice'),
      'group' => t('SMASH! Invoice Linker'),
      'parameter' => array(
        'message' => array(
          'type' => 'entity',
          'label' => t('Registration Entity'),
          'sanitize' => TRUE,
          'translatable' => TRUE,
        ),
      ),
      'base' => 'smash_invoice_linker_create',
      // 'access callback' => 'rules_system_integration_access',
    ),
  );
}
