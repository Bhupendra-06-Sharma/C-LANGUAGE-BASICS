#include<stdio.h>

int main(){
   /* Quick Quiz: Write a program to find grade of a student given his marks based on below: 
        90 – 100 => A 
        80 – 90 => B 
        70 – 80 => C 
        60 – 70 => D 
        50 – 60 => E 
        <50        
        => F */
char grade ;
int marks = 95 ;
if (marks <=100 && marks <=90){
   printf("You got A grade and you are pass ");
}
else if(marks <=90 && marks <=80){
   printf("You got B grade and you are pass ");
}
else if(marks <=80 && marks <=70){
   printf("You got C grade and you are pass ");
}
else if (marks <=70 && marks <=60){
   printf("You got D grade and you are pass ");
}
else if (marks <=60 && marks <=50){
   printf("You got E grade and you are just pass ");
}
else if (marks <=50 && marks <=40){
   printf("You got F grade and you are fail ");
}        
    return 0;
}