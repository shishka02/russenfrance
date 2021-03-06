<?php

/**
 * @file
 * Definition of views_arg_parent_term_plugin_argument_default_parent_taxonomy_tid.
 */

/**
 * Parent Taxonomy tid default argument.
 */
class views_arg_parent_term_plugin_argument_default_parent_taxonomy_tid extends views_plugin_argument_default {
  /**
   * Class init method.
   */
  function init(&$view, &$argument, $options) {
    parent::init($view, $argument, $options);

    // Convert legacy vids option to machine name vocabularies.
    if (!empty($this->options['vids'])) {
      $vocabularies = taxonomy_get_vocabularies();
      foreach ($this->options['vids'] as $vid) {
        if (isset($vocabularies[$vid], $vocabularies[$vid]->machine_name)) {
          $this->options['vocabularies'][$vocabularies[$vid]->machine_name] = $vocabularies[$vid]->machine_name;
        }
      }
    }
  }

  /**
   * Option definition method.
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['term_page'] = array('default' => TRUE, 'bool' => TRUE);
    $options['node'] = array('default' => FALSE, 'bool' => TRUE);
    $options['anyall'] = array('default' => ',');
    $options['limit'] = array('default' => FALSE, 'bool' => TRUE);
    $options['vocabularies'] = array('default' => array());
    $options['root_parent'] = array('default' => FALSE, 'bool' => TRUE);
    $options['root_term_page'] = array('default' => FALSE, 'bool' => TRUE);
    $options['term_page_anyall'] = array('default' => ',');

    return $options;
  }

  /**
   * Form builder method.
   */
  function options_form(&$form, &$form_state) {

    $form['term_page'] = array(
      '#type' => 'checkbox',
      '#title' => t('Load default filter from term page. It will get parent terms of current term page.'),
      '#default_value' => $this->options['term_page'],
    );

    $form['root_term_page'] = array(
      '#type' => 'checkbox',
      '#title' => t("Get term's parents to root parent term"),
      '#default_value' => $this->options['root_term_page'],
      '#process' => array('ctools_dependent_process', 'form_process_checkbox'),
      '#dependency' => array(
        'edit-options-argument-default-taxonomy-parent-tid-term-page' => array(1),
      ),
    );

    $form['term_page_anyall'] = array(
      '#type' => 'radios',
      '#title' => t('Multiple-value handling'),
      '#default_value' => $this->options['term_page_anyall'],
      '#process' => array('ctools_dependent_process', 'form_process_radios'),
      '#options' => array(
        ',' => t('Filter to items that share all terms'),
        '+' => t('Filter to items that share any term'),
      ),
      '#dependency' => array(
        'edit-options-argument-default-taxonomy-parent-tid-term-page' => array(1),
      ),
    );

    $form['node'] = array(
      '#type' => 'checkbox',
      '#title' => t("Load default filter from node page, that's good for related taxonomy blocks"),
      '#default_value' => $this->options['node'],
    );

    $form['root_parent'] = array(
      '#type' => 'checkbox',
      '#title' => t("Get term's parents to root parent term"),
      '#default_value' => $this->options['root_parent'],
      '#process' => array('ctools_dependent_process', 'form_process_checkbox'),
      '#dependency' => array(
        'edit-options-argument-default-taxonomy-parent-tid-node' => array(1),
      ),
    );

    $form['limit'] = array(
      '#type' => 'checkbox',
      '#title' => t('Limit terms by vocabulary'),
      '#default_value' => $this->options['limit'],
      '#process' => array('ctools_dependent_process', 'form_process_checkbox'),
      '#dependency' => array(
        'edit-options-argument-default-taxonomy-parent-tid-node' => array(1),
      ),
    );

    $options = array();
    $vocabularies = taxonomy_get_vocabularies();
    foreach ($vocabularies as $voc) {
      $options[$voc->machine_name] = check_plain($voc->name);
    }

    $form['vocabularies'] = array(
      '#prefix' => '<div><div id="edit-options-vids">',
      '#suffix' => '</div></div>',
      '#type' => 'checkboxes',
      '#title' => t('Vocabularies'),
      '#options' => $options,
      '#default_value' => $this->options['vocabularies'],
      '#process' => array('ctools_dependent_process', 'form_process_checkboxes'),
      '#dependency' => array(
        'edit-options-argument-default-taxonomy-parent-tid-limit' => array(1),
        'edit-options-argument-default-taxonomy-parent-tid-node' => array(1),
      ),
    );

    $form['anyall'] = array(
      '#type' => 'radios',
      '#title' => t('Multiple-value handling'),
      '#default_value' => $this->options['anyall'],
      '#process' => array('ctools_dependent_process', 'form_process_radios'),
      '#options' => array(
        ',' => t('Filter to items that share all terms'),
        '+' => t('Filter to items that share any term'),
      ),
      '#dependency' => array(
        'edit-options-argument-default-taxonomy-parent-tid-node' => array(1),
      ),
    );
  }

  /**
   * Options submit method.
   */
  function options_submit(&$form, &$form_state, &$options = array()) {
    // Filter unselected items so we don't unnecessarily store giant arrays.
    $options['vocabularies'] = array_filter($options['vocabularies']);
  }

  /**
   * Method to get/set views' default arguments.
   */
  function get_argument() {
    // Load default argument from taxonomy page.
    if (!empty($this->options['term_page'])) {
      if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2))) {
        $parents = (!empty($this->options['root_term_page'])) ? taxonomy_get_parents_all(arg(2)) : taxonomy_get_parents(arg(2));

        $taxonomy = array();
        foreach ($parents as $parent) {
          $taxonomy[] = $parent->tid;
        }

        return implode($this->options['term_page_anyall'], $taxonomy);
      }
    }
    // Load default argument from node.
    if (!empty($this->options['node'])) {
      foreach (range(1, 3) as $i) {
        $node = menu_get_object('node', $i);
        if (!empty($node)) {
          break;
        }
      }
      // Just check, if a node could be detected.
      if ($node) {
        $taxonomy = array();
        $fields = field_info_instances('node', $node->type);
        foreach ($fields as $name => $info) {
          $field_info = field_info_field($name);
          if ($field_info['type'] == 'taxonomy_term_reference') {
            $items = field_get_items('node', $node, $name);
            if (is_array($items)) {
              foreach ($items as $item) {
                $parents = (!empty($this->options['root_parent'])) ? taxonomy_get_parents_all($item['tid']) : taxonomy_get_parents($item['tid']);

                foreach ($parents as $parent) {
                  $taxonomy[$parent->tid] = $field_info['settings']['allowed_values'][0]['vocabulary'];
                }
              }
            }
          }
        }

        if (!empty($this->options['limit'])) {
          $tids = array();
          // Filter by vocabulary.
          foreach ($taxonomy as $tid => $vocab) {
            if (!empty($this->options['vocabularies'][$vocab])) {
              $tids[] = $tid;
            }
          }
          return implode($this->options['anyall'], $tids);
        }
        // Return all tids.
        else {
          return implode($this->options['anyall'], array_keys($taxonomy));
        }
      }
    }

    // If the current page is a view that takes tid as an argument,
    // find the tid argument and return it.
    $views_page = views_get_page_view();
    if ($views_page && isset($views_page->argument['tid'])) {
      return $views_page->argument['tid']->argument;
    }
  }
}
