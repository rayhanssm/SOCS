#include <stdio.h>
int main ()
{
	long long t, n, i, j, k;
	scanf ("%lld", &t); getchar ();
	for (i=1;i<=t;i++)
	{
		scanf ("%lld", &n);
		long long a[n];
		for (j=0;j<n;j++)
		{
			scanf ("%lld", &a[j]);
		}
		printf ("Case #%lld:", i);
		for (k=n-1;k>=1;k=k-2)
		{
			if (k==2)
			{
				printf (" %lld %lld", a[k-1], a[k]);
			} else
			{
				printf (" %lld %lld", a[k-1], a[k]);
			}
		}
		printf ("\n");
	}
	return 0;
}
