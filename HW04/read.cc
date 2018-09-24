#include <cstdio>
#include <cstring>
#include "read.h"

unsigned char* readfile(const char* fileName, char* P6, int* width, int* height, int* max) {
	
	FILE* fr = fopen(fileName, "rb");

	fscanf(fr, "%s", P6);
	if (strncmp(P6, "P6" , 10) != 0) {
		printf("They are not the same\n");
	} else {
		printf("\n");
	}

	fscanf(fr, "%s\n%d %d\n%d\n", &P6, &width, &height, &max);

    printf("PSix: %s\n", P6);
    printf("Width: %d\n", width);
    printf("Height: %d\n", height);
    printf("maximum: %d\n", max);

    int size; 
	size = 423800; //width*height;

    unsigned char* pixels = new unsigned char[size];

	while (fread(pixels, sizeof(int), 128, fr)) {
		printf("%s", pixels);
	} 
	
	delete [] pixels;
	pixels = NULL;

	fclose(fr);

	return pixels;
}