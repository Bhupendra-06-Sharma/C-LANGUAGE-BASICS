// Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1

#include<stdio.h>

int main(){
    int x,y,z,k;
    x = 2;
    y = 3;
    z = 3;
    k = 1;
    printf("The value of this (3*x/y - z+k) is: %d",3*x/y - z+k);

    // 3*2/3 – 3+1
    // 6/3 - 3+1
    // 2 - 3+1
    // -1+1
    // 0
    return 0;
}