#include<stdio.h>
int main ()
{
	int t;
	double a, b, c, d, e, f;
	
	scanf ("%d", &t);
	scanf ("%lf %lf", &a, &b);
	scanf ("%lf %lf", &c, &d);
	scanf ("%lf %lf", &e, &f);
	
	printf ("%.2f\n", (a*b)/360);
	printf ("%.2f\n", (c*d)/360);
	printf ("%.2f\n", (e*f)/360);
	
	return 0;	
}
