#include<stdio.h>

void sort(int num[], int n)
{
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-1-i;j++)
		{
			if (num[j]>num[j+1])
			{
				int temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
}

int main ()
{
	int num[101], t;
	scanf ("%d", &t);
	for (int i=0;i<t;i++)
	{
		scanf ("%d", &num[i]);
	}
	sort(num, t);
	for (int i=0;i<t;i++)
	{
		printf ("%d ", num[i]);
	}
	return 0;
}
