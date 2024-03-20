#include <stdio.h>
int main ()
{
	int i=0, j=1, k, n;
	scanf("%d",&n);
	for (int p=0; p<n; p++)
	{
		while (i<=n)
		{
			printf("%d\n", i);
			k=i+j;
			i=j;
			j=k;
		}
	}
	return 0;
}
   	
