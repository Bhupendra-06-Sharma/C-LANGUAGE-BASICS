/*5. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to
make it store 15 number (from 7 x 1 to 7 x 15).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }

    printf("The multiplication of 7 upto 10\n");
    for (int i = 0; i < n; i++)
    {
        printf("7 X %d = %d \n", i + 1, ptr[i]);
    }

    printf("The multiplication of 7 upto 15\n");

    n = 15;
    ptr = (int *)realloc(ptr, 15 * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }

    for (int i = 1; i < n; i++)
    {
        printf("7 X %d = %d \n", i + 1, ptr[i]);
    }

    free(ptr);
    
    return 0;
}