#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("raj.txt", "r");
    char c = fgetc(ptr); // Used to read a character from file
    printf("%c",c);

    // ptr = fopen("raj.txt", "a");
    // fputc('c', ptr);

    return 0;
}