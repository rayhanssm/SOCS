#include <stdio.h>
int result(int j)
{
	
}

int main ()
{
	int t, n, i, j;
	scanf ("%d", &t);
	for (i=0;i<t;i++)
	{
		scanf ("%d", &n);
		printf ("Case #%d: \n", i+1);
		for (j=1;j<=n;j++)
		{
			printf ("%d", j);
		}
		printf ("\n");
	}
	return 0;
}
