#include <stdio.h>
int main ()
{
	FILE * fp = fopen ("testdata.in", "r");
	int t = 0, tc = 0;
	char s, sw, lw;
	fscanf (fp, "%d\n", &t);
	for (int i=0;i<t;i++)
	{
		fscanf (fp, "%[^#]#%s\n", sw, lw);
	}
	fscanf (fp, "%d\n", &tc);
	for (int i=0;i<tc;i++)
	{
		fscanf (fp, "%s ", sw);
		while (s != '\n')
		{
			sw = lw;
		}
		printf ("Case #%d:\n%s", i+1, sw);
	}
	fclose (fp);
	return 0;
}
