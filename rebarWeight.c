#include <stdio.h>

//REBAR WEIGHT CALCULATOR.

//This program calculates the weight of a rebar from information supplied by the engineer about the bars.

double rebar();
int main()
{
double dia;
double len;
int num;
printf("Enter the size of bar(in mm)\n");
scanf("%lf", &dia);
getchar();

printf("Enter the length of bar(in m)\n");
scanf("%lf", &len);
getchar();

printf("Enter the number of pieces of the rebar (in nos)\n");
scanf("%d", &num);
getchar();

double barWght = rebar(dia, len, num);

printf("The weight of the bar is = %.2lfKg\n", barWght);
return 0;
}


double diameter;
double length;
int number;
double weight;
double rebar(double diameter, double length, int number)
{
weight = (number * length * diameter * diameter) / 162;
return weight;
}
