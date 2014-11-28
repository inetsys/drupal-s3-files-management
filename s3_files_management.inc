<?php

/**
 * @return array of string
 */
function _s3_files_management_get_private_path(){
	$path = array();
	$s3_private_files_path = explode("\n", variable_get('s3_private_files_path', ''));
	foreach($s3_private_files_path as $row){
		$value = trim($row, " \t\n\r\0\x0B/");
		if($value){
			$path[$value] = $value;
		}
	}

	return $path;
}

/**
 * @param string $path
 * @return boolean
 */
function s3_files_management_is_private($path){
	$is_private = false;

	if(variable_get('s3_private_files_enabled', false)){
		$private_paths = _s3_files_management_get_private_path();

		foreach($private_paths as $private_path){
			$pattern = '#^'.str_replace('*', '.*', $private_path).'#';
			if(preg_match($pattern, $path)){
				$is_private = true;
				break;
			}
		}
	}

	return $is_private;
}