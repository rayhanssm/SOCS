#include <stdio.h>
int main ()
{
	int n, i;
	scanf ("%d", &n);
	getchar ();
	int num[n];
	for (i=1;i<=n;i++)
	{
	scanf ("%d", &num[i]);
	}
	for (num[i]=1;num[i]<=n;num[i]++)
	{
		if (num[i]==1 || num[n-1])
		{
			printf ("%d ", num[i-1]);
		}
	}
	printf ("\n");
	return 0;
}
