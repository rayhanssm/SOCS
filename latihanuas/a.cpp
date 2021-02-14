#include <stdio.h>
struct schedule
{
	char id[1001], t[1001];
};

struct train
{
	char id2[1001], o[1001], d[1001];
};

int main ()
{
	int n, i;
	schedule sch[1001];
	train tra[1001];
	scanf ("%d", &n); getchar();
	for (i=0;i<n;i++)
	{
		scanf ("%s %s", sch[i].id, sch[i].t); getchar();
	}
	for (i=0;i<n;i++)
	{
		scanf ("%s %s %s", tra[i].id2, tra[i].o, tra[i].d);
	}
	for (i=0;i<n;i++)
	{
		printf ("%s %s %s %s\n", sch[i].id, sch[i].t, tra[i].o, tra[i].d);
	}
	return 0;
}


//6
//TR000 07:00
//TR001 09:00
//TR002 11:00
//TR003 13:00
//TR004 15:00
//TR005 17:00
//TR003 ASO ALSUT
//TR002 ALSUT ASO
//TR000 ANGGREK BEKASI
//TR004 BEKASI ANGGREK
//TR001 ALSUT ANGGREK
//TR005 ANGREK ALSUT
