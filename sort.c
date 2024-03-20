#include <stdio.h>
int main ()
{
 int n;
 scanf("%d",&n);
 int p[n];
 int tem[n];
 for (int i=0; i<n; i++)
 {
  scanf("%d",&p[i]);
 }
 for (int i=0; i<n; i++)
   {
     for(int j=i+1; j<n; j++)
     {
      if(p[i]>p[j])
       {
        tem[i]=p[i];
        p[i]=p[j];
        p[j]=tem[i];
       }
       else
       { 
        p[i]=p[i];
        p[j]=p[j];
       }
     }
   }
 for (int i=0; i<n; i++)
 {
  	printf("%d",p[i]);
 }
 
  return 0;
}
