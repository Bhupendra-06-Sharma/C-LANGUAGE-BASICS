#include<stdio.h>

int main(){
    //char st[] = {'a','b','c','\0'}; // Here (\0) is used as a null character to terminate the string
    char st[] = "abc"; /* Is same as //char st[] = {'a','b','c','\0'}; but here (/0) is not use because
                          in double cot("") null character is already present*/

    for (char i = 0; i < 3; i++)
    {
        printf("The character is %c \n",st[i]);
    }
    
    return 0;
}
