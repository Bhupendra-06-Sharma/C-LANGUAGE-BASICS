#include<stdio.h>
int sum(int a, int b);

int sum(int a, int b){
    a = 5; // Sum function cannot change a using a because of a is provided to sum in a
    return a + b;
}
int main(){
    int a = 1;
    int b = 45;
    printf("The sum of a and b is: %d",sum(a,b));
    return 0;
}