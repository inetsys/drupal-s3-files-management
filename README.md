# S3 Files Management

This module allows to upload public and private files to a S3 bucket using *s3fs* module.

It serves these files from `/files/PATH-TO-FILE-IN-BUCKET`, managing user access with custom permissions.

## Dependencies

- S3 File System: *s3fs 7.x-1.4*  
	- Patched with: [patch file](https://www.drupal.org/files/issues/s3fs-support-private-files-2363951-3.patch)
	
## Notes

[ChangeLog](CHANGELOG.md)