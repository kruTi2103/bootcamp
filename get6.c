#include <stdio.h>
int main()
{
int b; char c;
b=0;
c=getchar();
  while(c!=EOF)
  {
  if (c=='\n')
  {
  b=b+1;
  }
  }
  printf("%d",b);
 }
