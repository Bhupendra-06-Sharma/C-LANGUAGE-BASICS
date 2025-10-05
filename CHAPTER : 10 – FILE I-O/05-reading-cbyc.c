#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("raj.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        if (ch == EOF)
        {
            break;
        }
    }

    return 0;
}