#include <stdio.h>
int main ()
{
 int u,a,b;
 float c=0.50,d=0.75,e=1.20,f=1.50,p=0.2;
 printf("Enter the unit\n");
 scanf("%d",&u);
 if(u<=50)
 {
  a=u*c;
  b=(u*p);
  printf("%d",b);
 }
 else if(u<=150)
 {
  a=u*d;
  b=(u*p)+a;
  printf("%d",b);
 }
 else if(u<=250)
 {
  a=u*e;
  b=(u*p)+a;
  printf("%d",b);
 }
 else
 {
  a=u*f;
  b=(u*p)+a;
  printf("%d",b);
 }
 return 0;
 }
