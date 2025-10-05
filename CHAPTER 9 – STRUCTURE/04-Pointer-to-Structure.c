#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
}; // Semicolon is important

int main()
{
    struct employee e1;
    e1.code = 234;
    struct employee *ptr;
    ptr = &e1;
    // printf("%d", (*ptr).code);
    printf("%d", ptr->code); // Is same as printf("%d", (*ptr).code); and it is called arrow operator

    return 0;
}