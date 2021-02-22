#include <stdio.h>
#include <string.h>
struct rakyat
{
	char ktgr[1001], nama[1001];
	long long dana;
};

int main()
{
	FILE *fp = fopen("testdata.in", "r");
	long long n, recipients=0, amount=0, i;
	char ktgr2[1001];
	rakyat r[1001];
	fscanf (fp, "%lld\n", &n);
	for (i=1;i<=n;i++)
	{
		fscanf (fp, "%[^,],%[^,],%lld\n", r[i].ktgr, r[i].nama, &r[i].dana);
	}
	fscanf (fp, "%[^\n]\n", ktgr2);
	for (i=1;i<=n;i++)
	{
		if (strcmp(r[i].ktgr, ktgr2)==0)
		{
		printf ("%s %s %lld\n", r[i].ktgr, r[i].nama, r[i].dana);
		recipients++;
		amount += r[i].dana;
		}
	} 
	printf ("Total Recipients: %lld\n", recipients);
	printf ("Total Amount: %lld\n", amount);	
	return 0;
}
