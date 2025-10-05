/* 2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
   a function and print its address. Are these addresses same? Why? */

    int address(int *i);

    int address(int *i){
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n", *i);    
    return 5;
}

#include<stdio.h>

int main(){
    int a = 32;
    int *i = &a;
    printf("The address of a is %u\n",&a);
    address(i);

    return 0;
}