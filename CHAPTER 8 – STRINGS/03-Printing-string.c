#include<stdio.h>

int main(){
    //char st[] = {'a','b','c','\0'}; // Here (\0) is used as a null character to terminate the string
    char st[] = "abc"; // is same as //char st[] = {'a','b','c','\0'};

    // for (char i = 0; i < 3; i++)
    // {
    //     printf("The character is %c \n",st[i]);
    // }
    
    printf("%s",st);
    return 0;
}
