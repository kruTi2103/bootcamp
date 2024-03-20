#include <stdio.h>
int main ()
{
 int n;
 scanf("%d",&n);
 for(int i=0; i<n; i++)
 { printf("\n");
  for(int j=1; j<=n; j++)
  {
   for(int k=n-j; k>0; k--)
   {
   printf("%d",k);
  }
}
 }
 return 0;
}
