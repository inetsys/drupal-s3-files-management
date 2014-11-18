<?php

/** Menu callback for admin/config/media/s3fs/private-files */
function _s3_files_management_private_files_form($form, $form_state){
	$form['s3_private_files_enabled'] = array(
		'#type' => 'checkbox',
		'#title' => t('Enable private files in S3'),
		'#return_value' => true,
		'#default_value' => variable_get('s3_private_files_enabled', false)
	);

	$form['s3_private_files_path'] = array(
		'#type' => 'textarea',
		'#title' => t('Paths to private files'),
		'#default_value' => variable_get('s3_private_files_path', ''),
		'#states' => array(
			'invisible' => array(
				':input[name="s3_private_files_enabled"]' => array(
					'checked' => false
				)
			)
		)
	);

	return system_settings_form($form);
}