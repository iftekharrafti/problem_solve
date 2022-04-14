#include <stdio.h>

int main(){
    char name[100], birth[100], mobile[100];

    printf("Enter your name: ");
    gets(name);

    printf("Enter your Birthday: ");
    gets(birth);

    printf("Enter your mobile: ");
    scanf("%s", &mobile);

    printf("Name\t: %s\n", name);
    printf("DOB\t: %s\n", birth);
    printf("Mobile\t: %s\n", mobile);
    return 0;
}