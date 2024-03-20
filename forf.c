#include <stdio.h>
int main()
{
int lower;
for(lower=0; lower<=300; lower=lower+2)
   {
  
    printf("%4d\t%3.2f\n",lower,5.0*(lower-32)/9);
    }
    return 0;
    }
