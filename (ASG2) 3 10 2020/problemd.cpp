#include <stdio.h>
int main ()
{
	long a, b, c, d;
	scanf ("%ld %ld\n", &a, &b);
	scanf ("%ld %ld", &c, &d);
	getchar ();
	printf ("%ld %ld\n", a, c);
	printf ("%ld %ld\n", b, d);
	
	return 0;
}
