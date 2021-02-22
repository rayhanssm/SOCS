#include <stdio.h>
#include <string.h>
struct informasi 
{
	long long id, tbk, tbi;
	char nama[1001];
};
informasi info[1001];

void sort(double tbcm[], long long n, char info.nama, long long info.id)
{
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-1-i;j++)
		{
			if (tbcm[j]<=tbcm[j+1])
			{
				int temp = tbcm[j];
				tbcm[j] = tbcm[j+1];
				tbcm[j+1] = temp;
				
				strcpy(temp,info[i].nama);
     			strcpy(info[i].nama,info[j].nama);
      			strcpy(info[j].nama,temp);
      		     		
      		    int temps = info[i].id;
      		    info[i].id = info[j].id;
      			info[j].id = temp;
			}
		}
	}
}

int main ()
{
	long long n, m, i, x[1001];
	double tbcm[1001];
	char temp[1001];
	scanf ("%lld", &n);
	for (i=0;i<n;i++)
	{
		scanf ("%lld,%[^,],%lld %lld", &info[i].id, info[i].nama, &info[i].tbk, &info[i].tbi);
		tbcm[i] = (double)((info[i].tbk*12)*2,54) + (info[i].tbi*2,54);
		printf ("%.2lf\n", tbcm[i]);
	}
	scanf ("%lld", &m);
	for (i=0;i<m;i++)
	{
		scanf ("%lld", &x[i]);
	}
	for (i=1;i<=m;i++)
	{
		printf ("Q%lld:\n", i);
		for (i=1;i<=n;i++)
		{
			if (tbcm[i]<=x[i])
			{
				sort (tbcm, n, info.nama, info.id)
				printf ("%lld %s %.2lf\n", info[i].id, info[i].nama, tbcm[i]);
			}
			else
			{
				printf ("-1\n");
			}
		}
	}
	return 0;
}
