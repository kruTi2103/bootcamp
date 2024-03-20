
#include <stdio.h>
#include <math.h>
int main ()
{
int n,sum=0,i,a;
scanf("%d",&n);
i=0;
while (n>0)
{
a=n%10;
sum=sum+(a*pow(2,i));
n=n/10;
i++;
}
printf("%d\n",sum);
return 0;
}


