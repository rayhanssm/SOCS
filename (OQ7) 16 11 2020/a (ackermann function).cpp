#include <stdio.h>
int a(int m, int n);

int main ()
{
	int m, n;
	scanf ("%d %d", &m, &n);
	printf ("result: %d\n", a(m,n));
	
	return 0;
}

int a(int m, int n)
{
	if (m==0)
		return n+1;
	else if (m>0 && n==0)
		return a(m-1,1);
	else if (m>0 && n>0)
		return a(m-1,a(m,n-1));
}
