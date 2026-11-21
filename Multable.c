#include <stdio.h>
//DAY 11A: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;
int main () {
    printf("MULTIPLICATION TABLE\n");

    for(int i=1; i<=12; i++) {
        for(int j=1; j<=12; j++) {
            printf("%3d ", i*j);
        }
        printf("\n");
    }

    return 0;
}