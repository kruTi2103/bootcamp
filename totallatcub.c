/* total 2lw+2lh+2hw.lateral 2(length + breadth) × height.*/
#include <stdio.h>
int main ()
{
 int k,p,t,A,B;
 printf("Enter length height breadth\n");
 scanf("%d\n%d\n%d",&k,&p,&t);
 A=(k*t+k*p+p*t)*2;
 B=(k+t)*2*p;
 printf("%d\n%d",A,B);
 return 0;
 }
 
