#include <stdio.h>
int main ()
{
	long long n, y[50], i, j, k;
	scanf ("%lld", &n);
	for (i=0;i<n;i++)
	{
		scanf ("%lld", &y[i]); getchar ();
	}
	for (j=9;j>0;j--)
	{
		for (k=0;k<n;k++)
		{
			if (k==y[j])
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
