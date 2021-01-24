#include <stdio.h>
int main ()
{
	int n, q, i, j, views[101], a[101], b[101], total;
	scanf ("%d", &n); getchar ();
	for (i=1;i<=n;i++)
	{
		scanf ("%d", &views[i]);		
	}
	scanf ("%d", &q);
	for (j=1;j<=q;j++)
	{
		scanf ("%d %d", &a[i], &b[i]);
		if (a[i] && b[i])
		{
			total = views[i+i];
		}
	printf ("Case #%d: %d\n", j, total);
	}
	return 0;
}
