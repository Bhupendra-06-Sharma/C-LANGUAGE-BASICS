#include<stdio.h>

int main(){
    //float a = 7 ;
    // int b = 3 ;
    //float c = a/b ;

    float a ;
    int b ;
    int c = 6.7; //For int c = 6.7 ;, the float 3.5 is 
                 //demoted to 6, losing the fractional part because c is an integer.

    printf("Enter the value of a : ");
    scanf("%f",&a);

    printf("Enter the value of b : ");
    scanf("%d",&b);

    printf("The value of a divide by b is %f",a/b);
    printf("\nThe value of c is %d",c);

    return 0;
}