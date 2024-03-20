#include<stdio.h>
#include<math.h>
int main()
{
	int n,c;
	scanf("%d",&n);
	for (int i=0; i<=1000; i++)
	{
		int a =pow(2,i);
		if(n==a)
		{
			c = 1;
			break;
		}
		
	}
	if(c==1)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	
	
}
