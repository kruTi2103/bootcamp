#include <stdio.h>
int main()
{
int b; char c;
b=0;
c=getchar();
  while(c!=EOF)
  /*or while(c=getchar())!=EOF) as pn lihu shkto khalchi 11 vi line pn kadha lagte*/
  {
  b=b+1;
  c= getchar();
  }
  printf("\n%d\n",b);
 }
