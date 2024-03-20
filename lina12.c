#include <stdio.h>//not done
int main() {
    int n, k;
    printf("size of the array: ");
    scanf("%d", &n);
    printf("number of rotations: ");
    scanf("%d", &k);
     int a[n];
    printf("elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    k = k % n; 
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = a[i];
    }
    for (int i = 0; i < n; i++) {
        a[i] = temp[i];
        }
    printf("%d\n", k);
    for (int i = 0; i < n; i++) {
    	for (int j=i+1; j<n; j++)
    	{
    		a[i]==a[j+1];
    	}
    	
        printf("%d ", a[i]);
    }
    
    printf("\n");

    return 0;
}
