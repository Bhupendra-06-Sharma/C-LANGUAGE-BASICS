/*5. Write a program with a structure representing a complex number. */

#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
} complex;

int main()
{
    complex c = {1, 3};
    printf("The value of complex number is %d + %di", c.real, c.imaginary);
    return 0;
}