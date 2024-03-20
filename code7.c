#include <stdio.h>
int main ()
{
   int n;
   scanf("%d",&n);
   int p[n];
   int k[n];
   int r[n];
   int t[n];
   int max=0,x,y;
   for (int i=0; i<n; i++)
   {
       scanf("%d",&p[i]);
   }
    for (int i=0; i<n; i++)
   {
       scanf("%d",&k[i]);
   }
   for (int i=0; i<n; i++)
   {
        if (p[i]>k[i])
        {
            r[i]=p[i]-k[i];
            t[i]=1;
        }
        else
        {
            r[i]=k[i]-p[i];
            t[i]=2;
        }
   }
   for (int i=0; i<n; i++)
   {
       printf("%d ",r[i]);
   }
   for(int j=0; j<n; j++)
	  {
	   	x=r[j];
	   	if (x>max)
	   	{
			max=x;
			 y = t[j];
	  	}
	  }
	  printf("%d ",y);
	  printf("%d",max);
}
