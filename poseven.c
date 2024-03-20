#include <stdio.h>
int main ()
{
int num;
scanf("%d",&num);
if (num>0)
 {
  printf("num %d positive",num);
 }
 if (num%2==0)
      { 
        printf(" %d is even",num);
      }
else
   {
    printf(" %d iszero",num);
   }
   return 0;
 }
