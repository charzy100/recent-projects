#include <stdio.h>
int sum (int a);
int main ()
{
	int n;
	int total;
	printf("Enter the value of n (ie value to sum to): \n");
	scanf("%d", &n);
	total = sum(n);
	printf("The sum to %d you entered = %d\n", n, total);
	return 0;
}
int a;
int sum (int a)
{
	if(a<=1)
	{
		return (1);
	}
	else{
		return (a+sum(a-1));
	}
}
