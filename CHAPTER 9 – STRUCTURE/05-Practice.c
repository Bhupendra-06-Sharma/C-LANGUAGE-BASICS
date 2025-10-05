/*6. Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user*/

#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
} complex;
void display(complex c)
{
    printf("The value of complex number is %d + %di\n", c.real, c.imaginary);
}

int main()
{
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("The real part:");
        scanf("%d", &carr[i].real);

        printf("The imaginary part:");
        scanf("%d", &carr[i].imaginary);

        display(carr[i]);
    }

    return 0;
}