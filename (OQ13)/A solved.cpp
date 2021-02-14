#include <stdio.h>
#include <string.h>
struct plant
{
	char name[1001], id[1001];
};

int main()
{
	FILE *fp = fopen("testdata.in", "r");
	long long n;
	char temp[1001];
	plant m[1001];
	fscanf (fp, "%lld\n", &n);
	for (int i=1;i<=n;i++)
	{
		fscanf (fp, "%[^#]#%[^\n]\n", m[i].id, m[i].name);
	}
	for (int i=0;i<=n;i++)
	{
		for (int j=i+1;j<=n;j++)
		{	
			if (strcmp(m[i].name, m[j].name)>0)
			{
				strcpy(temp,m[i].id);
           		strcpy(m[i].id,m[j].id);
           		strcpy(m[j].id,temp);
				
				strcpy(temp,m[i].name);
           		strcpy(m[i].name,m[j].name);
           		strcpy(m[j].name,temp);
			}
		}
	}
	for (int i=1;i<=n;i++)
	{
		printf ("%s %s\n", m[i].id, m[i].name);
	}
	return 0;
}
