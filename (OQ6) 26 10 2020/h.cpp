#include <stdio.h>
int main ()
{
	int t, l, r, i, fibo, f1=0, f2=1;
	for (i=1;i<65;i++)
	{
		fibo = f1 + f2;
		f1 = f2;
		f2 = fibo;
	}
	for (i=0;i<t;i++)
	{
		scanf ("%d %d", &l, &r);
	}
}
