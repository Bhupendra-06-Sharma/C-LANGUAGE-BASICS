// https://www.ascii-code.com/
#include<stdio.h>

int main(){
    char ch = 'Z';
    printf("The character is %c\n",ch);
    printf("The value of character is %d\n",ch);
if(ch>=97 && ch<=122){
    printf("And this character is lowercase");
}
else{
    printf("And this character is not a lowercase");
}

    return 0;
}