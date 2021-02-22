#include <stdio.h>
#include <math.h>
int main ()
{
	double a[15], sum = 0, tax = 0, charge = 0;
	for (int i=0;i<12;i++)
	{
		scanf ("%lf, ", &a[i]);
		sum = sum + a[i];
	}
	tax = floor((7*sum)/100);
	charge = floor((5*sum)/100);
	sum = sum - tax - charge;
	printf ("%.2f, %.2f, %.2f\n", tax, charge, sum);
	
	return 0;
}
