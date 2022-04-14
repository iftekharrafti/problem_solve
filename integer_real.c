// Write a C program that takes a positive float number and outputs its integer part and real part.
#include <stdio.h>

int main(){
    float num;

    printf("Enter Number: ");
    scanf("%f",&num);

    printf("Integer part: %d\n", (int)num);
    printf("Real part: %f\n", num - (int)num);
    return 0;
}