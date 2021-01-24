#include <stdio.h>
int main ()
{
	int t, i, a, b, c;
	char s[101];
	scanf ("%d", &t); getchar ();
	char w[101];
	for (i=1;i<=t;i++)
	{
		scanf ("%d %d %[^\n]s", &a, &b, s); 
		if (a==0 && b==0)
		{
			printf ("Case #%d: el %s\n", i, s);
		} else if (a==1 && b==0)
		{
			printf ("Case #%d: la %s\n", i, s);
		} else if (a==0 && b==1)
		{
			printf ("Case #%d: los %s\n", i, s);
		} else if (a==1 && b==1)
		{
			printf ("Case #%d: las %s\n", i, s);
		}
	}
	return 0;
}
