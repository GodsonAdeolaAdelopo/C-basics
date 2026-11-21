#include <stdio.h>
#include <math.h>
//DAY 3: LEARNING C FOR EMBEDDED SYSTEMS ENGINEERING;


int main() {
    // a =p * (pow((1+(r /n)),(n * t))) 
    // t = a + (pa * ((pow((1+(r /n)),(n * t))-1)/(r/n)))

    double p;
    double pa;
    double r;
    int t;
    int n;
    double a;
    double ta;

    printf("COMPOUND INTEREST CALCULATOR\n");

    printf("Enter principal: ");
    scanf("%lf", &p);

    printf("Enter principal added monthly: ");
    scanf("%lf", &pa);

    printf("Enter the rate (%): ");
    scanf("%lf", &r);
    r = r / 100;

    printf("Enter the Time(Years): ");
    scanf("%d", &t);

    printf("Enter the number of times compounded in a year %: ");
    scanf("%d", &n);
    
    a = p * (pow((1+(r /n)),(n * t)));
    ta = a + (pa * ((pow((1+(r /n)),(n * t))-1)/(r/n)));

    printf("The total amount compounded for %dyears is %.2lf", t, ta);

    return 0;
}