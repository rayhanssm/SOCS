#include <stdio.h>
int main ()
{
	int t;
	char s[105];
	scanf ("%d", &t); getchar ();
	for (int i=0;i<t;i++)
	{
		scanf ("%[^\n]", s);
		
		
		printf ("Case #%d: %s", i+1, s);
	}
	return 0;
}
