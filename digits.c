// this program displays the lenght of a string

#include<stdio.h>

int main()
{
	char arr[100];
	int i=0;
	printf("Enter your name: ");
	scanf("%s", &arr);
	
	while(arr[i]!='\0'){
	    //printf("%c", arr[i]);
		i++;
	}
	printf("%d", i);
	
return 0;
}
