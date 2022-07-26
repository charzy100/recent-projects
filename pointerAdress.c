#include <stdio.h>
int main()
{
// Creating a variable...
	int a, b, c;
	a = 15;
	b = 5;
	c = 10;
//Getting the addresses of the variables without the use of pointers...
	printf("The addresses of variables a, b & c obtained without pointers are:\nFor a: %p\nFor b: %p\nFor c: %p\n", &a, &b, &c);

// Creating a pointers to the variables...
	int *ptA, *ptB, *ptC;
	ptA = &a;
	ptB = &b;
	ptC = &c;
//Printing same addresses with the use of pointers (referencing)
	printf("The addresses of variables a, b & c obtained from pointers (referencing) are:\nFor a: %p\nFor b: %p\nFor c: %p\n", ptA, ptB, ptC);

//Obtaining the values of the variables through pointers (dereferencing)...
	printf("The values of variables a, b & c obtained through pointers (dereferencing) are:\nFor a: %d\nFor b: %d\nFor c: %d\n", *ptA, *ptB, *ptC);
	return 0;
}
