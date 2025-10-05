/*Similar as question number 8 but the change is I'm using (while loop) in the code 
instent of (for loop) or (do while) */

#include<stdio.h>

int main(){
    int product = 1;
    int n = 5;
    int i  = 1;
    while (i<=n)
    {
        product*=i;
        i++;
    }
    printf("The factroial of the number is: %d",product);
    return 0;
}