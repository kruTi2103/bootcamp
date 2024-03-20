#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for (int i=0; i<t; i++)
	{
	    int n,x,k,p;
	    scanf("%d %d %d %d ",&n, &x, &k, &p);
	    {
	       if (k>0 && k<=x)
	       {
	           int a = k*10;
	           int j = p+a;
	           printf("%d\n",j);
	           
	       }
	       else if (k==0)
	       {
	           printf("%d\n",p);
	       }
	       else if (k==n)
	       {
	           int d = k-x;
	           int f = p+d*5+20+x*10;
	           printf("%d\n",f);
	       }
	       else
	       {
	           int b = k - x;
               int c = p + b * 5 + x*10;
               printf("%d\n", c);
	       }
	       
	        
	    }
	
	return 0;
}


