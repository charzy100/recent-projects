#include <stdio.h>
int main ()
{
	int x = 5;
	int y;
// y = ++x,
	/*y = ++x;
	printf("This expresion has y = ++x (when x = 5).\n\n");
	printf("y = %d\n", y);
	printf("x = %d\n", x);*/
// y = x++,
	y = x++;
	printf("This expresion has y = x++ (when x = 5).\n\n");
	printf("y = %d\n", y);
	printf("x = %d\n", x);
	return 0;
}
