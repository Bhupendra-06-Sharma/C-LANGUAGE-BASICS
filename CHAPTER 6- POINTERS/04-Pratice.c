/*4. Write a function and pass the value by reference. same as question number-3*/

#include<stdio.h>

void tentimes(int *x){
    *x = (*x)*10;
}
#include<stdio.h>

int main(){
    int i = 45;
    printf("The value of i is %d\n",i);

    tentimes(&i); // Pass address of i
    
    printf("New value after (10 times): %d\n",i);

    return 0;
}