#include <stdio.h>
int func(int num)
{
	int count = 2;
	while (num)
	{
		count ++;
		num >>=2;//bitwise operator
	}
	return (count);
}
int main ()
{
	int count = func(435);
	func (435);
	printf("%d",count);
	return 0;
}

