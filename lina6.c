#include <stdio.h>
#include <math.h>
int main ()
{
	 int n;
	 scanf("%d",&n);
	 int p[n][n];
	 double min = INFINITY;
	 for (int i=0; i<n; i++)
	 {
	  	for (int j=0; j<n; j++)
	  	{
	 		scanf("%d",&p[i][j]);
	 	}
	 }
	 for (int i=0; i<n; i++)
	 {
	  	for (int j=1; j<n; j++)
	  	{
	 		if (p[i][j]<min)
	 		{
	 			min = p[j][i];
			}
	 	}
	 }
	 printf("%d\n",(int)min);
	 return 0;
}
