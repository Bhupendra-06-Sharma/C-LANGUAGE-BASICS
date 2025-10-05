/*02. Write a program to generate multiplication table of a given number in text 
format. Make sure that the file is readable and well formatted. */
#include <stdio.h>

int main()
{
    FILE *f3ptr;
    f3ptr = fopen("bhupendra.txt", "w");
    
    if (f3ptr == NULL)
    {
        printf("Error opening file\n");
    }

    int num = 5;

    for (int i = 1; i <= 10; i++)
    {
        fprintf(f3ptr, "%d x %d = %d\n", num, i, num * i);
    }
    fclose(f3ptr);
    printf("Multiplication table written to bhupendra.txt successfully done\nYou can check it.\n");
    return 0;
}