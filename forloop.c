#include <stdio.h>
#include <windows.h>
//DAY 7: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;


int main() {
    int i = 1;

    while(i <=50) {
        Sleep(500);
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}