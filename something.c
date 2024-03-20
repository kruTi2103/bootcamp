#include <stdio.h>
int main()
{
int lower, higher,step, c;
lower=0; higher=300; step=20;
while(lower<=higher)
{
c=5*(lower-32)/9;
printf("%d\t%d\n",lower,c);
lower=lower+step;
}
}

