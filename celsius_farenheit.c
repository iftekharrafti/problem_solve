// Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.

#include <stdio.h>

int main(){
    double fah, cel;

    printf("Temperature in fahrenheit = ");
    scanf("%lf", &fah);

    cel = (5 * (fah - 32)) / 9;
    printf("Temperature in celsius = %.2lf C\n", cel);
    return 0;
}