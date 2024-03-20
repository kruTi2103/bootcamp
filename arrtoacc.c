#include <stdio.h>
int main ()
{
	 int n, k;
	 printf("Enter len of list:\n");
	 scanf("%d",&n);
	 printf("Enter k:\n");
	 scanf("%d",&k);	 
	 int p[n];
	 printf("Enter %d number:", n);
	 for(int i=0; i<n; i++)
	 {
	  scanf("%d",&p[i]);
	 }
	 
	 for(int i=0; i<k; i++)
	 {
	 	int l, c=0;
	 	printf("Enter value of l:");	 	
	 	scanf("%d", &l);
	 	for(int j=0; j<n; j++)
	 	{
	    	if(p[j]==l)
	   		{
				c++;
	   		}
	  	}
	    printf("Total occurance of %d is %d\n", l, c);
	 }
	 return 0;
}
