#include <stdio.h>
//DAY 6: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;

int main() {
    int password;

    printf("Enter password: ");
    scanf("%d", &password);

    while(password!=1029) {
        printf("\nWrong password\n");
        printf("Enter password:");
        scanf("%d", &password);
    }
    printf("Correct!");
    return 0;
}