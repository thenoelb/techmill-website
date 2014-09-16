<?php

function rotsen_form_system_theme_settings_alter(&$form, &$form_state) {

	if (module_exists('colourlovers')) {
		$form['colourlovers_settings'] = array(
			'#type' => 'fieldset',
			'#title' => t('COLOURLovers Settings'),
			'#weight' => -1,
		);
		$form['colourlovers_settings']['colourlovers_check'] = array(
			'#type' => 'checkbox',
			'#title' => t('Enable COLOURLovers palettes'),
			'#default_value' => theme_get_setting('colourlovers_check'),
			'#description' => t('Checking this will replace the current color schemes with those provided by the !colourlover.', array('!colourlover' => l('COLOURLovers API', 'admin/appearance/colourlovers'))),
		);
		$form['colourlovers_settings']['colourlovers_container'] = array(
			'#type' => 'container',
	  	'#states' => array(
				'visible' => array(
					':input[name="colourlovers_check"]' => array('checked' => TRUE),
				),
			),
		);
		$form['colourlovers_settings']['colourlovers_container']['colourlovers_demo'] = array(
			'#type' => 'markup',
	  	'#markup' => variable_get('colourlovers_demo_html', 'No palettes generated.'),
	  );
	}
}


/*
* Create custom LESS variables
*/
function rotsen_less_variables() {
  // Grab the color palette saved by the color module.
  $color_pallete = variable_get('color_rotsen_palette', FALSE);
  // If the color palette hasn't been saved yet, use the default.
  if (empty($color_pallete)) {
    $color_pallete = array(
      'brandprimary' => '#EA9B3E',
      'brandsecondary' => '#30302E',
      'brandaccent' => '#FFF',
      'brandaccent2' => '#FFF',
      'brandaccent3' => '#FFF',
    );
  }
  // Generate variables with color values.
  foreach ($color_pallete as $key => $value) {
    $color_pallete['@'.$key] = $color_pallete[$key];
    unset($color_pallete[$key]);
  }
  return $color_pallete;
}
