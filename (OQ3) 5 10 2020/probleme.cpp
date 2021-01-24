#include<stdio.h>
#include<math.h>
int main ()
{
	int n, s, a, b, c;
	double j, x;
	scanf ("%d %d %d %d %d", &n, &s, &a, &b, &c);
	j = (a/s)*(b/s)*(c/s);
	x = (double)n/j;
	x = ceil(x);
	printf ("%d\n", (int)x);
	
	return 0;
}
