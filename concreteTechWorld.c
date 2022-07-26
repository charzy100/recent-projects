#include <stdio.h>
int main ()
{

//Welcome note....
	printf("CONCRETE TECHNOLOGOCAL WORLD\n\n");
	printf("Welcome to Concrete Technological World!\nIn this World, you get to know the exact quantity of concrete constituents required for your project.\n\n");
//Concrete Volume (in cubic.mtr)...
	double volume;
	printf("Enter the volume of concrete you want to use here (in cubic.mtr) here: \n");
	scanf("%lf", &volume);
	getchar();
// Concrete grade selection...
	printf("CONCRETE GRADE\nWhat grade of concrete do you want to use for your project?\nWe have the following concrete grade for you to select\n1. C5\n2. C7.5\n3. C10\n4. C15\n5. C20\n6. C25\n7. C30\n8. C35\n9. C40\n");

//concrete grade and volume selection and input...
	int grade;
	printf("Enter the number corresponding to the grade you want (ie 1 for C5, 2 for C7.5, 8 for C35, 9 for C40 and so on) here:\n");
	scanf("%d", &grade);
	getchar();
// calculations to determine the quantities of the various constituents elements 
	double cement, fine, coarse;
//For Grade = C5:
	if (grade ==1)
	{
		cement = (2400 * volume) / 16;
		fine = (5 * volume * 2400) / 16;
		coarse = (10 * volume * 2400) / 16;
		printf("Based on the grade you selected and the volume (%.2lfcubic.mtr) you entered, you'd need:\nCement = %.2lfKg\nFine = %.2lfKg\nand\nCoarse = %.2lfKg to make the concrete.\n", volume, cement, fine, coarse);
	}
// For Grade = C7.5:
	else if (grade == 2)
	{
		cement = (2400 * volume) / 13;
		fine = (4 * volume * 2400) / 13;
		coarse = (8 * volume * 2400) / 13;
		printf("Based on the grade you selected and the volume (%.2lfcubic.mtr) you entered, you'd need:\nCement = %.2lfKg\nFine = %.2lfKg\nand\nCoarse = %.2lfKg to make the concrete.\n", volume, cement, fine, coarse);
	}
//For Grade = C10:
	else if (grade == 3)
	{
		cement = (2400 * volume) / 10;
		fine = (3 * volume * 2400) /10;
		coarse = (6 * volume * 2400) / 10;
		printf("Based on the grade you selected and the volume (%.2lfcubic.mtr) you entered, you'd need:\nCement = %.2lfKg\nFine = %.2lfKg\nand\nCoarse = %.2lfKg to make the concrete.\n", volume, cement, fine, coarse);
	}
// For Grade = C15:
	else if (grade == 4)
	{
		cement = (2400 * volume) / 7;
		fine = (2 * volume * 2400) / 7;
		coarse = (4 * volume * 2400) / 7;
		printf("Based on the grade you selected and the volume (%.2lfcubic.mtr) you entered, you'd need:\nCement = %.2lfKg\nFine = %.2lfKg\nand\nCoarse = %.2lfKg to make the concrete.\n", volume, cement, fine, coarse);
	}
// For Grade = C20:
	else if (grade == 5)
	{
		cement = (2400 * volume) / 5.5;
		fine = (1.5 * volume * 2400) / 5.5;
		coarse = (3 * volume * 2400) / 5.5;
		printf("Based on the grade you selected and the volume (%.2lfcubic.mtr) you entered, you'd need:\nCement = %.2lfKg\nFine = %.2lfKg\nand\nCoarse = %.2lfKg to make the concrete.\n", volume, cement, fine, coarse);
	}
// For Grade = C25:
	else if (grade == 6)
	{
		cement = (2400 * volume) / 4;
		fine = (1 * volume * 2400) / 4;
		coarse = (2 * volume * 2400) / 4;
		printf("Based on the grade you selected and the volume (%.2lfcubic.mtr) you entered, you'd need:\nCement = %.2lfKg\nFine = %.2lfKg\nand\nCoarse = %.2lfKg to make the concrete.\n", volume, cement, fine, coarse);
	}
// For Grade = C30:
	else if (grade == 7)
	{
		cement = (2400 * volume) / 3.25;
		fine = (0.75 * volume * 2400) / 3.25;
		coarse = (1.5 * volume * 2400) / 3.25;
		printf("Based on the grade you selected and the volume (%.2lfcubic.mtr) you entered, you'd need:\nCement = %.2lfKg\nFine = %.2lfKg\nand\nCoarse = %.2lfKg to make the concrete.\n", volume, cement, fine, coarse);
	}
// For Grade = C35
	else if (grade == 8)
	{
		cement = (2400 * volume) / 2.5;
		fine = (0.5 * volume * 2400)     / 2.5;
		coarse = (1 * volume * 2400)     / 2.5;
		printf("Based on the grade you selected and the volume (%.2lfcubic.mtr) you entered, you'd need:\nCement = %.2lfKg\nFine = %.2lfKg\nand\nCoarse = %.2lfKg to make the concrete.\n", volume, cement, fine, coarse);
	}
// For Grade = C40:
	else if (grade == 9)
	{
		cement = (2400 * volume) / 1.75;
		fine = (0.25 * volume * 2400) / 1.75;
		coarse = (0.5 * volume * 2400) / 1.75;
		printf("Based on the grade you selected and the volume (%.2lfcubic.mtr) you entered, you'd need:\nCement = %.2lfKg\nFine = %.2lfKg\nand\nCoarse = %.2lfKg to make the concrete.\n", volume, cement, fine, coarse);
	}
	else
	{
		printf("You entered an invalid number. Kindly repeat the process and enter the number corresponding to the grade you want.\n");
	}
	return 0;
}
