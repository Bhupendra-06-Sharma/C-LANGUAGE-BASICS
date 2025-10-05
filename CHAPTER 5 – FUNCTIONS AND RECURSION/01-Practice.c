/*1. Write a program using function to find average of three numbers.*/

#include<stdio.h>

float average(int a,int b, int c); //  Function Prototype

// Function Defination
float average(int a,int b, int c){
   // printf("The average of these three number is: %f",average(a,b,c));
    return (a + b + c)/3.0; // Note: 3.0 makes it float division 
}

int main(){
    int a = 3;
    int b = 4;
    int c = 55;
    printf("The average of these three number is: %.2f",average(a,b,c));
    
    return 0;
}