#include <stdio.h>
int main ()
{
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 if (a==0)
 {
  if (b==0)
  {
   if (c==0)
   {
     printf("water fill");
    }
    else
    {
     printf("water fill");
    }
   }
   else if (c==0)
   {
    printf("fill");
   }
   else
   {
    printf("not now");
   }
  }
 else
 {
  printf("not now");
 }
 return 0;
}
