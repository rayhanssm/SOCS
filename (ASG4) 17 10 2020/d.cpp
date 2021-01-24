#include <stdio.h>
int main ()
{
	long t, n, a, i, j;
	long long b;
	long long stok;
	long long total = 0;
	scanf ("%ld", &t);
	for (i=1;i<=t;i++)
	{
		stok = 0;
		scanf ("%ld", &n);
		for (j=0;j<n;j++)
		{
			scanf ("%ld %lld", &a, &b);
			if (a==0)
			{
				stok += b;
			} else if (a==1)
			{
				stok -= b;
			}
		}
		total = total + stok;
		printf ("Case #%ld: %ld\n", i, total);
		total  = 0;
	}
	return 0;
}
