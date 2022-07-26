#include <stdio.h>
// prototypes of functions used.
float sum(float x, float y);
float subtraction(float x, float y);
float division(float x, float y);
float multiplication(float x, float y);
// main execution function
int main()
{
// declaration of arguments in the main execution function
	float a, b, answer;
	int entry;
// user input
	printf("What Mathematical Operation Do You Want to Perform? Press:\n0 for Division\n1 for Multiplication\n2 for Addition\n3 for Subtraction\n\nInsert your entry here: \n");
	scanf("%d", &entry);
	getchar();

	printf("Enter the first figure to be operated on here: \n");
	scanf("%f", &a);
	getchar();

	printf("Enter the second figure to be operated on here: \n");
	scanf("%f", &b);
	getchar();
// declaration and assignment of values to  pointer to array of functions
	float (*ptCal[])(float, float) = {division, multiplication, sum, subtraction};
// pointer call and usage in program.
	answer = ptCal[entry](a, b);
// output of results...
	printf("The result is: %.2f\n", answer);
}
//functions arguments declaration
float x, y;
// summation function definition.
float sum(float x, float y)
{
	return (x+y);
}
// subtraction function definition.
float subtraction(float x, float y)
{
	return (x-y);
}
// division function definition
float division(float x, float y)
{
	return (x/y);
}
// multiplication function definition
float multiplication(float x, float y)
{
	return (x*y);
}
