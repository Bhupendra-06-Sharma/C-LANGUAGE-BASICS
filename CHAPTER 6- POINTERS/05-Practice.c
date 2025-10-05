#include<stdio.h>

// Function to calculate sum and average using pointers

void calculate(int a,int b, int *sum, float *average){
*sum = a + b;
*average = (a+b)/2;
}

int main(){
    int a = 34; int b = 22;
    int sum;
    float average;
    calculate(a, b, &sum, &average);

    printf("The sum of a and b is:%d\n",sum);

    printf("The average of a and b is:%.2f\n",average);



    return 0;
}