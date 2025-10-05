/*4.Write a program to find whether a year entered by the user is a leap year or not. 
Take year as an input from the user.*/ 

#include<stdio.h>

int main(){
    int year;
    int a;
    printf("Enter the year: ");
    scanf("%d",&year);
    a = (year%4==0 && year%100!=0 || year%400==0);
if(a)
{
    printf("The year you enter is a leap year: %d",year);
}
else{
    printf("The year you enter is not a leap year: %d",year);
}
    return 0;
}