#include <stdio.h>

int main() {
    int n, sum = 0, i = 0, a;
    scanf("%d", &n);
	int l[n];
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
    return 0;
}

	
