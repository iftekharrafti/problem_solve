// Write a C program to input base and height of a triangle and find area of the given triangle. How to find area of a triangle in C programming. Logic to find area of a triangle in C program.

#include <stdio.h>

int main(){
    int base, height, area;
    printf("Enter base of the triangle: ");
    scanf("%d",&base);

    printf("Enter height of the triangle: ");
    scanf("%d",&height);

    area = 0.5 * base * height;
    printf("The area of the triangle = %d", area);
    return 0;
}