
#include <stdio.h>
int main ()
{
 int a,b,c,d,max,max2;
 printf("Enter the number\n");
 scanf("%d%d%d%d",&a,&b,&c,&d);
  if (a>b)
  {
   max=a;
  }
  else 
  {
   max=b;
  }
  if(c>d)
  {
   max2=c;
  }
  else
  {
   max2=d;
  }
  if(max>max2)
  {
   printf("%d",max);
  }
  else 
  {
   printf("%d",max2);
  }
  return 0;
}
