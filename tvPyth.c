#include <stdio.h>
#include <math.h>

int main()
{
	int width;
	printf("Enter the width:\n");
	scanf("%d", &width);

	int height = ((9.0 * width) /16.0);

	int diagonal = sqrt((width*width) + (height*height));
	printf("The diagonal of the TV set is = %d inches\n", diagonal);
	return 0;
}

