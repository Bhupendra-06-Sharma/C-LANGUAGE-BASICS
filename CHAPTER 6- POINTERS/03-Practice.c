/*3. Write a program to change the value of a variable to ten times of its current 
  value. */

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