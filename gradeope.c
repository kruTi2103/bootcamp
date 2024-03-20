/*grade */
#include <stdio.h>
int main ()
{
 int a;
printf("Enter the number\n");
 scanf("%d",&a);
 if (a<=100)
 {
   if (a<=100&&a>=99)
   {
     printf("Grade is X\n");
   }
  else if (a>=75&&a<99)
         {
          printf("Grade is A\n");
         }
  else if (a>=45&&a<75)
        {
         printf("Grade is B\n");
        }
  else if (a<45&&a>=0)
        {
        printf("fail\n");
        }
       else
           {
           printf("you have entered negative number\n");
           }
     }
  else
      {
        printf("you have entered greater than 100\n");
     }
}
 
