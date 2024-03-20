#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int p[n][n];
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	for (int i=0; i<n; i++)
	{ printf("\n");
		for (int j=0; j<n; j++)
		{
			printf("%d ",p[i][j]);
		}
	}
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (i==j)
			{
				p[j][i]==p[i][j];
			}
			else
			{
			 	p[i][j]==p[j][i];
			}
		}
	}
	for (int i=0; i<n; i++)
	{ printf("\n");
		for (int j=0; j<n; j++)
		{
			printf("%d ",p[i][j]);
		}
	}
	
}
