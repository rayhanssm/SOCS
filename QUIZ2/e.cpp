#include <stdio.h>

int search(long long x[], long long a[])
{
	long long count = 1, i;
	if (x[i]==a[i])
	{
		return count++;
	}
	else if (x[i]!=a[i])
	{
		return -1;
	}
}

int main ()
{
	long long n, m, a[n], x[m], i;
	scanf ("%lld %lld", &n, &m);
	for (i=1;i<=n;i++)
	{
		scanf ("%lld", &a[i]);
	}
	for (i=1;i<=m;i++)
	{
		scanf ("%lld", &x[i]);
		printf ("Case #%lld: %lld\n", i, search(x, a));
	}
	return 0;
}
