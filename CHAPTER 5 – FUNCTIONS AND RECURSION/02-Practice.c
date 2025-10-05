/*2. Write a function to convert Celsius temperature into Fahrenheit. */

#include<stdio.h>

float temperture(int a); // Function prototype

// Function defination
float temperture(int a){
    return(a*(9.0/5.0) + 32);
}

int main(){
    float a = 44;
    printf("The temperture is %.2f celsius",temperture(a));    
    return 0;
}
// f = (9/5)c + 32