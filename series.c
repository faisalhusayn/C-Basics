//Display the series: 2 4 16 256 65536 ....... (n terms).

#include<stdio.h>
#include<math.h>
int main()
{
	long long int i, n, x=2;
	printf("Enter the number of terms: ");
	
	scanf("%d", &n);
	printf("%d ", x);
	
	for(i=1; i<=n-1; i++)
	
	{
		x = pow(x,2);
		
		printf("%lld ", x);
	}

	return 0;
	
	
}