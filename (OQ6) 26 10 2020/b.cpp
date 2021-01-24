#include <stdio.h>
#include <math.h>
int main ()
{
	long long n, a;
	scanf ("%lld", &n);
	a = pow(2,n)-1;
	printf ("%lld\n", a);
	return 0;
}
