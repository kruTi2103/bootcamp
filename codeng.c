#include <stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    for (int h=0; h<t; h++)
    {
       int i,n;
	scanf("%d",&n);
	int p[n];
	for (i=0;i<n;i++)
	{
	 scanf ("%d",&p[i]);
	}
	for (i=0;i<n;i++)
	{
	 printf ("%d",p[i]);
	 
	}
	printf ("\n");
    }
    return 0;
}
