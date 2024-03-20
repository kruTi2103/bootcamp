// not not done
#include <stdio.h>
int main ()
{
 int P,N,I,a,b,c,d;
  printf("Enter the Principal,Years, Interest\n"); 
  scanf("%d%d%d",&P,&I,&N);
  a=I/100;
  b=1+a;
  d=b^N;
  c=P*d;
  printf("%d",c);
  return 0;
  }
 
