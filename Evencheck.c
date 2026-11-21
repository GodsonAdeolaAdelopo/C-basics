#include <stdio.h>
//DAY 10: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;

int isEven(int num) {
    if(num % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main () {
    int num;

    printf("PROGRAM TO CHECK IF A NUMBER IS ODD OR EVEN\n");

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isEven(num) == 1){
        printf("%d is an Even number.", num);
    }
    else {
        printf("%d is an Odd number.", num);
    }
    return 0;
}