#include<stdio.h>

int main()
{
	int i,n,prod=1;
	int hehe;
	printf("Enter n: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		
		prod = prod*i;
		
	}
	printf("%d", prod);
	
	return 0;
}