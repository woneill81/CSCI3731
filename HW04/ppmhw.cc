#include <cstdio>
#include <cstring>
#include "read.h"
//#include "write.cc"


int width, height;


int main (int argc, char** argv){

	
	char P6[10];
	char filename[20] = "test.ppm";
	int height = 0;
	int width = 0;
	int max = 0;
	int size = 128;
	
	unsigned char* data = readfile(filename, P6, &width, &height, &max);
	
}