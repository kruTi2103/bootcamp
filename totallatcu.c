#include <stdio.h>
int main ()
/*2 × (lb + bh + hl) lateral
6a2 total formula*/
{ 
 int k,p,t,lat,total;
 printf("Enter the Length Breadth Height\n");
 scanf("%d\n%d\n%d",&k,&p,&t);
 lat=(k*p+p*t+t*k)*2;
 total=6*k*k;
 printf("%d\n%d\n",lat,total);
 return 0;
 }
 
 
