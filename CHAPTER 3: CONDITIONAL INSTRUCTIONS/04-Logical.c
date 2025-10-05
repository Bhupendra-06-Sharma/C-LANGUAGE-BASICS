#include<stdio.h>

int main(){
    int a=1 ; int b=1;
    printf("The value of a and b %d\n",a&&b);
    printf("The value of a or b %d\n",a||b);
    printf("The value of not(a) is %d\n",!a);

    if (a&&b){
        printf("Both are ture");
    }
    return 0;
}