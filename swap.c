#include <stdio.h>
int main ()
{
 int p,k,t;
 printf("Enter the first number\n");
 printf("Enter the second number\n");
 scanf("%d%d",&p,&k);
 t=p;
 p=k;
 k=t;
 printf("%d\n%d",p,k);
 return 0;
 }
 
