#include <stdio.h>
int main ()
{
	int t;
	double a, b, c;
	scanf ("%d\n", &t);
	scanf ("%lf\n%lf\n%lf", &a, &b, &c);
	getchar ();
	printf ("%.2lf %.2lf %.2lf\n", (4*a)/5, ((9*a)/5)+32, a+273);
	printf ("%.2lf %.2lf %.2lf\n", (4*b)/5, ((9*b)/5)+32, b+273);
	printf ("%.2lf %.2lf %.2lf\n", (4*c)/5, ((9*c)/5)+32, c+273);
	return 0;
}
