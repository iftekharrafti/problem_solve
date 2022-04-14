// Write a C program to input number of days from user and convert it to years, weeks and days. How to convert days to years, weeks in C programming. Logic to convert days to years, weeks and days in C program.

#include <stdio.h>

int main(){
    int days, year, month, day;
    printf("Enter days: ");
    scanf("%d",&days);

    year = days / 365;
    month = (days - (year * 365)) / 30;
    day = (days - (year * 365)) % 30;

    printf("Output %d days = %d year/s, %d month/s and %d day/s", days, year, month, day);
    return 0;
}