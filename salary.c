// Write a C program that accepts an employee's total worked hours of a month and the amount he received per hour. Print salary (with two decimal places) of a particular month.

#include <stdio.h>

int main(){
    int hours, amount;
    double salary;
    printf("Working hours: ");
    scanf("%d",&hours);

    printf("Amount/hr: ");
    scanf("%d", &amount);

    salary = hours * amount;
    printf("Salary = %.2lf\n", salary);
    return 0;
}