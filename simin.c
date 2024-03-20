#include <stdio.h>
int main()
{
 int p,r,t,s;
 printf("Enter principle \n");
 printf("Enter rate \n");
 printf("Enter time \n");
 scanf("%d%d%d",&p,&r,&t);
 s=(p*r*t)/100;
 printf("%d",s);
 return 0;
 }
