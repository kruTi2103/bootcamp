#include <stdio.h>
#include <string.h>
int main() 
{
    char p[100];
    scanf("%s", p);
    int len = strlen(p); 
    for (int i=0; i<len; i++)
    {
    	if(p[i]==p[i+1])
    	{
    		printf("%c\n",p[i]);
    		break;
		}
    }
    
return 0;
}

