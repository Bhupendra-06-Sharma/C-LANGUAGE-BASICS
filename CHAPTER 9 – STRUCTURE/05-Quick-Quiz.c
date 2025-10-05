#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
}; // Semicolon is important

void show(struct employee e); // function prototype

void show(struct employee e)
{
    printf("Code is %d\nSalary is %.2f\nName is %s\n", e.code, e.salary, e.name);
}

int main()
{
    struct employee e1;
    e1.code = 745;
    strcpy(e1.name, "Bhupendra");
    e1.salary = 39485;
    show(e1);

    return 0;
}