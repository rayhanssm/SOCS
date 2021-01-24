#include <stdio.h>
#include <math.h>
int main ()
{
	double a, b;
	scanf ("%lf %lf", &a, &b);
	printf ("%.2lf\n", a*pow((1+b/100),3));
	return 0;
}
