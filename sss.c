#include <stdio.h>
int main ()
{
    int L,R,i;
    scanf("%d%d",&L,&R);
    i=L;
    while (i<=R)
    {
        if (i%2!=0)
        {
            printf("%d\n",i);
        }
            i=i+1;
    }
    return 0;
}

