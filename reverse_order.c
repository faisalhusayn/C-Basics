//Display the digits of any natural number in reverse order

#include<stdio.h>

int main()
{

	int arr[100], n, i;
	
	printf("Enter the of elements in the array: ");
	scanf("%d", &n);
	printf("Enter the elements: ");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("The elements of the array in reverse order are: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d", arr[i]);
	}
	
	return 0;
}

