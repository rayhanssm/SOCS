#include <stdio.h>
int main ()
{
	long long t, x, i, j, k, a[110][110], sum;
	scanf ("%lld", &t); getchar ();
	for (i=1;i<=t;i++)
	{
		scanf ("%lld", &x);
		for (j=0;j<x;j++)
		{
			for (k=0;k<x;k++)
			{
				scanf ("%lld", &a[j][k]);
			}
		}
		printf ("Case #%lld: ", i);
		for (j=0;j<x;j++)
		{
			sum = 0;
			for (k=0;k<x;k++)
			{
				sum = sum+a[k][j];
			}
			printf ("%lld", sum);
			if (j<x-1)
			{
				printf (" ");
			}
		}
		printf ("\n");
	}
	return 0;
}
