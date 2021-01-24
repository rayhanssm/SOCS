#include<stdio.h>
int main ()
{
	int a, b, c, d, p, q, r, s, t, z;
	scanf ("%d %d %d %d", &a, &b, &c, &d);
	z = a+b+c;
	p = z-a-d;
	t = z-p-b;
	r = z-d-c;
	q = z-b-r;
	s = z-t-c;
	printf ("%d %d %d\n", a, p, d);
	printf ("%d %d %d\n", q, b, r);
	printf ("%d %d %d\n", s, t, c);
	
	return 0;
}
