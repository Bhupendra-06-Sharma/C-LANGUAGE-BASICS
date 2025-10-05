/*4. Write a function slice() to slice a string. It should change the original string such 
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
for slice. */

#include <stdio.h>

char* slice(char str[], int a, int b)
{
    int i = 0, count;
    char *ptr1 = &str[a];
    char *ptr2 = &str[b];

    str = ptr1;
    str[b] = '\0';
    return str; 
   
}

int main()
{
    char str[] = "Bhupendra";
    printf("%s",slice(str, 1,7));

    return 0;
}