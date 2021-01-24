#include <stdio.h>
int main ()
{
	char nama[100];
	scanf ("%[^\n]", nama);
	getchar();
	printf ("Congratulation \"%s\" for entering the computer science department at Bina Nusantara University.\n", nama);
	
	return 0;
}
