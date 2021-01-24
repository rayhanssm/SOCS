#include <stdio.h>
int main ()
{
	int t, n, m, i, j, k;
	scanf ("%d", &t);
	for (i=1;i<=t;i++)
	{
		printf ("Case #%d:\n", i);
		scanf ("%d", &n);
		for (j=1;j<=n;j++)
		{
			if (n%2==0)
			{
				for (k=1;k<=n-j;k++)
				{
					printf (" ");
				}
				for (k=1;k<=j;k++)
				{
					if (k%2==0)
					{
						printf ("*");
					} else
					{
						printf ("#");
					}
				}
				printf ("\n");
			} else
			{
				for (k=1;k<=n-j;k++)
				{
					printf (" ");
				}
				for (k=1;k<=j;k++)
				{
					if (k%2==0)
					{
						printf ("#");
					} else
					{
						printf ("*");
					}
				}
				printf ("\n");
			}
		}
	}
	return 0;
}
