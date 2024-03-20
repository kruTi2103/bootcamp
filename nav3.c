#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	scanf("%s",s);
	int p = strlen(s);
	int a=-1;
	for (int i=0; i<p; i++)
	{
		int c=0;
		for(int j=i+1; j<p; j++)
		{
			if(s[i]==s[j])
			{
			 	c=c+1;
			}
		}
		if(c==0)
		{
			a = i;
			break;
		}
		
	}
	printf("%d\n",a);
}
// Not done

