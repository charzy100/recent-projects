#include <stdio.h>
#include <math.h>

int main()
{
	double a1,b1,k1,a2,b2,k2,k,x,y;
	printf("Please,input a1\n",a1);
	scanf("%lf",&a1);
	printf("Please,input b1\n",b1);
	scanf("%lf",&b1);
	printf("Please,input k1\n",k1);
	scanf("%lf",&k1);
	printf("Please,input a2\n",a2);
	scanf("%lf",&a2);
	printf("Please,input b2\n",b2);
	scanf("%lf",&b2);
	printf("Please,input k2\n",k2);
	scanf("%lf",&k2);
	k= (a2*b1)-(a1*b2);
	x=((b1*k2)-(b2*k1))/k;
	y=((a1*k2)-(a2*k1))/(-1*k);
	printf("The value of x is:%lf\n", x);
	printf("The value of y is:%lf\n", y);
	
	return 0;

}
