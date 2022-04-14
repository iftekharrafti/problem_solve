// Write a C program to input principle, time and rate (P, T, R) from the user and find Simple Interest and principal plus interest.

// formula: simple interest(SI) = (P*T*R) / 100;
// formula: Principal Interest = principal + simple interest;
#include<stdio.h>

int main(){
    double p, t, r, si, pi;
    printf("Enter principle: ");
    scanf("%lf", &p);

    printf("Enter time: ");
    scanf("%lf", &t);

    printf("Enter rate: ");
    scanf("%lf", &r);

    si = (p*t*r)/ 100;
    pi = p + si;
    printf("Simple Interest = %lf\n", si);
    printf("Principal Interest = %lf", pi);
    return 0;
}