#include <stdio.h>
int main()
 {
    char k[] = "Hello, World!";
    char p[50];
    int i = 0;
    while (k[i] != '\0')
     {
        p[i] = k[i];
        i++;
     }
    p[i] = '\0';
    printf("Copied String: %s\n",p);
    return 0;
}

