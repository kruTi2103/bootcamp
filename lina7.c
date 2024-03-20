#include <stdio.h>
int main ()
{
 int n;
 scanf("%d",&n);
 int p[n][n];
 int s=0;
 for (int i=0; i<n; i++)
 {
 	for (int j=0; j<n; j++)
  	{
 		scanf("%d",&p[i][j]);
 	}
 }
 for (int i=0; i<n; i++)
 {	printf("\n");
 	for (int j=0; j<n; j++)
  	{
 		printf("%d ",p[i][j]);
 	}
 }
 printf("\n");
 for (int i=0; i<n; i++)
 {
  	for (int j=0; j<n; j++)
  	{
  		if (i==j)
  		{
  			s=s+p[i][j];
  		}
  		else if (i+j==2)
  		{
  			s=s+p[i][j];
  		}
  	}
 }
 printf("%d\n",s);
 
}
