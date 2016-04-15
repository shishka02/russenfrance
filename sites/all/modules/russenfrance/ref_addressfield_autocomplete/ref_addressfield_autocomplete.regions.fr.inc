<?php

// https://en.wikipedia.org/wiki/Departments_of_France

/**
 * Get FR regions.
 */
function ref_addressfield_autocomplete_get_regions_fr() {
  $regions = array(
    'alsace' => t('Alsace'),
    'aquitaine' => t('Aquitaine'),
    'auvergne' => t('Auvergne'),
    'brittany' => t('Brittany'),
    'burgundy' => t('Burgundy'),
    'centre' => t('Centre'),
    'champagne-ardenne' => t('Champagne-Ardenne'),
    'corsica' => t('Corsica'),
    'franche-comte' => t('Franche-Comté'),
    'ile-de-france' => t('Île-de-France'),
    'languedoc-roussillon' => t('Languedoc-Roussillon'),
    'limousin' => t('Limousin'),
    'lorraine' => t('Lorraine'),
    'lower-normandy' => t('Lower Normandy'),
    'midi-pyrenees' => t('Midi-Pyrénées'),
    'nord-pas-de-calais' => t('Nord-Pas-de-Calais'),
    'pays-de-la-loire' => t('Pays de la Loire'),
    'picardy' => t('Picardy'),
    'poitou-charentes' => t('Poitou-Charentes'),
    "provence-alpes-cote-dazur" => t("Provence-Alpes-Côte d'Azur"),
    'rhone-alpes' => t('Rhône-Alpes'),
    'upper-normandy' => t('Upper Normandy'),
    'guadeloupe' => t('Guadeloupe'),
    'martinique' => t('Martinique'),
    'french-guiana' => t('French Guiana'),
    'reunion' => t('Réunion'),
    'mayotte' => t('Mayotte'),
  );

  return $regions;
}

/**
 * Get FR Provinces by Region.
 */
function ref_addressfield_autocomplete_get_provinces_fr() {
  // Define de region/provinces array.
  // The province codes are the ones used in module /location/supported/location.fr.inc

  $region_departments = array(
    'aquitaine' => array(
      '24',
      '33',
      '40',
      '47',
      '64',
    ),
    'auvergne' => array(
      '03',
      '15',
      '43',
      '63',
    ),
    'rhone-alpes' => array(
      '01',
      '07',
      '26',
      '38',
      '42',
      '69',
      '73',
      '74',
    ),
    'picardy' => array(
      '02',
      '60',
      '80',
    ),
    "provence-alpes-cote-dazur" => array(
      '04',
      '05',
      '06',
      '13',
      '83',
      '84',
    ),
    'champagne-ardenne' => array(
      '08',
      '10',
      '51',
      '52',
    ),
    'midi-pyrenees' => array(
      '09',
      '12',
      '31',
      '32',
      '46',
      '65',
      '81',
      '82',
    ),
    'languedoc-roussillon' => array(
      '11',
      '30',
      '34',
      '48',
      '66',
    ),
    'lower-normandy' => array(
      '14',
      '50',
      '61',
    ),
    'poitou-charentes' => array(
      '16',
      '17',
      '79',
      '86',
    ),
    'centre' => array(
      '18',
      '28',
      '36',
      '37',
      '41',
      '45',
    ),
    'limousin' => array(
      '19',
      '23',
      '87',
    ),
    'corsica' => array(
      '2a',
      '2b',
    ),
    'burgundy' => array(
      '21',
      '58',
      '71',
      '89',
    ),
    'brittany' => array(
      '22',
      '29',
      '35',
      '56',
    ),
    'nord-pas-de-calais' => array(
      '59',
      '62',
    ),
    'franche-comte' => array(
      '25',
      '39',
      '70',
      '90',
    ),
    'upper-normandy' => array(
      '27',
      '76',
    ),
    'pays-de-la-loire' => array(
      '44',
      '49',
      '53',
      '72',
      '85',
    ),
    'lorraine' => array(
      '54',
      '55',
      '57',
      '88',
    ),
    'alsace' => array(
      '67',
      '68',
    ),
    'ile-de-france' => array(
      '75',
      '77',
      '78',
      '91',
      '92',
      '93',
      '94',
      '95',
    ),
    'guadeloupe' => array(
      '971',
    ),
    'martinique' => array(
      '972',
    ),
    'french-guiana' => array(
      '973',
    ),
    'reunion' => array(
      '974',
    ),
    'mayotte' => array(
      '976',
    ),
  );

  return $region_departments;

  //if (isset($region_departments[$region])) {
    //$provinces = array();

    //// Set the Province name from Location module.
    //$departments = $region_departments[$region];
    //$provinces_fr = location_get_provinces('fr');
    //foreach ($departments as $id) {
      //if (isset($provinces_fr[$id])) {
        //$provinces[$id] = $provinces_fr[$id];
      //}
    //}

    //return $provinces;
  //}

  //return array();
}

function ref_addressfield_autocomplete_get_region_by_departament_fr($department){
  //$regions = ref_addressfield_autocomplete_get_regions_fr();
  $region_departments = ref_addressfield_autocomplete_get_provinces_fr();
  
  foreach($region_departments as $reg => $deps) {
    foreach($deps as $dep) {
      if($dep == $department) {
        return $reg;
      }
    }
  }
  
  return FALSE;
}
