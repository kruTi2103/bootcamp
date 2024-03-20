 #include <stdio.h>
 int main ()
 {
  int n;
  scanf("%d",&n);
  int a;
  scanf("%d",&a);
  int arr[n];
  for (int j=0; j<n; j++)
  {
   scanf("%d",&arr[j]);
  }
  for (int i=0; i<n; i++)
  {
  	if(arr[i]==a)
  	{
  		printf("%d",a);
  	}
  }
  return 0;
 }
