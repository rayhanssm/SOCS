#include <stdio.h>
#include <string.h>
struct email
{
	char s[1001], o[1001];
};

int main ()
{
	int n, i, count=0;
	char m[1001];
	email e[1001];
	scanf ("%d", &n); getchar();
	for (i=0;i<n;i++)
	{
		scanf ("%[^@]@%[^\n]", e[i].s, e[i].o); getchar(); 
	}
	scanf ("%[^\n]", m); getchar;
	for (i=0;i<n;i++)
	{
		if (strcmp(e[i].o, m)==0)
		{
			count++;
		}
	}
	printf ("%d\n", count);
	return 0;
}

//4
//jojo_jotaro@yagoo.com
//lili_lee@beenoose.ac.id
//bibi_the.bee@boogle.com
//big_grass_field@yagoo.com
//beenoose.ac.id
