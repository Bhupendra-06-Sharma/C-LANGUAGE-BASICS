/*2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
The vectors must be two–dimensional. */

#include <stdio.h>

typedef struct sumVector
{
    int i;
    int j;
} V;

V sum(struct sumVector v1, struct sumVector v2);
V sum(struct sumVector v1, struct sumVector v2)

{
    struct sumVector v3 = {v1.i + v2.i, v1.j + v1.j};
    return v3;
}

int main()
{
    struct sumVector v1 = {1, 2};
    struct sumVector v2 = {7, 5};
    struct sumVector v3 = sum(v1, v2);
    printf("The value of sum of vector v3 is: %di + %dj", v3.i, v3.j);

    return 0;
}