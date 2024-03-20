#include <stdio.h>
int main ()
{
 int p,s,d;
 printf("Enter the MRP and Discount\n");
 scanf ("%d%d",&s,&d);
 p=s-s*d/100;
 printf("%d",p);
 return 0;
 }
