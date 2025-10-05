#include<stdio.h>

int factrorial(int);
    // Factrorial(5) = 1 X 2 X 3 X 4 X 5
    // Factrorial(4) = 1 X 2 X 3 X 4
    // Factrorial(3) = 1 X 2 X 3 
    // Factrorial(n-1) = 1 X 2 X 3 X .... X (n-1)
    // Factrorial(n) = 1 X 2 X 3 X .... X (n-1) X n


int factrorial(int n){
    if(n==1 || n== 0){  // Base condition
        return 1;
    }
    // Factrorial(n) = Factrorial(n-1) X n
    return factrorial(n-1) * n ;
}

int main(){
    int a = 3;
    printf("The Factrorial of %d is: %d",a,factrorial(a));
    
    return 0;
}