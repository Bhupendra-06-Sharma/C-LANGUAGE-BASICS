/*04. Take name and salary of two employees as input from the user and write them to 
      a text file in the following format: 
      i. Name1, 3300 
      ii. Name2, 7700 */

#include<stdio.h>

int main(){

    FILE *femployee;
    femployee = fopen("employee.txt","w");

    char name[10];
    float salary;

    printf("enter your name:");
    scanf("%s",&name);

    printf("enter your salary:");
    scanf("%f",&salary);
    
    fprintf(femployee,"Your name is:%s\n",name);
    fprintf(femployee,"Your salary is:%f\n",salary);

    fclose(femployee);
    return 0;
}