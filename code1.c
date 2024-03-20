#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	for (int i=0; i<t; i++)
	{
	    long int n, first_number;
    	scanf("%ld", &n);
    	long int last_number=n%10;
    	while (n>0)
    	{
    		first_number=n%10;
    		n=n/10;
    	}
	    printf("%ld\n", first_number+last_number);	
	}
    return 0;
}

