#include <stdio.h>
int main ()
{
	int i,n,k;
	scanf("%d",&n);
	int p[n];
	for(i=0;i<n;i++)
	{
	 scanf("%d",&p[i]);
	}
	for (i=0;i<n;i++)
	{
	 printf ("%d ",p[i]);	 
	}
	printf("\n");
	{ 
	k=sizeof(p)/sizeof(p[0]);//formula
	//k=sizeof(p);(size of whole array)
	//k=sizeof(p[0]);(size of int, int ghetla mhnun)
	printf("%d\n",k);
	}
	return 0;
}
