#include <stdio.h>
int main ()
{
 int n,a;
 scanf("%d",&n);
 int p[n];
 int k[n];
 int r[n];
 for (int i=0; i<n; i++)
 {
  scanf("%d",&p[i]);
 }
 for (int i=0; i<n; i++)
 {
  scanf("%d",&k[i]);
 }
  for (int i=0; i<n; i++)
 {
   r[i]=p[i]+k[i];
 }
 for (int i=0; i<n; i++)
 {
  printf("%d",r[i]);
 }
 return 0;
}
