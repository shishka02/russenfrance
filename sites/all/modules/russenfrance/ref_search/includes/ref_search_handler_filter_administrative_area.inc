<?php

/**
 * @file
 * Contains SearchApiViewsHandlerFilter.
 */

/**
 * Views filter handler base class for handling all "normal" cases.
 */
class REFSearchViewsHandlerFilterAdministrativeArea extends SearchApiViewsHandlerFilter {
  /**
   * Provide a form for setting the filter value.
   */
  public function value_form(&$form, &$form_state) {
    while (is_array($this->value) && count($this->value) < 2) {
      $this->value = $this->value ? reset($this->value) : NULL;
    }
    
    module_load_include('inc', 'ref_addressfield_autocomplete', 'ref_addressfield_autocomplete.regions.fr');
    $options = ref_addressfield_autocomplete_get_regions_fr();

    $form['value'] = array(
      '#type' => 'select',
      '#options' => $options,
      '#title' => empty($form_state['exposed']) ? t('Value') : '',
      //'#size' => 30,
      '#default_value' => isset($this->value) ? $this->value : '',
    );

    // Hide the value box if the operator is 'empty' or 'not empty'.
    // Radios share the same selector so we have to add some dummy selector.
    if (empty($form_state['exposed'])) {
      $form['value']['#states']['visible'] = array(
        ':input[name="options[operator]"],dummy-empty' => array('!value' => 'empty'),
        ':input[name="options[operator]"],dummy-not-empty' => array('!value' => 'not empty'),
      );
    }
    elseif (!empty($this->options['expose']['use_operator'])) {
      $name = $this->options['expose']['operator_id'];
      $form['value']['#states']['visible'] = array(
        ':input[name="' . $name . '"],dummy-empty' => array('!value' => 'empty'),
        ':input[name="' . $name . '"],dummy-not-empty' => array('!value' => 'not empty'),
      );
    }
  }
}
