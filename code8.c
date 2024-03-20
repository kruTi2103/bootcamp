#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for (int h=0; h<t; h++)
	{
	    int n;
	    scanf("%d",&n);
	   // int a = n+1;
	    int c=0,k[1000000];
	    for(int i=n; i>0; i--)
        {
              int p=i%10;
              k[c]=p;
              i=i/10;
              c++;
        }
        for (int i=0; i<c; i++)
	{
	    printf("%d ",k[i]);
	}
        
	}
	return 0;
}


