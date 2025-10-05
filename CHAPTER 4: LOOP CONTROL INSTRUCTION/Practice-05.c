/* 5. Write a program to sum first ten natural numbers using while loop. */
#include<stdio.h>

int main(){
    int  n = 1;
    int sum = 0;
    while (n<=10)
    {
        sum = sum + n; // as same as sum+=n
        n++;
    }
    printf("The sum of first n natural number is: %d",sum);
    
    return 0;
}