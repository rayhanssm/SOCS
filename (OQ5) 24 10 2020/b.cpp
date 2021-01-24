#include <stdio.h>
int main ()
{
	long long t, n, i, j;
	scanf ("%lld", &t);
	for (i=1;i<=t;i++)
	{
		scanf ("%lld", &n);
		long long x[n];
		for (j=0;j<n;j++)
		{
			scanf ("%lld", &x[j]);
		}
		printf ("Case #%lld: ", i);
		for (j=n-1;j>=0;j--)
		{
			printf ("%lld", x[j]);
			if (j-1>=0)
			{
				printf (" ");
			}
		}
		printf ("\n");
	}
	return 0;
}
