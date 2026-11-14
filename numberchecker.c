#include <stdio.h>
int main() {
    int num;

    printf("Enter a number to check if it is odd or even: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("The number %d is even.", num);
    }

    else {
        printf("The number %d is odd.", num);

    }

    return 0;
 
}