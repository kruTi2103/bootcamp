//FC97
#include <stdio.h>
#include <string.h>
int main ()
{
 int i,p,n;
 int sum=0;
 scanf("%d",&n);
 for(i=1; i<=n; i++)
 {
  p=1%i;
  sum=sum+p;
  }
  printf("%d",sum);
 return 0;
}
