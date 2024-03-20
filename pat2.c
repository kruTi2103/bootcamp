#include <stdio.h>
int main ()
{
 int i,j,n;
 scanf ("%d",&n);
 for(i=1; i<=n; i++)
 {
  printf("\n");
  for(j=1;j<=i; j++)
  {
   printf("%3d",j);
  }
  for(j=i-1; j>0; j--)
  {
   printf("%3d",j);
  }
 }
 return 0;
}
