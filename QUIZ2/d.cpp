#include <stdio.h>
#include <string.h>
void removechar(char s[])
{
	int n = strlen(s);
	int i=0, j=0;
	for (i;i<n;i++)
	{
		if (s[i] != s[j])
		{
			j++;
			s[j]=s[i];
		}
	}
	j++;
	s[j]='\0';
}

int main ()
{
	char s[100001];
	scanf ("%[^\n]", s);
	removechar(s);
	printf ("%s\n", s);
	return 0;
}
