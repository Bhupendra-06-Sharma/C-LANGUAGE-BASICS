#include<stdio.h>
int sum(int *a, int *b);

// Sum should change the value of a
int sum(int *a, int *b){
    *a = 5;
    return *a + *b;
}
int main(){
    int a = 1;
    int b = 45;
    printf("The sum of a and b is: %d\n",sum(&a,&b));
    printf("The value of a is: %d\n",a);
    return 0;
}