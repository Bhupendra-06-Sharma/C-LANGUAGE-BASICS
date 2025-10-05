#include<stdio.h>

int main(){
    int age = 20;
    if(age>10){
        printf("We are inside the if\n");
        printf("Your age is greater the 10\n");
    }
    if(age%20==0){
        printf("We are inside another if\n");
        printf("Your age is divisible by 20\n");
    }
    return 0;
}