<?php

/**
 * @file
 * Contains SearchApiViewsHandlerFilter.
 */

/**
 * Views filter handler base class for handling all "normal" cases.
 */
class REFSearchViewsHandlerFilterPostalCode extends SearchApiViewsHandlerFilter {
  /**
   * Provide a form for setting the filter value.
   */
  public function value_form(&$form, &$form_state) {
    while (is_array($this->value) && count($this->value) < 2) {
      $this->value = $this->value ? reset($this->value) : NULL;
    }
    $form['value'] = array(
      '#type' => 'textfield',
      '#title' => empty($form_state['exposed']) ? t('Value') : '',
      '#size' => 30,
      '#default_value' => isset($this->value) ? $this->value : '',
      '#autocomplete_path' => 'ref_addressfield_autocomplete/cities_autocomplete/fr',
      '#ref_country' => 'fr',
      //'#element_validate' => array('_ref_addressfield_autocomplete_widget_transform'),
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
  
  /**
   * Add this filter to the query.
   */
  public function query() {
    //// city
    //$city = FALSE;
    //$matches = array();
    //$pattern = '/^[\D]+/';
    //preg_match($pattern, $values, $matches);
    //if($matches[0]) {
      //$city = trim(substr($matches[0], 0, strlen($matches[0]) - 1));
    //}
    
    while (is_array($this->value)) {
      $this->value = $this->value ? reset($this->value) : NULL;
    }
    
    // postal code
    $this->value = trim($this->value);
    if(empty($this->value)) {
      return;
    }
    
    $postal_code = FALSE;
    $matches = array();
    $pattern = '/\([\dab]+\)/';
    preg_match($pattern, $this->value, $matches);
    if($matches[0]) {
      $postal_code = substr($matches[0], 1, strlen($matches[0])-2);
    }

    if ($this->operator === 'empty') {
      $this->query->condition($this->real_field, NULL, '=', $this->options['group']);
    }
    elseif ($this->operator === 'not empty') {
      $this->query->condition($this->real_field, NULL, '<>', $this->options['group']);
    }
    else {
      if (!empty($postal_code)) {
        //$field = (strlen($postal_code) > 3) ? $this->real_field : 'field_ref_address:administrative_area';
        $this->query->condition($this->real_field, $postal_code, $this->operator, $this->options['group']);
      }
    }
  }

}
