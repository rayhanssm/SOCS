#include <stdio.h>
int main ()
{
	int i, j;
	long long t, n, a[100000], rsum=0, bsum=0, dif=0;
	scanf ("%lld", &t);
	for (i=1;i<=t;i++)
	{
		scanf ("%lld", &n);
		for (j=1;j<=n;j++)
		{
			scanf ("%lld", &a[j]);
			if (j%2==0)
			{
				rsum += a[j];
			}
			else if (j%2!=0)
			{
				bsum += a[j];
			}
			if (rsum>=bsum)
			{
				dif = rsum-bsum;
			} else
			{
				dif = bsum-rsum;
			}
		}
		printf ("Case #%d: %lld\n", i, dif);
		dif = 0;
	}
	return 0;
}
