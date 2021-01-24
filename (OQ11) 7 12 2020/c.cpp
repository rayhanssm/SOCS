#include <stdio.h>
int main ()
{
	FILE * fp = fopen ("testdata.in", "r");
	int t = 0, n=0, x;
	fscanf (fp, "%d\n", &t);
	for (int i=0;i<t;i++)
	{
		fscanf (fp, "%d\n", &n);
		for (int j=0;j<n;j++)
		{
			fscanf (fp, "%d\n", &x); 
		}
		printf ("Case #%d: %d", i+1, )
	}
	return 0;
}
