#include <stdio.h>
//DAY 13: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;
int main() {
    char name[50];
    int length = 0;

    printf("Enter your firstname: ");
    scanf("%s", &name);

    while(name[length] !='\0') {
        length++;
    }
    printf("The length of your name is %d", length);
    return 0;
}