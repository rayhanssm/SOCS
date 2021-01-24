#include <stdio.h>
int main ()
{
	char s[101];
	scanf ("%[^\n]", s); getchar ();
	printf ("Halo %s\n", s);
	return 0;
}
