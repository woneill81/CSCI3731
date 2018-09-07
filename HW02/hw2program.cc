#include <cstdio>
#include <iostream>
using namespace std;

int multiplication(int x, int y)
{
	return x*y;
}

int main(int argc, char** argv)
{
int num1, num2;
cout << "enter a value for number 1: ";
cin>>num1;
cout << "enter a value for number 2: ";
cin>>num2;
printf("%d\n", multiplication(num1,num2));
}
