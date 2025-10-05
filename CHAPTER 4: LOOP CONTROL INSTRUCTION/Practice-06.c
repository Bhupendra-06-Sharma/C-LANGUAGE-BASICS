/*6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

#include<stdio.h>

int main(){
    int n = 1;
    int sum;
   
    for (n = 1; n<=10; n++)
    {
       sum = sum + n;
    }
      printf("The sum of first n natural number is: %d",sum);
    
    return 0;
}*/
#include<stdio.h>

int main(){
  int i = 0;
  int sum;
  do
  {
    sum = sum + i;
    i++;
  } while (i<=10);
  printf("The sum of first ten natural numbers is: %d",sum);
  
  return 0;
}