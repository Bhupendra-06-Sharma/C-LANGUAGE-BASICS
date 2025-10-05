#include<stdio.h>

int main(){
    for ( int i = 0; i < 15; i++)
    {
        if (i==5){
            // break; // exit the now! (‘break’ statement completely exits the loop.)
            continue; // skip this iteration now (‘continue’ statement skips the particular iteration of the loop.)
        }
        
        printf("I is: %d\n",i);
    }
    printf("For loop is done");

    return 0;
}