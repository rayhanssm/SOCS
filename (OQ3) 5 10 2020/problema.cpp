#include <stdio.h>
int main ()
{
	long a, b, c, d, e, f, g, h, i, j, k, l;
	scanf ("(%ld+%ld)x(%ld-%ld)\n", &a, &b, &c, &d);
	scanf ("(%ld+%ld)x(%ld-%ld)\n", &e, &f, &g, &h);
	scanf ("(%ld+%ld)x(%ld-%ld)", &i, &j, &k, &l);
	printf ("%ld %ld %ld\n", (a+b)*(c-d), (e+f)*(g-h), (i+j)*(k-l));
	
	return 0;
}
