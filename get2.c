#include <stdio.h>
int main()
{
char c;
  c= getchar();
  while(c!='\n')
  /* take single quote to n karn double dil tr ascii value ghete */
  {
  putchar(c);
  printf("\n");
  c= getchar();
  }
 }
