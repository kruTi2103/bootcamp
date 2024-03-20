#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for (int i=0; i<t; i++)
	{
	    int n,x;
	    scanf("%d %d", &n, &x);
	    if(x>=n)
	    {
	        printf("0\n");
	    }
	     else if((n-x)%4==0)
	    {
	        int b = (n-x)/4;
	        printf("%d\n",b);
	    }
	    
	    else
	    {
	        int c = (n-x)/4;
	        int d = c+1;
	        printf("%d\n",d);
	    }
	}

	return 0;
}


