#include <stdio.h>
#include <string.h>
struct gift 
{
	int r;
	char g[1001];
};

int main ()
{
	gift gifts[1001];
	int n, i;
	char temp[1001];
	scanf ("%d", &n);
	for (i=0;i<n;i++)
	{
		scanf ("%s %d", gifts[i].g, &gifts[i].r);
	}
	for (int i=0;i<=n;i++)
	{
		for (int j=i+1;j<=n;j++)
		{	
			if (gifts[i].r>gifts[j].r)
			{
				int temps = gifts[i].r;
				gifts[i].r = gifts[j].r;
				gifts[j].r = temps;
				
				strcpy(temp,gifts[i].g);
           		strcpy(gifts[i].g,gifts[j].g);
           		strcpy(gifts[j].g,temp);
			}
		}
	}
	for (int i=1;i<=n;i++)
	{
		printf ("Lecturer #%d: %s\n", i, gifts[i].g);
	}
	return 0;
}
