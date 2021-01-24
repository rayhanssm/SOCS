#include <stdio.h>
long long f(long long n)
{
	if (n%2!=0 && n==1)
	{
		return f(n-1)+f(n+1);
	}
	else
	{	
		return f(n/2);
	}
}

int main ()
{
	long long t, n;
	scanf ("%lld", &t);
	for (int i=0;i<t;i++)
	{
		scanf ("%lld", &n);
		printf ("Case %d: %lld\n", i+1, f(n));
	}
	return 0;
}
