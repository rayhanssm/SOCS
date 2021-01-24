#include <stdio.h>
int main ()
{
	int n, q;
	int views[105];
	int start, end;
	int total = 0;
	
	scanf ("%d", &n);
	for (int i=1;i<=n;i++)
	{
		scanf ("%d", &views[i]);
	}
	scanf ("%d", &q);
	for (int i=1;i<=q;i++)
	{
		scanf ("%d %d", &start, &end);
		for (int j=start;j<=end;j++)
		{
			total = total+views[j];
		}
		printf ("Case #%d: %d\n", i, total);
		total = 0;
	}	
}
