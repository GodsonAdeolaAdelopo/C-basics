#include <stdio.h>
//DAY 8: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;

int max(int x, int y) {
    if(x > y){
        return x;
    }
    else {
        return y;
    }
}

int main() {
    int x,y;

    printf("PROGRAM TO CHECK FOR MAXIMUM NUMBER USING FUNCTION\n");

    printf("Enter two numbers: ");
    scanf("%d %d.", &x, &y);

    int biggest = max(x,y);
    printf("The biggest number is %d.", biggest);

    return 0;
}
