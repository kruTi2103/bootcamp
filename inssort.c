#include <stdio.h>

void inssort(int arr[100], int n) 
{
    for (int i = 1; i < n; i++)
     {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
         {
            arr[j + 1] = arr[j];
            j--;
        }
	arr[j + 1] = key;
    }
}

int main()
 {
 	int n;
 	scanf("%d",&n);
 	int p[n];
 	for (int i=0; i<n; i++)
 	{
 		scanf("%d",&p[i]);
 	}
    inssort(p, n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", p[i]);
    }
    printf("\n");

    return 0;
}

