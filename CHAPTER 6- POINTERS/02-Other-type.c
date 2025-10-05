#include<stdio.h>

int main(){
    char i = 'A' ;
    char* j = &i; // j is a pointer pointing to i

    float k = 5.34;
    float* k1 = &k;

    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The address of i is %p\n",&k);

    printf("The value of i is %d\n",*j);
    
    return 0;
}