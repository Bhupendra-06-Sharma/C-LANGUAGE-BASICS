#include<stdio.h>

int main(){
    int marks[5]; 
    printf("Enter the marks:\n");
    /*scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);
    scanf("%d",&marks[3]);
    scanf("%d",&marks[4]);*/
    for (int i = 0; i < 5; i++)
    {
       scanf("%d",&marks[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("The value of Marks at index %d is %d\n",marks[i]);
    }

   // printf("Marks 0,Marks 1,Marks 2,Marks 3,Marks 4 is %d,%d,%d,%d,%d",marks[0],marks[1],marks[2],marks[3],marks[4]);
    return 0;
}