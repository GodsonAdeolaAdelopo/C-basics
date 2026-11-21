#include <stdio.h>
#include <windows.h>
//DAY 11B: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;

int main (){
    int mark[5];

    printf("Enter five numbers: " );
    for(int i=0; i<5; i++) {
        scanf("%d ", &mark[i]);
    }

    printf("You have entered five numbers: ");
    for(int i=0; i<5; i++) {
        Sleep(200);
        printf("%d\n ", mark[i]);
    }

    return 0;
}