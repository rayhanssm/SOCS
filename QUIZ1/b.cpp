#include <stdio.h>
int main ()
{
	long long n, y[1005], i, j, k;
	scanf ("%lld", &n);
	for (i=0;i<n;i++)
	{
		scanf ("%lld", &y[i]); getchar ();
	}
	for (j=1;j<=9;j++)
	{
		for (k=n-1;k>=0;k--)
		{
			if (j==y[k])
			{
				printf ("#");
			} else
			{
				printf (".");
			}
		}
		printf ("\n");
	}
	return 0;
}
