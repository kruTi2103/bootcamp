
#include <stdio.h>

void selsort(int a[100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int imin = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[imin]) {
                imin = j;
            }
        }
        int temp = a[i];
        a[i] = a[imin];
        a[imin] = temp;
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
    selsort(a,n);
    for (int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}

