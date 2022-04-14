// Write a C program to input temperature in Centigrade and convert to Fahrenheit. How to convert temperature from degree centigrade to degree Fahrenheit in C programming. Logic to convert temperature from Celsius to Fahrenheit in C.
#include <stdio.h>

int main(){
    double cel, fah;
    printf("Enter temperature in Celsius = ");
    scanf("%lf", &cel);

    fah = ((9 * cel) + 160) / 5;
    printf("Temperature in Fahrenheit = %.2lf F\n", fah);
    return 0;
}