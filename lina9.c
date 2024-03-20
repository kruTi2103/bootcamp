#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int p[n][n];
	int k[n][n];
	int c=0;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			scanf("%d",&k[i][j]);
		}
	}
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (p[i][j]==k[i][j])
			{
				c=c+1;
			}
		}
	}
	if (c==n*n)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
