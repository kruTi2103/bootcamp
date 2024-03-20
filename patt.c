#include <stdio.h>
int main ()
{
	 int n,i,j;
	 scanf ("%d",&n);
	 for (i=n;i>0;i--)
	 {
		  printf("\n");
		  for (j=i;j>=1;j--)
			  {
			  printf("%d ",j);
			  }
	 }
	 return 0;
	 }
