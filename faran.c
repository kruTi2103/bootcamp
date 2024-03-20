#include <stdio.h>
int main()
{
int lower,higher,step;
float c;
lower=0, higher=300, step=20;
while(lower<=higher)
 {
    c=5/9*(lower-32);
    printf("%3d",lower);
    printf("%3f\n",c);
    lower =lower+step;
 }
 return 0;
 }
#farenhiet
