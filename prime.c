#include <stdio.h>
#include<math.h>

int main()
{
    int n, i;
    int flag = 1; 
    printf("Enter the number: ");
    scanf("%d", &n);

    
    if (n <= 1) {
        printf("Not Prime");
        return 0;
    }
    

    for(i = 2; i < sqrt(n); i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag == 1) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
