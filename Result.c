#include <stdio.h>
//DAY 14: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;
int findMax(int mark[], int size) {
    int max= mark[0];

    for(int i = 0; i < size; i++) {
        if (mark[i] > max){
            max = mark[i];
        }
    }
    return max;
}
int main() {
    int mark[5];
    int sum = 0;
     
    printf("Enter the score for 5 students in maths:\n");
    for(int i = 0; i<5; i++) {
        printf("Student %d: ", i +  1);
        scanf("%d", &mark[i]);
        sum = sum + mark[i];
    }
    int average= sum/5;

    printf("The class highest score is %d\n", findMax(mark,5));
    printf("The class average score is %d", average);
    
    return 0;
}