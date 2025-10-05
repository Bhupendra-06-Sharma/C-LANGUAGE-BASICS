#include <stdio.h>

int main()
{
    float diameter;
    // diameter = 35 ;

    printf("Enter the diameter of a circle: ");
    scanf("%f", &diameter);

    printf("The radius of the circle is %f", diameter / 2);

    return 0;
}