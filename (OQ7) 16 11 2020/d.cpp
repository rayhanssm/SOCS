#include <stdio.h>
//int a(int m, int n);

int main ()
{
	int t, n;
	int a[10];
	scanf ("%d", &t);
	for (int i=0;i<t;i++)
	{
		scanf ("%d ", &n);
		for (int j=0;j<n;j++)
		{
			scanf ("%d", &a[j]);
		}
	}
	
	return 0;
}

//int a(int m, int n)
//{
//	if (m==0)
//		return n+1;
//	else if (m>0 && n==0)
//		return a(m-1,1);
//	else if (m>0 && n>0)
//		return a(m-1,a(m,n-1));
//}
