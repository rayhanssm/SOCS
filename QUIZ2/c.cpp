#include <stdio.h>
struct dateA
{
	long long y, m, d;
};

struct dateB
{
	long long y, m, d;
};

int main ()
{
	long long n, q, x=0, t, i, k[10];
	dateA a[10000];
	dateB b[10000];
	scanf ("%lld", &n);
	for (i=1;i<=n;i++)
	{
		scanf ("%lld/%lld/%lld", &a[i].y, &a[i].m, &a[i].d);
		x++;
	}
	scanf ("%lld", &q);
	for (i=1;i<=q;i++)
	{
		scanf ("%lld %lld/%lld/%lld", &k[i], &b[i].y, &b[i].m, &b[i].d);
		if (k[i]==0)
		{
			if (b[i].y>=a[i].y)
			{
				t = x;
			}
		}
		printf ("Case #%lld: %lld\n", i, t);
	}
	return 0; 
}
