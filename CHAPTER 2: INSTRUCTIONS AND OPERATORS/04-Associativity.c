#include<stdio.h>

int main(){
    int a = 4 ;
    int b = 6 ;
    int c = 8 ;

    printf("The value of (a*b/c) is : %d",a*b/c);
    printf("\nThe value of (4*a/3*b + 8*c) is : %d",4*a/3*b + 8*c);
    // 4*a/3*b + 8*c
    // 4*a/3*b + 64
    // 16/3*b + 64  
    // 5*b + 64
    // 30 + 64
    // 94
    return 0;
}