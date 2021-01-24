#include <stdio.h>
int main()
{
	FILE *fp = fopen("testdata.in", "r");
	int n, t;
	char m[101], p[101], s[101];
	fscanf (fp, "%d\n", &n);
	for (int i=0;i<n;i++)
	{	
		fscanf (fp,"%[^#]#%[^\n]\n", m, p);
	}
	fscanf (fp, "%d\n", &t);
	for (int i=1;i<=t;i++)
	{
		fscanf (fp,"%[^\n]\n", m);
		if (m==p)
		{
			printf ("Case #%d: %s\n", i, p);
		} else
		{
			printf ("Case #%d: N/A\n", i);
		}
	}
	
	return 0;
}
