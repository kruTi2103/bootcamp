#include <stdio.h>
int main()
{
	int t;
    scanf("%d", &t);
    for (int i=0; i<t; i++)
    {
    	int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (a==0)
        {
			if (b==0)
			{
            	printf("Water filling time\n");
            }
            else if (c==0)
            {
            	printf("Water filling time\n");
            }
            else
            {
            	printf("Not now\n");
            }
        }
        
        else if (b==0)
        {
			if (c==0)
			{
            	printf("Water filling time\n");
            }
            else if (a==0)
            {
            	printf("Water filling time\n");
            }
            else
            {
            	printf("Not now\n");
            }
        }
        
        else if (c==0)
        {
			if (a==0)
			{
            	printf("Water filling time\n");
            }
            else if (b==0)
            {
            	printf("Water filling time\n");
            }
            else
            {
            	printf("Not now\n");
            }
        }
        else
        {
            	printf("Not now\n");
        }			
    }
    return 0;
}
