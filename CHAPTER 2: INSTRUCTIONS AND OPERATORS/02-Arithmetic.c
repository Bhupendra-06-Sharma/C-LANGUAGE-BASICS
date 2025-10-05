/*#include<stdio.h>

int main(){
    int a = 23;
    int b = 34;
    int c = a + b;
    printf("The value of a is: %d\nThe value of b is: %d\nAnd the sum of both the values is %d",a,b,c); 
    
    // The modulus operator is used to get the remainder.
    // This dose not work for exponentiation in C language.
    //int d = a^b, this is invalid in C language.

    printf("\nThe remainder when a is divided by b is: %d", a%b); 
    return 0;
}*/

#include<stdio.h>

int main(){
    int a,b;

    printf("Enter the value of a: "); 
    scanf("%d", &a); 

    printf("Enter the value of b: "); 
    scanf("%d", &b);

    printf("The sum of both the values is: %d",(a + b)); 
    printf("\nThe remainder when a is divided by b: %d", a%b);
    return 0;
}