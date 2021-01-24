#include <stdio.h>
int main ()
{
	FILE * fp = fopen ("testdata.in", "r");
	int t = 0, k;
	fscanf (fp, "%d\n", &t);
	for (int i=0;i<t;i++)
	{
		fscanf (fp, "%d\n", &k);
		char s = '\0';
		int O = 0, I = 1, E = 3, A = 4, S = 5, G = 6, T = 7, B = 8;
		while (s != '\n')
		{
			fscanf (fp, "%c", &s);
			s = s - k;
			printf ("%c", s);
		}
	}
	fclose (fp);
	return 0;
}
