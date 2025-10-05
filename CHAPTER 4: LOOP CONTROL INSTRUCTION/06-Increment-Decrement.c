#include<stdio.h>

int main(){
    int i = 5;
    printf("The value of i is: %d\n",i); //5

    i = i + 5;
    printf("The value of i is: %d\n",i); //10

    printf("The value of i is: %d\n",i++); //10
    printf("The value of i is: %d\n",i); //11

    i+=2; // Is same as i = i + 2;
    printf("The value of i is: %d\n",i); //13

    i-=3;
    printf("The value of i is: %d\n",i); //10

    i*=4;
    printf("The value of i is: %d\n",i); //40

    i/=2;
    printf("The value of i is: %d\n",i); //20

    // i++ prints'i' first and then increment 'i' this is called (Post increment Operator)
    // ++i increment 'i' first and then prints'i' this is called (Post increment Operator)

   
    return 0;
}