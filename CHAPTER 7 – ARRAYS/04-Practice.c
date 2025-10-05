/* 4. Repeat problem 3 for a general input provided by the user using scanf. */

#include <stdio.h>

int main()
{
    int a[10];
    int j;
    printf("Enter the number:");
    scanf("%d", &j);

    for (int i = 0; i < 10; i++)
    {
        a[i] = j * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d X %d = %d\n", j, i + 1, a[i]);
    }

    return 0;
}