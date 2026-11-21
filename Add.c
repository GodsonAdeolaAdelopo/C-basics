#include <stdio.h>
//DAY 2: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;

int main () {
    int sum = 0;
    int i;

    for(i=1; i<=100; i++) {
        sum = sum + i;
          
    }
    printf("The sum of the number from 1 to 100 is %d", sum); 
    return 0;

}