#include <stdio.h>
#include <string.h>
struct nasabah
{
	char AccNum[1001], nama[1001], umur[1001], saldo[1001], x[1001];
};

int main()
{
	long long n, m, i;
	nasabah nsbh[1001];
	scanf ("%lld", &n);
	for (i=0;i<n;i++)
	{
		scanf ("%[^,],%[^,],%[^,],%[^\n]", nsbh[i].AccNum, nsbh[i].nama, nsbh[i].umur, nsbh[i].saldo);
	}
	scanf ("%lld", &m); getchar ();
	for (i=0;i<m;i++)
	{
		scanf ("[^\n]", nsbh[i].x);
	}
	for (i=0;i<m;i++)
	{
		if (strcmp(nsbh[i].x, nsbh[i].AccNum)==0)
		{
			printf ("%s %s %s\n", nsbh[i].nama, nsbh[i].umur, nsbh[i].saldo);
		} else
		{
			printf ("-1\n");
		}
	}
	return 0;
}
