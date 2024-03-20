#include<stdio.h>
int main()
{
	int n, sum = 0, i = 0, a,c;
    scanf("%d", &n);
	int l[n];
    while (n > 0) 
    {
        a = n % 2;
        l[i]=a;
        n /= 2;
        i++;
    }
	for (int j=i-1; j>=0; j--)
	{
	 	if(l[j]==l[j+1])
	 	{
	 		c=1;
	 	}
	}
	if(c==1)
	{
		printf("False\n");
	}
	else
	{
		printf("True\n");
	}
		
    return 0;
}
