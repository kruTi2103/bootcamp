/*#include <stdio.h>
int main ()
{
	int n, s, c=0;
	scanf("%d", &n);
	int k=n;
	while (k>0)
	{
		s=k%10;
		c++;
		k=k/10;
	}
	printf("%d\n", c);
	
	int p[c], q[c];
	k=n;
	
	for (int i = 0; i < c; i++) {
        p[i] = k % 10;
        k = k / 10;
    }

	
	for (int i=0; i<c; i++)
	{
		printf("%d", p[i]);
	}
	printf("\n");
	
	int j=c-1;
	for (int i=0; i<c; i++)
	{
		q[i]=p[j];
		j--;
	}
	
	for (int i=0; i<c; i++)
	{
		printf("%d", q[i]);
	}
	printf("\n");
		
	int count=0;
	for (int i=0; i<c; i++)
	{
		if (p[i]==q[i])
		{
			count++;
		}
	}
	
	if (count==c)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not palindrome\n");
	}

	return 0;
}*/


#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a, s=0, p=n;
	while (n>0)
	{
		a=n%10;
		s=s*10+a;
		n=n/10;
	}
	if (p==s)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not palindrome\n");
	}

	return 0;
}
		
	
