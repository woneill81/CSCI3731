#include "writer.h"
#include <cstdio>
#include <stdio.h>
#include <jpeglib.h>
#include <setjmp.h>

void writer(FILE* f2, unsigned char* pixels , int width, int height, int max){

	unsigned char * image_buffer = pixels;
	int image_height;
	int image_width;
	
	struct jpeg_compress_struct cinfo;
	struct jpeg_error_mgr jerr;
	
	unsigned char* row_pointer[1];
	int row_stride;
	
	cinfo.err = jpeg_std_error(&jerr);
	
	jpeg_create_compress(&cinfo);
	
	if(f2==NULL){
	fprintf(stderr, "cant open %s\n", f2);
	exit(1);
	}
	
	cinfo.image_width = width;
	cinfo.image_height = height;
	cinfo.input_components = 3;
	cinfo.in_color_space = JCS_RGB;
	
	jpeg_set_defaults(&cinfo);
	
	jpeg_set_quality(&cinfo, 100, TRUE);
	
	jpeg_start_compress(&cinfo, TRUE);
	
	row_stride = width*3;
	
	while(cinfo.next_scanline <cinfo.image_height){
		row_pointer[0] = &image_buffer[cinfo.next_scanline * row_stride];
		(void) jpeg_write_scanlines(&cinfo, row_pointer, 1);
		}
		
	jpeg_finish_compress(&cinfo);
	fclose(f2);
	
	jpeg_destroy_compress(&cinfo);
	
}	
	
	
	
