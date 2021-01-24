#include <stdio.h>
struct studentscore
{
	char name[101], id[101], score[101];
};

int main ()
{
	int n, q;
	studentscore stdscr[1001];
	scanf ("%d", &n); getchar();
	for (int i=0;i<n;i++)
	{
		scanf ("%[^\n]", stdscr[i].id); getchar();
		scanf ("%[^\n]", stdscr[i].name); getchar();
		scanf ("%[^\n]", stdscr[i].score); getchar();
	}
	scanf ("%d", &q); getchar();
	for (int j=0;j<q;j++)
	{
		scanf ("%d\n", x[i]); getchar();
	}
	
	
	return 0;
}
