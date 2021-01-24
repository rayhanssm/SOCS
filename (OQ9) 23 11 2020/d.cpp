#include <stdio.h>
int main()
{
	int n, m, i, j, x, result;
	scanf ("%d %d", &n, &m);
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			scanf ("%d", &x);
			if (j!=x)
			{
			
			} else
			{
				result = j-1;
			}
		}
	}
	printf ("%d\n", result);
}
