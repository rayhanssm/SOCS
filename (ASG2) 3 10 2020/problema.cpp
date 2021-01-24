#include <stdio.h>
int main ()
{
	char nama[100];
	char a[9];
	int u;
	scanf ("%[^\n]", nama);
	scanf ("%s %d", &a, &u);
	getchar();
	printf ("Name: %s\n", nama);
	printf ("NIS: %s\nAge: %d\n", a, u);
	
	return 0;
}
