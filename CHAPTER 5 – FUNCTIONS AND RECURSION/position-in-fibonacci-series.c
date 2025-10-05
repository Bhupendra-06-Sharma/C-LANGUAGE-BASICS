#include<stdio.h>

int Fibonacci_series(int n);


int Fibonacci_series(int n){
    if (n==0){
    return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    return Fibonacci_series(n-1) + Fibonacci_series(n-2);
    
}

int main(){
    int n;
    printf("Enter the position (n) to find the nth Fibonacci number:");
    scanf("%d",&n);

    printf("Fibonacci number at position %d is: %d\n",n,Fibonacci_series(n));
    
    return 0;
}