#include <stdio.h>
int main ()
{
	long long t, i, j;
	long long nyawa[5004];
	scanf ("%lld", &t);
	for (i=0;i<t;i++)
	{
		long long n, min=0, x=0, a;
		scanf ("%lld", &n);
		for (j=0;j<n;j++)
		{
			scanf ("%lld", &a);
			x = x+a;
			if (x<min)
			{
				min = x;
			}
		}
		printf ("Case #%lld: %lld\n", i+1, 1-min);
	}
	return 0;
}
