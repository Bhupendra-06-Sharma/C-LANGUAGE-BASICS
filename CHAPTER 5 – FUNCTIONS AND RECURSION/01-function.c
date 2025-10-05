#include<stdio.h>

int sum(int,int); //Function prototype

// Function definition
int sum (int x,int y){
   // printf("The sum is %d\n",x+y);
    return x+y;
}
int main(){
    int a = 1;
    int b = 4;
    //int c = a + b;
    //printf("The sum of a and b is: %d,\n",c);
    int c = sum(a,b); // function call
    printf("%d\n",c);

    int a1 = 55;
    int b1 = 63;
    //int c1 = a1 + b1; 
    //printf("The sum of a and b is: %d,\n",c1);
    int c1 = sum(a1,b1); // function call
    printf("%d\n",c1);


    int a2 = 56;
    int b2 = 654;
    //int c2 = a2 + b2; 
    //printf("The sum of a and b is: %d,\n",c2);
    int c2 = sum(a2,b2); // function call
    printf("%d\n",c2);


    return 0;
}