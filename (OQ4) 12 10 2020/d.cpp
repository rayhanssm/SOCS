#include <stdio.h>
int main ()
{
	long n, x, y, i, j, even=0, odd=0;
	scanf ("%ld %ld %ld", &n, &x, &y);
	getchar ();
	long num[n];
	for (i=0;i<n;i++)
	{
	scanf ("%ld", &num[i]);
		if (num[i]%2!=0)
		{
		odd = odd + (num[i]*x);
		} else 
		{
		even = even + (num[i]*y);
		}
	}
	printf ("%ld\n", odd+even);
	return 0;
}
