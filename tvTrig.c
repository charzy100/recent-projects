#include <stdio.h>
#include <math.h>
int main()
{
	int width;
	printf("Enter the width:\n");
	scanf("%d", &width);

	double theta = atan(9.0/16.0);
	
	int diag = width / cos(theta);
	printf("The diagonal of the TV set = %d\n", diag);
	return 0;
}

