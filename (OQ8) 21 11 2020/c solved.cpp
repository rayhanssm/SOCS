#include <stdio.h>
long long t(long long n)
{
	if (n==0 || n==1)
		return 1;
	else
		return 2*t(n-1)+3*t(n-2);
}

int main ()
{
	long long n;
	scanf ("%lld", &n);
	printf ("%lld\n", t(n));
	return 0;
}
