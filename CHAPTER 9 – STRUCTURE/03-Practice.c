/*4. Write a program to illustrate the use of arrow operator → in C.*/

#include <stdio.h>

typedef struct emp
{
    int salary;
    float score;
} employee;

int main()
{
    employee e1;
    employee *ptr = &e1;
    // (*ptr).salary = 243;
    // (*ptr).score = 54.34;

    ptr->salary = 243;
    ptr->score = 54.34;
    printf("The salary is:%d and the score is:%.2f", ptr->salary, ptr->score);

    return 0;
}