/*int cute(int* a, int* b)
{
    return(*a-*b);
}
 qsort(p,n,sizeof(int),cute);
 */
 int com(const void *a, const void *b)
{
    return (*(int *)a) - (*(int *)b);
}
bsearch(&p,a,n,sizeof(int),com);

#include <stdlib.h> 
int cute(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}
qsort(p, n, sizeof(int), cute);

