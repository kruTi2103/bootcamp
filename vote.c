#include <stdio.h>
int main ()
{
 int p;
 printf("Enter age\n");
 scanf("%d",&p);
 if (p>=18&&p<65)
   {
    printf("Eligible for vote not senior citizen");
   }
    else if (p>=18&&p>=65)
          {
           printf("Eligible for vote and senior citizen");
          }
   else if (p<18)
          {
        printf("not eligible for vote and not senior citizen");
          }
}
