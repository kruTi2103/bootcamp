#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int p[n];
	int c=1;
	for (int i=0; i<n; i++)
	{
	 	scanf("%d",&p[i]);
	}
	for (int i=0; i<=n; i++)
	{
		for (int j=i+1; j<=n; j++)
		{
	  		if (p[i]==p[j])
	  		{
	  			p[i]=p[i+1];
	  			c=c+1;
	  		}
		}
		printf("%d\n",c);
		n=n-1;
		c=1;
	}
	return 0;
}







