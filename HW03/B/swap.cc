#include "swap.h"

void swap(int* a, int* b){
	
	int one;
	int two;
	
	one = *a;
	two = *b;
	
	*a = two;
	*b = one;
}