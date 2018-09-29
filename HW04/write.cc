#include <cstdio>
#include "writer.h"

void writer(FILE* f2, unsigned char* pixels , int width, int height, int max){
	
	fprintf(f2, "%s\n%d %d\n%d\n", "P6", width, height , max);
	
	int checking = fwrite(pixels,sizeof(char), width*height*3, f2);
	
	fclose(f2);
}
	