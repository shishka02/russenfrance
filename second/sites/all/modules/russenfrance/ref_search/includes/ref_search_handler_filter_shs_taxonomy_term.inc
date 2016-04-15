<?php

/**
 * @file
 * Contains the SearchApiViewsHandlerFilterOptions class.
 */

/**
 * Views filter handler for fields with a limited set of possible values.
 */
class REFSearchViewsHandlerFilterSHSTaxonomyTerm extends SearchApiViewsHandlerFilterOptions {
  /**
   * Provide a form for setting options.
   */
  public function value_form(&$form, &$form_state) {
    global $language;
    
    $field_info = field_info_field($this->options['field']);
    $vocabulary_name = $field_info['settings']['allowed_values'][0]['vocabulary'];

    $multiple = $this->options['expose']['multiple'];
    $vocabulary = taxonomy_vocabulary_machine_name_load($vocabulary_name);
    if (empty($vocabulary)) {
      $form['markup'] = array(
        '#markup' => '<div class="form-item">' . t('An invalid vocabulary is selected. Please change it in the options.') . '</div>',
      );
      return;
    }

    if ($this->options['exposed']) { /*$this->options['type'] == 'shs' &&*/ 
      $identifier = $this->options['expose']['identifier'];

      // Get parents of selected term.
      $default_value = empty($this->value) ? 0 : $this->value;

      if (!empty($form_state['input'][$identifier])) {
        $default_value = $form_state['input'][$identifier];
        if (!is_array($default_value) && $multiple) {
          $default_value = array($default_value);
        }
      }
      
      $parents = array();
      if (!empty($default_value) && $default_value != 'All') {
        if (is_array($default_value) && $default_value[0] != 'All') {
          if (strpos($default_value[0], ',') !== FALSE || strpos($default_value[0], '+') !== FALSE) {
            $values = array();
            foreach ($default_value as $default) {
              $values += preg_split('/[,\+]+/', $default, -1, PREG_SPLIT_NO_EMPTY);
            }
            $form_state['input'][$identifier] = empty($values) ? 'All' : $values;
            $default_value = $values;
          }
          $parents_multiple = array();
          foreach ($default_value as $delta => $tid) {
            $parents_multiple[] = $tid;
          }
          $parents[] = array('tid' => $parents_multiple);
        }
        elseif (is_string($default_value)) {
          $term_parents = taxonomy_get_parents_all($default_value);
          // Remove selected term from list.
          array_shift($term_parents);
          foreach (array_reverse($term_parents) as $term) {
            $parents[] = array('tid' => $term->tid);
          }
          // Add current term (name not needed).
          $parents[] = array('tid' => $default_value);
        }
      }
      
      // Add fake item for next level.
      $parents[] = array('tid' => 0);

      $element_settings = array(
        'create_new_terms' => FALSE,
        'create_new_levels' => FALSE,
        'required' => FALSE,
        'language' => $language,
      );
      //if (module_exists('chosen') && !empty($this->options['use_chosen'])) {
        //$element_settings['use_chosen'] = $this->options['use_chosen'];
      //}
      if (!empty($this->options['exposed']) && !empty($this->options['expose']['required'])) {
        $element_settings['required'] = TRUE;
      }
      if (!empty($this->options['node_count'])) {
        $element_settings['node_count'] = $this->options['node_count'];
      }
      
      // Generate a random hash to avoid merging of settings by drupal_add_js.
      // This is necessary until http://drupal.org/node/208611 lands for D7.
      $js_hash = _shs_create_hash();
      // Create settings needed for our js magic.
      $settings_js = array(
        'shs' => array(
          $identifier . ($multiple ? '[]' : '') => array(
            $js_hash => array(
              'vid' => $vocabulary->vid,
              'settings' => $element_settings,
              'default_value' => $default_value,
              'parents' => $parents,
              'multiple' => $multiple,
              'any_label' => t('- Рубрика -'),
              'any_value' => 'All',
            ),
          ),
        ),
      );
      drupal_alter(array('shs_js_settings', "shs_{$identifier}_js_settings"), $settings_js, $identifier, $vocabulary->vid);
      // Add settings.
      drupal_add_js($settings_js, 'setting');
      // Add behavior.
      drupal_add_js(drupal_get_path('module', 'shs') . '/js/shs.js');

      $options = array();
      $query = db_select('taxonomy_term_data', 'td');
      $query->innerJoin('taxonomy_vocabulary', 'tv', 'td.vid = tv.vid');
      $query->fields('td');
      $query->orderby('tv.weight');
      $query->orderby('tv.name');
      $query->orderby('td.weight');
      $query->orderby('td.name');
      $query->addTag('term_access');
      $query->condition('tv.machine_name', $vocabulary->machine_name);
      $result = $query->execute();

      $tids = array();
      foreach ($result as $term) {
        $tids[] = $term->tid;
      }
      $entities = taxonomy_term_load_multiple($tids);
      foreach ($entities as $entity_term) {
        $options[$entity_term->tid] = entity_label('taxonomy_term', $entity_term);
      } 
      
      $default_value = (array) $this->value; 
      
      // Rewrite default select to textfield.
      $form['value'] = array(
        '#type' => 'select',
        '#multiple' => $multiple,
        '#options' => $options,
        '#size' => count($options), 
        '#default_value' => $default_value,
        '#attributes' => array(
          'class' => array('element-invisible', 'shs-enabled'),
        ),
      );
      
      if (!empty($form_state['exposed']) && isset($identifier) && empty($form_state['input'][$identifier]) || $multiple && isset($form_state['input'][$identifier][0])) {
        $form_state['input'][$identifier] = empty($default_value_str) ? 'All' : $default_value_str;
      }
    }

    //if (empty($form_state['exposed'])) {
      //// Retain the helper option.
      //$this->helper->options_form($form, $form_state);
    //}

  }
  
  /**
   * Add this filter to the query.
   */
  public function query() {
    if ($this->operator === 'empty') {
      $this->query->condition($this->real_field, NULL, '=', $this->options['group']);
      return;
    }
    if ($this->operator === 'not empty') {
      $this->query->condition($this->real_field, NULL, '<>', $this->options['group']);
      return;
    }

    // Extract the value.
    while (is_array($this->value) && count($this->value) == 1) {
      $this->value = reset($this->value);
    }

    // Determine operator and conjunction. The defaults are already right for
    // "all of".
    $operator = '=';
    $conjunction = 'AND';
    switch ($this->operator) {
      case '=':
        $conjunction = 'OR';
        break;

      case '<>':
        $operator = '<>';
        break;
    }

    // If the value is an empty array, we either want no filter at all (for
    // "is none of"), or want to find only items with no value for the field.
    if ($this->value === array()) {
      if ($operator != '<>') {
        $this->query->condition($this->real_field, NULL, '=', $this->options['group']);
      }
      return;
    }
    
    // Make parent vocabulary search for children
    if(is_scalar($this->value) && $this->value !== '') {
      $field_info = field_info_field($this->options['field']);
      $vocabulary_name = $field_info['settings']['allowed_values'][0]['vocabulary'];
      $vocabulary = taxonomy_vocabulary_machine_name_load($vocabulary_name);
      $children = $this->_taxonomy_get_children($this->value, $vocabulary->vid);
      if(!empty($children)) {
        $children[] = $this->value;
        $this->value = $children;
      }
    }

    if (is_scalar($this->value) && $this->value !== '') {
      $this->query->condition($this->real_field, $this->value, $operator, $this->options['group']);
    }
    elseif ($this->value) {
      $filter = $this->query->createFilter($conjunction);
      // $filter will be NULL if there were errors in the query.
      if ($filter) {
        foreach ($this->value as $v) {
          $filter->condition($this->real_field, $v, $operator);
        }
        $this->query->filter($filter, $this->options['group']);
      }
    }
  }
  
  private function _taxonomy_get_children($tid, $vid = 0) {
    //$children = &drupal_static(__FUNCTION__, array());

    if ($tid && !isset($children[$tid])) {
      $query = db_select('taxonomy_term_data', 't');
      $query->join('taxonomy_term_hierarchy', 'h', 'h.tid = t.tid');
      $query->addField('t', 'tid');
      $query->condition('h.parent', $tid);
      if ($vid) {
        $query->condition('t.vid', $vid);
      }
      $query->addTag('term_access');
      $query->orderBy('t.weight');
      $query->orderBy('t.name');
      $tids = $query->execute()->fetchCol();
      //$children[$tid] = taxonomy_term_load_multiple($tids);
    }

    //return isset($children[$tid]) ? $children[$tid] : array();
    return $tids;
  }
}
