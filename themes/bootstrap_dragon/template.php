<?php

/**
 * @file
 * template.php
 */
/**
 * Preprocess variables for page template.
 */
function bootstrap_dragon_preprocess_page(&$vars) {
	if($vars['page']['header_top_left'] && $vars['page']['header_top_right']) {
		$vars['header_top_left_grid_class'] = 'col-md-7';
		$vars['header_top_right_grid_class'] = 'col-md-2';
	} elseif ($vars['page']['header_top_right'] || $vars['page']['header_top_left']) {
		$vars['header_top_left_grid_class'] = 'col-md-5';
		$vars['header_top_right_grid_class'] = 'col-md-12';
	}
  // Set the main grid class to full page
  $vars['main_grid_class'] = '';
}