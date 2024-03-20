#include <stdio.h>
int main ()
{
	int n, c=0;
	scanf ("%d",&n);
	//int i=1;
	//while (i<=n)
	for (int i=1; i<=n; i++)
	{
		if (n%i==0)
		{
			c++;
		}
		//i++;
	}
	if (c==2)
	{
		printf("Prime\n");
	}
	else
	{
		printf("Not prime\n");
	}
	
	return 0;
}
  
