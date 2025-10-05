#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[];
}; // Semicolon is important

int main()
{
    struct employee e1, e2, e3;

    // For first employee:
    printf("01.for first Employee\n");
    printf("Entre your code:");
    scanf("%d", &e1.code);

    printf("Entre your salary:");
    scanf("%f", &e1.salary);

    printf("Entre your name:");
    scanf("%s", &e1.name);

    printf("Your code is:%d\n", e1.code);
    printf("Your salary is:%f\n", e1.salary);
    printf("Your name is:%s\n", e1.name);

    // For second employee:
    printf("02.For second Employee\n");
    printf("Entre your code:");
    scanf("%d", &e2.code);

    printf("Entre your salary:");
    scanf("%f", &e2.salary);

    printf("Entre your name:");
    scanf("%s", &e2.name);

    printf("Your code is:%d\n", e2.code);
    printf("Your salary is:%f\n", e2.salary);
    printf("Your name is:%s\n", e2.name);

    // For third employee:
    printf("03.For third Employee\n");
    printf("Entre your code:");
    scanf("%d", &e3.code);

    printf("Entre your salary:");
    scanf("%f", &e3.salary);

    printf("Entre your name:");
    scanf("%s", &e3.name);

    printf("Your code is:%d\n", e3.code);
    printf("Your salary is:%f\n", e3.salary);
    printf("Your name is:%s\n", e3.name);

    return 0;
}
