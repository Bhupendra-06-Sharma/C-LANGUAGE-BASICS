/*5. Write a program to find greatest of four numbers entered by the user.*/

#include<stdio.h>

int main(){
    int a,b,c,d;

    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf("Enter number c: ");
    scanf("%d", &c);
    printf("Enter number d: ");
    scanf("%d", &d);
    if (a>=b && a>=c && a>=d ){
        printf("The greatest number is: %d",a);
    }
    
    else if (b>=a && b>=c && b>=d){
        printf("The greatest number is: %d",b);
    }
    else if (c>=a && c>=b && c>=d){
        printf("The greatest number is: %d",c);
    }
    else if (d>=a && d>=b && d>=c){
        printf("The greatest number is: %d",d);
    }

    return 0;
}