#include <stdio.h>
int main ()
{
	long long t, c, r = 0, b = 0, s;
	scanf ("%lld", &t);
	for (int i=0;i<t;i++)
	{
		scanf ("%lld %lld %lld", &s, &r, &b);
		r = r*2;
		if (i%4==0)
		{
			r = r-(r/3);
		} else
		{
			r = r*2;
		}
		printf ("Case #%d: %d %s %d", i+1, );
	}
	
	return 0;
}
