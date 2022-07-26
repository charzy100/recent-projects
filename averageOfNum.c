#include <stdio.h>
float sum(float x, float y);
float averageSum(float (*ptSum) (float, float), float x, float y);
int main()
{
	float u, v;
	printf("enter the first value  here: \n");
	scanf("%f", &u);

	printf("enter the second value here: \n");
	scanf("%f", &v);


	float (*ptSum) (float, float) = &sum;
	float value = averageSum(ptSum, u, v);
	printf("%.2f\n", value);
	return 0;
}

	float x, y, n;

float sum(float x, float y)
{	
	return (x+y);
}

float averageSum(float (*ptSum) (float, float), float x, float y)
{
	n = ptSum (x, y);
	float n = ptSum ( x, y);
	return (n/2);
}
