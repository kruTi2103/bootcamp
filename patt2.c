#include <stdio.h>
int main ()
{
	int a,i,j;
	scanf("%d",&a);
	for(i=a;i>0;i--)
	  {
	    printf("\n");
	    
	   for(j=1;j<=i;j++)
	     {
	       printf("%d ",i);
	     }
	   }
	return 0;
}

