#include <stdio.h>
//DAY 4: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;

int main() {
    double num1, num2;
    char op;

    printf("Enter First Number: ");
    scanf("%lf", &num1);
    printf("Enter an operator(+-*/): ");
    scanf(" %c", &op);
    printf("Enter Second Number: ");
    scanf("%lf", &num2);

    switch(op) {
        case '+':
        printf("Result = %lf", num1 + num2);
        break;

        case '-':
        printf("Result = %lf", num1 - num2);
        break;

        case '*':
        printf("Result = %lf", num1 * num2);
        break;

        case '/':
        printf("Result = %lf", num1 / num2);
        break;
    }
    return 0;
}