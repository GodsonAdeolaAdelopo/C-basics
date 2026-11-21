#include <stdio.h>
#include <windows.h>
//DAY 5: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;

int main() {
    int i,num,result;

    printf("MULTIPLICATION TABLE\n");

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1; i<=12; i++) {
        result = num * i;
        Sleep(1000);
        printf(" %d * %d = %d\n", num,i,result);
    }

    return 0;

}