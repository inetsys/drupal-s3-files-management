# S3 files management

## Version 1.1

Date: 2014/11/28

- Path /thumbnails/STYLE/* to serve styled images from S3 server  
Thumbnails have the same privacy than original image.  
It needs a folder *thumbnails* in S3 bucket.

- Theme registry altered to print styled images  
Image *src* attribute does not show S3 server domain.

## Version 1.0 

Date: 2014/11/13

- Private files in S3  
Definition of multiple paths of files stored in S3

- Path /files/* to serve any s3:// file