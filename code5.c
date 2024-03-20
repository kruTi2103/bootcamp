#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int c=1;
	int p[6];
	for (int i=1; i<=n; i++)
	{
	   if (i%2!=0)
	   {
	      for (int k=1; k<=5; k++) 
	      {
	          printf("%d ",c);
	          c++;
	      }
	      printf("\n");
	   }
	    else if (i%2==0)
	   {
	      for (int j=0; j<5; j++)
	      {
	         p[j]=c;
	          c++;
	      }
	      for (int j=4; j>=0; j--)
	      {
	        printf("%d ",p[j]);
	      }
	      printf("\n");
	   }
	}
	return 0;
}


