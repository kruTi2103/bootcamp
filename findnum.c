#include <stdio.h>

int main(void) {
	int n,k;
	scanf("%d%d",&n,&k);
	int p[100];
	int c=0;
	for (int i=0; i<n; i++)
	{
	    scanf("%d",&p[i]);
	}
	for (int i=0; i<n; i++)
	{
	    if (p[i]==k)
	    {
	        c = c +1;
	    }
	}
	if (c>0)
	{
	    printf("1\n");
	}
	else
	{
	    printf("-1\n");
	}
	return 0;
}


