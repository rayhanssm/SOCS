#include <stdio.h>
#include <string.h>
struct data
{
	int num;
	char name[101][101];
};

int main()
{
	data d[101];
	int t, n;
	scanf ("%d", &t); getchar();
	for (int i=1;i<=t;i++)
	{
		scanf ("%d", &n);
		for (int j=1;j<=n;j++)
		{
			scanf ("%[^#]#%d", d[j].name, &d[j].num);
		}
		for (int j=0;j<n;j++)
		{
			for (int k=0;k<n-j;k++)
			{
				if (strcmp(d[k].name, d[k+1].name)>0)
				{
					int temp = d[k].num;
					d[k].num = d[k+1].num;
					d[k+1].num = temp;
				}
			}
		}
		printf ("Case #%d:", i);
		for (int j=1;j<=n;j++)
		{
			printf ("%s - %d\n", d[j].name, d[j].num);
		}
	}
	return 0;
}

