#include <stdio.h>
int main ()
{
	long a, b, c, d, x, y;
	scanf ("%ld %ld %ld %ld", &a, &b, &c, &d);
	x = a*b;
	y = c+d;
	if (x<y)
	{
		printf ("False\n");
	} else 
	{
		printf ("True\n");
	}
	return 0;
}
