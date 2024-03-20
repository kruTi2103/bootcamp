#include <stdio.h>
int main ()
{
 int d,m,y;
 printf("Enter the day ,month and year\n");
 scanf("%d%d%d",&d,&m,&y);
 if (d>=1&&d<=31)
  {
   if (m>=1&&m<=12)
   {
    if(y>0)
    {
     printf("valid Year");
    }
   }
  }
  else
  {
    printf("Invalid year");
   }
   return 0;
}

   
 
 
