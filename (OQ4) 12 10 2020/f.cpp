#include <stdio.h>
int main ()
{
	long long prime[10000], nprime = 1, i, j;
	prime [0] = 2;
	for (i=3;i<=1000000000;i+=2)
	{
		int flag = 0;
		for (j=3;j*j<=i;j+=2)
		{
			if (i%j==0)
			{
				flag =1;
				break;
			}
		}
		if (flag == 0)
		{
			prime[nprime] = i;
			nprime++;
		}
	}
	int t;
	scanf ("%d", &t);
	for (int k=0;k<t;k++)
	{
		int n;
		scanf ("%d", &n);
		printf ("Case #%d: ", k+1);
		int factor = 0;
		for (int l=0;prime[l]<=n;l++)
		{
			if (n%prime[l]==0)
			{
				int p=0;
				while (n%prime[l]==0)
				{
					p++;
					n/=prime[l];
				}
				if (factor != 0)
				{
					printf (" * ");
				}
				printf ("%d ^ %d", prime[l], p);
				factor++;
			}
		}
		printf ("\n");
	}
	return 0;
}
