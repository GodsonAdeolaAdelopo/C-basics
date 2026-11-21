#include <stdio.h>
//DAY 8: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;

int add(int x,int y) {
    return x + y;
}
int main() {
    int x,y;

    printf("PROGRAM TO ADD TO NUMBERS WITH FUNCTION\n");
    printf("Enter First Number: ");
    scanf("%d", &x);
    printf("Enter Second Number: ");
    scanf("%d", &y);

    int result = add(x,y);

    printf("The result is = %d", result);

    return 0;
}