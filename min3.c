#include <stdio.h>
int main ()
{
 int a,b,c,min;
 printf("Enter the numbers\n");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 {
  min=b;
 }
 else
 {
  min=a;
  }
 if(min>c)
 {
  min=c;
 }
 else
 {
  min=min;
 }
 printf("%d",min);
 return 0;
 }
 
 
