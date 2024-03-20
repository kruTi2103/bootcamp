#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int c=1;
	for (int i=0; i<n; i++)
	{
		printf("\n");
		for (int j=0; j<n; j++)
		{
			if (i==0)
			{
				printf("%d ",c);
				c++;
			}
			else if (j==n-1)
			{
				printf("%d ",c);
				c++;
			}
			else if (i==n-1)
			{
				for (j=0; j<n; j++)
				{

					int r = c+(n-1);
					printf("%d ",r);
					c--;
				}
			}
			else if (j==0 && (i>0 && i<=n-2))
			{
				int e = c+n+1;
				printf("%d ",e);
				
			}
			else 
			{
			printf("0 ");
			}
		}
	}
	return 0;
}
