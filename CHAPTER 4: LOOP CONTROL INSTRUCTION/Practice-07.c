/*7. Write a program to calculate the sum of the numbers occurring in the 
multiplication table of 8. (consider 8 x 1 to 8 x 10). */

#include<stdio.h>

int main(){
    int n = 8;
    int sum = 0;
    for ( int i =1 ; i<=10; i++)
    {
       printf("%d x %d = %d\n",n,i,n*i);
        sum += (n*i);
    }
    printf("The sum of multiplication of 8 is: %d",sum);

    return 0;

}
    