#include <stdio.h>
int main ()
{
 int a;
 int b;
 int c;
 int m,s;
 int sm;
 scanf("%d %d %d",&a,&b,&c);
 if (a>b)
 {
   m=a;
   s=b;
 }
 else
 {
  m=b;
  s=a;
 }
 if (m>c)
 {
  if (c>s)
  {
   sm=c;
  }
  else
  {
    sm=s;
  }
 }
 else
 {
  sm=m;
 }
 printf("%d\n",sm);
 printf("%d",s);
 
}
