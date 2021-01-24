#include <stdio.h>
int swap(int a[j], int a[j+1], int j, int temp)
{
	int temp, j;
	temp = a[j];
	a[j] = a[j+1];
	a[j+1] = temp;
}

int main ()
{
	int t, n, a[10], i, j;
	scanf ("%d", &t);
	for (i=0;i<t;i++)
	{
		scanf ("%d", &n); getchar();
		for (j=0;j<n;j++);
		{
			scanf ("%d", &a[j]);
		}
	printf ("%d", swap(a[j],a[j+1]));
	}
	return 0;
}
