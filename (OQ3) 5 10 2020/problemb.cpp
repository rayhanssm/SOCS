#include <stdio.h>
int main ()
{
	double l, b, h;
	scanf ("%lf %lf %lf", &l, &b, &h);
	printf ("%.3f\n", 2*1/2*b*h+3*b*l);
	
	return 0;
}
