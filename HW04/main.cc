#include <cstdio>
#include "reader.h"
#include "writer.h"


int main (int argc, char** argv){

	FILE* fp = fopen("test.ppm", "rb");
	FILE* f2 = fopen("test2.ppm", "wb");
	char P6[3];
	P6[2]='\0';
	int height = 0;
	int width = 0;
	int max = 0;
	
	unsigned char* pixels = reader(fp, P6, &width, &height, &max);
	writer(f2, pixels, width, height, max);
	
}