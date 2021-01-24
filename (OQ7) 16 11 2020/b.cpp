#include <stdio.h>
int f(int n);

int main ()
{
	int t, n;
	scanf ("%d", &t);
	for (int i=0;i<t;i++)
	{
		scanf ("%d", &n); getchar ();
		printf ("Case #%d: %d\n", i+1, f(n));
	}
	
	return 0;
}

int f(int n)
{
	if (n%3==0)
		return (n-(n/3))+1;
	else
		return f(n-1)+n+f(n-2)+1;
}
