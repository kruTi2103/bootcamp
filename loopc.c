#include <stdio.h>
int main ()
{
 int n,sum=0,c=0,a;
 scanf("%d",&n);
 for(n=!0;)
 {
  a=n%10;
  n=n/10;
  sum =sum+a;
  printf("%d",sum);
  }
 }
