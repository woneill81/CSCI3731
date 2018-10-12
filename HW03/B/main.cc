
#include <cstdio>
#include "swap.h"

int main(){
	printf("Enter the first Number:\n");
	int one;
	scanf("%d", &one);
	
	printf("Enter the second Number:\n");
	int two;
	scanf("%d", &two);
	
	swap(&one, &two);
	
	printf("number 1: %d\n", one);
	printf("number 2: %d\n", two);
	
}