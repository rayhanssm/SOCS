#include <stdio.h>
#include <stdlib.h>
struct student
{
	int id, day, mnth, year;
	char name[100], add[100];
};

int main()
{
	int n, q, x, i, id;
	student stu[101];
	scanf ("%d", &n); getchar();
	for (i=0;i<n;i++)
	{
		scanf ("%d %d %d %d %s %s", &stu[i].id, &stu[i].day, &stu[i].mnth, &stu[i].year, stu[i].name, stu[i].add);
	}
	stu[i].id = id;
	scanf ("%d", &q);
	for (int i=0;i<q;i++)
	{
		scanf ("%d", &x);
		if (x==id)
		{
			printf ("%d. %s was born on %d/%d/%d and live at %s\n", stu[i].id, stu[i].name, stu[i].day, stu[i].mnth, stu[i].year, stu[i].add);
		} else
		{
			printf ("No data found!\n");
		}
	}
	return 0;
}
