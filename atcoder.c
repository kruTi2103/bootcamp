#include <stdio.h>
#include <stdlib.h> 
int cute(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = a-1,sum=0;
    int p[c];
    for (int i = 1; i <= c; i++)
    {
        scanf("%d", &p[i]);
    }
    qsort(p, a, sizeof(int), cute);

    for (int i = 2; i <= c-1; i++)
    {
        sum=sum+p[i];
    }
    int r = b-sum;
    if(r<100)
    {
    	printf("%d",r);
    }
    else if(sum==0)
    {
    	printf("0\n");
	}
    else
    {
    	printf("-1");
    }

    return 0;
}

