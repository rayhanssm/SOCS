#include<stdio.h>
#include<math.h>
int main ()
{
	int p, l, t, a;
	double d, r, pi = 3.14159265359;
	scanf ("%d %d %d", &p, &l, &t);
	a = (p*p)+(l*l)+(t*t);
	d = sqrt(a);
	r = d/2;
	printf ("%.2f\n", 4*pi*r*r);
	
	return 0;
}
