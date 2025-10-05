/*6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.*/

#include<stdio.h>

int sum(int a); // Function prototype

// Function Defination
int sum(int a){

    return (a*(a+1))/2;
      
}

int main(){
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("The sum of the first %d number is: %d",a,sum(a));

    return 0;
}