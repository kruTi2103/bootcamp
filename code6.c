#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);// not done
	
	for (int i=0; i<t; i++)
	{
	    int n;
	    scanf("%d",&n);
	    int sum = 0;
	    int count = 0;
	    for (int j=1; i<=n; i++)
	    {
	        sum = sum + j;
	        count = count + 1;
	    }
	    if(sum%2==0)
	    {
	        printf("%d\n",count);
	    }
	    else
	    {
	        printf("%d\n",count-1);
	    }
	}
	return 0;
}


