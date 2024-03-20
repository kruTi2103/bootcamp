#include <stdio.h>
int main ()
{
 int n,i,r;
 int c=0,k=0;
 scanf ("%d",&n);
 int p[n];
 for (i=0; i<n; i++)
 {
  scanf ("%d",&p[i]);
  }
  for (i=0;i<n; i++)
  {
   if (p[i]>0)
   {
    c++;
   }
   else if (p[i]==0)
   {
     r++;
   }
   else 
   {
    k++;
   }
  }
  printf ("%d\n%d\n%d",c,k,r);
  printf("\n");
}

