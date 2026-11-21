#include <stdio.h>
//DAY 12: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;
int main() {
    int sensorReading[5];
    int sum = 0;
    int average;

    printf("PROGRAM TO FIND THE AVERAGE SENSOR READING\n");
    printf("Enter the Sensor reading of temperature for five days:\n");

    for(int i = 0; i<5; i++) {
        printf("Sensor Reading for Day %d: ", i + 1);
        scanf("%d", &sensorReading[i]);
        sum = sum + sensorReading[i]; 
    }

    average = sum / 5;
    printf("The sum of the sensor reading for five days is %d\n", sum);
    printf("The average number for the reading of the five days is %d", average);

    return 0;
}