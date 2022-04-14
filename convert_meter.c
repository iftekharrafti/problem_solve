// Write a C program to input length in centimeter and convert it to meter and kilometer. How to convert length from centimeter to meter and kilometer in C programming. Length conversion program in C from centimeter to meter and centimeter to kilometer.

#include <stdio.h>

int main(){
    double cm, mt, km;
    printf("Enter length in centimeter = ");
    scanf("%lf", &cm);

    mt = cm / 100;
    km = cm / (100 * 1000);
    printf("Length in meters = %.2lf m\n", mt);
    printf("Length in kilometer = %.2lf km\n", km);
    return 0;
}