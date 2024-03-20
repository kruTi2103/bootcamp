#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int k = 1;
	for (int i=1; i<n; i++)
	{
		printf("\n");
		for (int j=1; j<n; j++)
		{
			printf("%d ",k);
			k++;
		}
		for (int j=1; j<n; j++)
		{
			if (j==1)
			{
			
				int p = k+1;
				printf("%d ",p);
			}
			else
			{
				k=k*3;
			}
		}		
	}
	return 0;
}
