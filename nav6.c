#include <stdio.h>

int main() {
    int n,m, sum = 0, i = 0, a,h =0,b;
    scanf("%d %d", &n,&m);
	int l[n],p[m];
    while (n > 0) 
    {
        a = n % 2;
        l[i]=a;
        n /= 2;
        i++;
    }
	
	for (int j=i-1; j>=0; j--)
		{
		printf("%d", l[j]);
		}
		printf("\n");
		 while (m > 0) 
    {
        b = m % 2;
        p[h]=b;
        m /= 2;
        h++;
    }
	
	for (int j=h-1; j>=0; j--)
		{
		printf("%d", p[j]);
		}
	
    return 0;
}

	
