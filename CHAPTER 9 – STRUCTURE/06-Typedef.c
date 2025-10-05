#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
}Emp; // Semicolon is important

int main()
{
    // typedef int raj;
    // raj a = 324;
    // printf("The value of a is %d",a);

    // typedef struct employee Emp;

    Emp e1;
    Emp *ptr;
    ptr = &e1;
    e1.code = 234;
    strcpy(e1.name,"Bhupendra");
    e1.salary = 51544.113;

    printf("%d, %s, %.2f\n",e1.code,e1.name,e1.salary);
    printf("%d, %s, %.2f\n",ptr->code,ptr->name,ptr->salary);
    

    return 0;
}