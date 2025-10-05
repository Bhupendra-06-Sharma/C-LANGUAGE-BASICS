/* 1. Write a program to print the address of a variable. Use this address to get the 
value of the variable. */

#include<stdio.h>

int main(){
    int a = 34;     // Variable 'a' declared and initialized
    int *j = &a;    // Pointer 'j' stores the address of 'a'
    int k = *(&a);  // 'k' stores the value at the address of 'a'

    printf("The address of a is %p\n",j);
    
    printf("The value of a is %d\n",k);


    return 0;
}