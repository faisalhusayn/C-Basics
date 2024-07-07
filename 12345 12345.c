//Display the series: 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 ....... (n times) [using nesting of loops]

#include<stdio.h>

int main()
{
	int i,j,n;
	printf("Enter n: ");
	scanf("%d", &n);
	
	for(j=1;j<=n;j++) //external loop runs n times
	{
	
		for(i=1; i<=5; i++) // internal loop runs 5 times
		{
		
		printf("%d ", i);
		
		}
		
	}
	return 0;
}
	