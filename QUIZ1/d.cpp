#include <stdio.h>
int main ()
{
	long long t, n, i, j;
	char s[101];
	scanf ("%lld", &t); getchar ();
	for (i=0;i<t;i++)
	{
		scanf ("%lld %[^\n]", &n, s); getchar ();
		if ((s[0]=='a') || (s[0]=='e') || (s[0]=='i') || (s[0]=='o') || (s[0]=='u') || (s[0]=='y') || (s[0]=='h' && s[1]=='a') || (s[0]=='h' && s[1]=='e') || (s[0]=='h' && s[1]=='i')|| (s[0]=='h' && s[1]=='o')|| (s[0]=='h' && s[1]=='u')|| (s[0]=='h' && s[1]=='y'))
		{
			printf ("Case #%d: j'%s\n", i+1, s);
		} else
		{
			printf ("Case #%d: je %s\n", i+1, s);
		}
	}
	return 0;
}
