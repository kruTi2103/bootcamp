#include <stdio.h>
void bubsort(int a[100], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++)
         {
            if (a[j] > a[j + 1])
             {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++)
    {
    	scanf("%d",&a[i]);
	}
    bubsort(a,n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}

