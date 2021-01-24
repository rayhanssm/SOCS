#include <stdio.h>
int main ()
{
	long long n, k, x;
	scanf ("%lld %lld", &n, &k);
	if (k>=n)
	{
		x = k % n;
		printf ("%lld\n", n-x);
	} else {
		printf ("%lld\n", n-k);
	}
	return 0;
}
