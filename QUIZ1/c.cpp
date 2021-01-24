#include <stdio.h>
int main ()
{
	int n, i, j;
	char a[2], b[2];
	scanf ("%d", &n); getchar ();
	scanf ("%s %s", a, b);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if ((i==j) || (i+j==n-1))
			{
				printf ("%s", a);
			} else
			{
				printf ("%s", b);
			}
		}
		printf ("\n");
	}
	return 0;
}
