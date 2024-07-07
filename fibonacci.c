// fibonacci series (20 terms).
#include<stdio.h>

int main()
{
	int i, a=0, b=1,n;
	
	for(i=1;i<=20;i++)
	{
		printf("%d ", a);
		n = a+b;
		a = b;
		b = n;
	}
	return 0;
}