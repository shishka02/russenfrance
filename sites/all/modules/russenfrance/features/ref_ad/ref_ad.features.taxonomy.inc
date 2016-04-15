<?php
/**
 * @file
 * ref_ad.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ref_ad_taxonomy_default_vocabularies() {
  return array(
    'ref_category' => array(
      'name' => 'Category',
      'machine_name' => 'ref_category',
      'description' => 'Main category vocabulary. Uses in left menu and in the search.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
