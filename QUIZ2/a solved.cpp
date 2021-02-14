#include <stdio.h>
int f(long long x)
{
	if (x>0)
	{
		return f(x-1)+1;
	}
	else if (x==0)
	{
		return 0;
	}
}

int main ()
{
	long long x;
	scanf ("%lld", &x);
	printf ("%lld\n", f(x));
	return 0;
}
