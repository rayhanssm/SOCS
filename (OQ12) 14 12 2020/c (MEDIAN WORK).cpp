#include<stdio.h>
long long t, n, a[1000000], sum=0, mid=0;
double mean=0, median=0;

void sort(long long a[], long long n)
{
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-1-i;j++)
		{
			if (a[j]>a[j+1])
			{
				long long temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main ()
{
	scanf ("%lld", &t);
	for (int i=0;i<t;i++)
	{
		scanf ("%lld", &n);
		for (int j=0;j<n;j++)
		{
			scanf ("%lld", &a[j]);
			sum += a[j];
		}
		mean = sum/(double)n;
		mid = n/2;
		if (n%2==0)
		{
			median = (a[mid-1]+a[mid])/2.0;
		} else
		{
			median = a[mid-1];
		}
		printf ("Case #%lld:\nMean : %.2lf\nMedian : %.2lf\n", i+1, mean, median);
		sum = 0;
	}
	return 0;
}
