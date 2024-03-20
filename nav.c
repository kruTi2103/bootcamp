#include <stdio.h>
int main ()
{	
	int n,j=0,h=0;
	scanf("%d",&n);
	int p[n],k[n],r[n],m[n];
	for (int i=0; i<n; i++)
	{
		scanf("%d",&p[i]); 
		if(p[i]>0)
		{
			k[j] = p[i];
			j++;
		}
		else
		{
			r[h] = p[i];
			h++;
		}
	}
	int c=0;
	for (int i=0; i<n; i=i+2)
	{
		m[i] = k[c];
		c++;	
	}
	int f = 0;
	for (int i=1; i<n; i=i+2)
	{
		m[i] = r[f];
		f++;	
	}
	for (int i=0; i<n/2; i++)
	{
		printf("%d ",k[i]);	
	}
	printf("\n");
	for (int i=0; i<n/2; i++)
	{
		printf("%d ",r[i]);	
	}
	printf("\n");
	for (int i=0; i<n; i++)
	{
		printf("%d ",m[i]);	
	}
	
	
	return 0;
}
/*
n = int(input())

p = list(map(int, input().split()))
k = []
r = []

for i in p:
    if i > 0:
        k.append(i)
    else:
        r.append(i)

m = [0] * n

c = 0
for i in range(0, n, 2):
    m[i] = k[c]
    c += 1

f = 0
for i in range(1, n, 2):
    m[i] = r[f]
    f += 1

print(*k[:n//2])
print(*r[:n//2])
print(*m)
*/
