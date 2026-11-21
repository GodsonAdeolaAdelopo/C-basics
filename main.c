/* #include <stdio.h>
int main() { 
    int age = 18;
    float vat = 10.75;
    double landmass = 923768.4;
    char currency = '#';
    char country[] = "Nigeria";
    char name[] = "Godson"; 

    printf("My name is %s, I'm %d years old\n", name, age);
    printf("I am from %s, and %s landmass is %.2lfkm\n", country, country, landmass);
    printf("Bank charges is %c%.2f", currency, vat);

    return 0;
} */
 //DAY 1: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;

#include <stdio.h>
#include <string.h>
int main() {
    int age;
    char grade;
    char name[30];
    char school[50];

    printf("Enter your name: ");
    fgets( name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("Enter the name of your school: ");
    fgets(school, sizeof(school), stdin);
    school[strlen(school) - 1] = '\0';

    printf("\nYour name is %s\n", name);
    printf("Your age is %d\n", age);
    printf("Your grade is %c\n", grade);
    printf("Your school is %s\n", school);
    

    return 0;
}