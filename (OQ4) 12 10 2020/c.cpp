#include <stdio.h>
int main ()
{
	int n, i;
	scanf ("%d", &n);
	getchar ();
	int num[n];
	for (i=0;i<n;i++)
	{
		scanf ("%d", &num[i]);
	}	
	for (i=1;i<=n;i++)
	{
		if (num[i]==1)
		{
			printf ("%d ", num[i-1]);
		} if (i==n-1)
		{
			printf ("%d", num[i]);
		} if (n==1)
		{
			printf ("%d", num[0]);
		}
	}
	printf ("\n");
	return 0;
}
