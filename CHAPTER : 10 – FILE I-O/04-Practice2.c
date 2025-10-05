/*04. Take name and salary of two employees as input from the user and write them to
      a text file in the following format:
      i. Name1, 3300
      ii. Name2, 7700 */

#include <stdio.h>

struct employee
{
    float salary;
    char name[10];
};

int main()
{

    FILE *femployee;
    femployee = fopen("employee.txt", "w");

    struct employee e1, e2;

    // Entries for first employee
    printf("Enter your name1:");
    scanf("%s", &e1.name);

    printf("Enter you salary1:");
    scanf("%f", &e1.salary);

    fprintf(femployee, "01.Name and salary of first employee\n");
    fprintf(femployee, "Your name is:%s\n", e1.name);
    fprintf(femployee, "and your salary is:%.2f\n", e1.salary);

    // Entries for second employee
    printf("Enter your name2:");
    scanf("%s", &e2.name);

    printf("Enter you salary2:");
    scanf("%f", &e2.salary);

    fprintf(femployee, "02.Name and salary of second employee\n");
    fprintf(femployee, "Your name is:%s\n", e2.name);
    fprintf(femployee, "and your salary is:%.2f\n", e2.salary);

    fclose(femployee);
    return 0;
}
