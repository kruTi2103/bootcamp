/*#include <stdio.h>
int main()
{
 int i,n,c=0;
 scanf("%d",&n);
 for (i=0;i<=n;i=i+1)
  {
  printf("%d\n",i);
  c++;
  }
  printf("\n");
  printf("%d\n",c);
  return 0;
}*/
 #include <stdio.h>
int main()
{
 int i,n,sum=0;
 scanf("%d",&n);
 printf("\n");
 for (i=0;i<=n;i=i+1)
  {
  printf("%d\n",i);
  sum=sum+i;
  }
  printf("\n");
  printf("%d\n",sum);
  return 0;
}
