#include <stdio.h>
int main ()
{
	int n, k;
	scanf ("%d %d", &n, &k);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			printf ("#");
		}
		printf ("\n");
	}
	printf ("\n");
	for (int a=1;a<=n;a++)
	{
		for (int b=1;b<=n;b++)
		{
			if (a%k==0)
			{
				printf ("#");
			} else
			{
				printf (".");
			}
		}
		printf ("\n");
	}
	printf ("\n");
	for (int a=1;a<=n;a++)
	{
		for (int b=1;b<=n;b++)
		{
			if (b%k==0)
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
