#include <stdio.h>
int main()
{
//Welcome note...
	printf("WELCOME TO MINISTRY OF LAND SURVEY AND HOUSING\n\n");
//Introducing the subject matter and collecting farmer's land shape input.
	double shape;
	printf("What shape of land would you like to cultivate?\nEnter:\n1 for rectangular\n2 for circular\n3 for square &\n4 for trapezoidal\n");
	scanf("%lf", &shape);
//The rectangular shaped land calculations.
	if (shape == 1)
	{
		printf("You want to cultivate a rectangular piece of land\n\n");
// -area calculations
		double l;
		double b;
		printf("Enter the length(in m): \n");
		scanf("%lf", &l);
		printf("Enter the breadth(in m)    : \n");
		scanf("%lf", &b);
		double area = l * b;
		printf("The area of the rectangular land piece you want = %lf(sq.mtr)\n\n", area);
// -costs calculations.
		double cost = area * 100;
		printf("The rectangular shaped land costs %lf(naira)\n", cost);
	}

//The circular shaped land calculations.
	else if (shape == 2)
	{
		printf("You want to cultivate a circular piece of land\n\n");
//-area calculation
		double r;
		printf("Enter the radius(in m)\n");
		scanf("%lf", &r);
		double area = (22 * r * r) / 7;
		printf("The area of the circular land piece you want = %lf(sq.mtr)\n\n", area);
//-cost calculation.
		double cost = area * 100;
		printf("The circular shaped land costs %lf(naira)\n", cost);
	}

// The square shaped land calculations.
	else if (shape == 3)
	{
		printf("You want to cultivate a square piece of land\n\n");
//-area calculation
		double l;
		printf("Enter the side of the square(in m)\n");
		scanf("%lf", &l);
		double area = l * l;
		printf("The area of the square shaped land piece you want = %lf(sq.mtr)\n\n", area);
//-cost calculation
		double cost = area * 100;
		printf("The square shaped land costs %lf(naira)\n", cost);
	}

// The trapezoidal shaped land calculations.
	else if(shape == 4)
	{
		printf("You want to cultivate a trapezoidal piece of land\n\n");
//-area calculation
		double l;
		double b;
		double h;
		printf("Enter the longest side of the trapezoidal shaped land (in m)\n");
		scanf("%lf", &l);
		printf("Enter the shorter side of the trapezoidal shaped land (in m)\n");
		scanf("%lf", &b);
		printf("Enter the perpendular height of the trapezoidal shaped land (in m)\n");
		scanf("%lf", &h);
		double area = ((l + b) * h) / 2;
		printf("The area of the trapezoidal shaped land piece you want = %lf(sq.mtr)\n\n", area);
//-cost calculation.
		double cost = area * 100;
		printf("The trapezoidal shaped land costs %lf(naira)\n", cost);
	}
//Invalid input by farmer.
	else
	{
		printf("You entered an invalid number. kindly enter either 1, 2, 3 or 4 corresponding to the land shape you want\n");
	}

	return 0;

}

