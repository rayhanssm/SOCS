#include <stdio.h>
int f0, f1, k;
int f(int k)
{
	if (k==0)
	{
		return f0;
	}
	if (k==1)
	{
		return f1;
	}
	else
	{
		return f(k-1)+f(k-2);
	}
}

int main ()
{
	scanf ("%d %d\n%d", &f0, &f1, &k); getchar();
	printf ("%d\n", f(k));
	return 0;
}
