#include <stdio.h>
int main()
{
int lower;
for(lower=0; lower<=300; lower=lower+20)
   {
    printf("%4d\t%4d\n",lower,5*(lower-32)/9);
    }
    return 0;
    }
