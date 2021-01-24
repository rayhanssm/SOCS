#include <stdio.h>
struct mahasiswa
{
	char nim[101], name[101];
};

int main ()
{
	FILE *fp = fopen("testdata.txt", "r");
	int n = 0, t, i;
	char s[101];
	mahasiswa mhs[1000];
	fscanf (fp, "%d\n", &n);
	for (i=1;i<=n;i++)
	{
		fscanf (fp, "%[^\0] %[^\n]\n", mhs[i].nim, mhs[i].name);
	}
	fscanf (fp, "%d\n", &t);
	for (i=1;i<=t;i++)
	{
		fscanf (fp, "%[^\n]\n", s);
	}
	for (i=0;i<t;i++)
	{
		if (s==mhs[i].nim)
		{
			printf ("Case #%d: %s\n", i+1, mhs[i].name);
		} else
		{
			printf ("Case #%d: N/A\n", i+1);
		}
	}
	return 0;
}
