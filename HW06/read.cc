#include <cstdio>
#include <cstring>
#include "reader.h"

unsigned char* reader(FILE* fp, char P6[], int *width, int *height, int *max) {
	
	//FILE* fr = fopen(fileName, "rb");

	fscanf(fp, "%s", P6);
	if (strncmp(P6, "P6" , 10) != 0) {
		printf("They are not the same\n");
	} else {
		printf("\n");
	}

	fscanf(fp, "\n%d %d\n%d\n",width, height, max);

    printf("PSix: %s\n", P6);
    printf("Width: %d\n", *width);
    printf("Height: %d\n", *height);
    printf("maximum: %d\n", *max);

    int size; 
	size = (*height)*3*(*width);

    unsigned char* pixels = new unsigned char[size];

	int checking = fread(pixels, sizeof(char), size, fp);
	
	printf("size of the image: %d\n Number of pixels read: %d\n", size, checking);
	
	return pixels;
	
	delete [] pixels;
	pixels = NULL;

	fclose(fp);

}