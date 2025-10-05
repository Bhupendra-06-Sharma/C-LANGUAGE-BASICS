// 01-TYPE DECLARATION INSTRUCTIONS

#include<stdio.h>

int main(){
    int i = 13; // Declare and initialize 'i' with 13 
    int j = i;  // Declare 'j' and initialize with 'i
    int a = 2,b = 4,c = 6,d = 8; // Declare and initialize multiple variables

     // We us %d for int, %f for float and %c is for char.

    printf("The value of i is: %d \nThe value of j is: %d \n",i,j );
    printf("The value of a is: %d \nThe value of b is: %d \n",a,b );
    printf("The value of c is: %d \nThe value of d is: %d \n",c,d );
    
    return 0;
}