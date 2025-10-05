/*01. Write a program to read three integers from a file. */

#include <stdio.h>

int main()
{
    FILE *f2ptr;
    f2ptr = fopen("bhupendra.txt", "r");
    int num;

    fscanf(f2ptr, "%d", &num);
    printf("The value of num is: %d\n", num);

    fscanf(f2ptr, "%d", &num);
    printf("The value of num is: %d\n", num);

    fscanf(f2ptr, "%d", &num);
    printf("The value of num is: %d\n", num);

    fclose(f2ptr);

    return 0;
}