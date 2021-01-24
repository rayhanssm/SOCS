#include <stdio.h>
int main ()
{
	int t, n, m;
	scanf ("%d", &t);
	for (int i=0;i<t;i++)
	{
		scanf ("%d %d", &n, &m);
		for (int j=1;j<=m;j++)
		{
			int result = 1;
			for (int k=1;k<=m;k++)
			{
				printf ("%d\n", result);
				result = result*(j-k)/j;
			}
		}
//		printf ("Case #%d: %d\n", i+1, result);
	}
}
