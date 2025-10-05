#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee raj = {100, 75.3, "Bhupendra"};
    printf("%d, %f, %s", raj.code, raj.salary, raj.name);

    return 0;
}
