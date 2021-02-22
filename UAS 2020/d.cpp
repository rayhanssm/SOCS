#include <stdio.h>
int i;
int oddpage(int n[])
{
	if (n[i]%2!=0)
	{
		return i+2;
	}
}

int evenpage(int n[])
{
	if (n[i]%2==0)
	{
		return i+1;
	}
}

int main()
{
	int t, n[1001];
	scanf ("%d", &t);
	for (i=0;i<t;i++)
	{
		scanf ("%d", &n[i]);
	}
	for (i=1;i<=t;i++)
	{
		printf ("Case #%d:\n", i);
		printf ("Sheet %d, front: %d, %d\n", i, oddpage(n), evenpage(n));
		printf ("Sheet %d, back: %d, %d\n", i, oddpage(n), evenpage(n));
	}
	return 0;
}
