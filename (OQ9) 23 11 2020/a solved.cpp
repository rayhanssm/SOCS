#include <stdio.h>
int main ()
{
	long long t, n, a[100000], sum=0;
	scanf ("%lld", &t);
	for (int i=0;i<t;i++)
	{
		scanf ("%lld", &n);
		for (int j=0;j<n;j++)
		{
			scanf ("%lld", &a[j]);
			sum += a[j];
		}
		printf ("Case #%d: %lld\n", i+1, sum);
		sum = 0;
	}
	return 0;
}
