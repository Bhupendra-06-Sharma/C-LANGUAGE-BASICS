/* 2. Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user.*/

#include<stdio.h>

int main(){
    float m,e,s;
    float total,persentage;

        printf("Entre your Maths marks out of 50:");
        scanf("%f",&m);
        printf("Entre your English marks out of 50:");
        scanf("%f",&e);
        printf("Entre your Science marks out of 50:");
        scanf("%f",&s);
    total = m+e+s;
    persentage = (total/150)*100 ;
    if (persentage>=40)
    {
        printf("Congratulations! You are pass");
        printf(" and you got persentage :%f",persentage);
    }
    else
    {
        printf("Sorry! You are fail batter luck next time");
        printf(" and you got persentage: %f",persentage);
    }
       
    return 0;
}