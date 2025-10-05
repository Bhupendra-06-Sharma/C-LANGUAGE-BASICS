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
    e1.code = 2345;

    strcpy(e1.name, "Bhupendra");
    e1.salary = 20033.3442;

    printf("%d,%.2f,%s", e1.code, e1.salary, e1.name);

    return 0;
}