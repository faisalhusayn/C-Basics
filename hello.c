// this program check for prime numbers

#include<stdio.h>

int main()
{
    int n, i;
    int flag = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=2;i<n;i++){
        if(n % i == 0){
            flag = 0;
           
            break; 
        }
        }
        if(flag == 1){
            printf("Prime");
        }
        else{
            printf("not Prime");
          
        }
    
    return 0;
}