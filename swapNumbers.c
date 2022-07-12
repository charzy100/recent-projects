#include <stdio.h>
int main ()
{
	float a, b, tmp;
	printf("Enter the first number: \n");
	scanf("%f", &a);
	getchar();
	printf("Enter the second number: \n");
	scanf("%f", &b);
	getchar();
	tmp = a;
	a = b;
	b = tmp;
	printf("After swap,\nNew first number is: %.2f\nNew second number is: %.2f\n", a, b);
	return 0;
}
