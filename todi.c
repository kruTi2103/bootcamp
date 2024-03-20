#include <stdio.h>
int main()
{
 int i,n,p;
 int c=0;
 scanf("%d",&n);
 printf("Number: %d",n);
 printf("\n");
 /*for(i=n; i>0; i--)// both are rightdd
 {
  p=i%10;
  printf("%d",p);
  c=c+1;
  i=i/10;
 }*/
 while(n>0)
 {
 	int a=n%10;
 	printf("%d ",a);
 	c++;
 	n=n/10;
 }
 printf("Length:%d\n",c);
 return 0;
}

