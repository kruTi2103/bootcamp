#include <stdio.h>
int main ()
{
int c,sum,n,a;
scanf("%d",&n);
sum=0;
while (n!=0) 
{
a=n%10;
n=n/10;
sum=sum+a;
}
printf("%d",sum);
return 0;
}

