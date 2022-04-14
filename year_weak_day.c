// Write a C program to input number of days from user and convert it to years, weeks and days. How to convert days to years, weeks in C programming. Logic to convert days to years, weeks and days in C program.

#include <stdio.h>

int main(){
    int days, year, week, day;
    printf("Enter days: ");
    scanf("%d",&days);

    year = days / 365;
    week = (days - (year * 365)) / 7;
    day = (days - (year * 365)) % 7;

    printf("Output = %d days = %d year/s, %d week/s and %d day/s", days, year, week, day);
    return 0;
}