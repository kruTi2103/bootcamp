#include <stdio.h>
 int main ()
 {
  int i,j,n;
  scanf("%d",&n);
  int c=1;
  for(i=1;i<=n;i++)
  { 
   printf("\n");
   for(j=1;j<=i;j++)
   {
   printf("%3d",c);
   c++;
   }
  }
  return 0;
  }
