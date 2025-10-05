#include<stdio.h>

int main(){
    // POINTER ARITHMETIC USING INTEGER POINTER
    // int a = 5;
    // int *ptr = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The address of a is %u\n", ptr);
    // ptr++; // ptr++ se value is increment by 4 because int datatype take 4 bytes in c language
    // printf("The value of ptr is %u\n", ptr);

    // POINTER ARITHMETIC USING CHARACTER POINTER
    char a = 'A';
    char *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++; // ptr++ se value is increment by 1 because char datatype take 1 byte in c language
    printf("The value of ptr is %u\n", ptr);
    return 0;
}