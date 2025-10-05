#include <stdio.h>

int main()
{
    float radius, height;
    float pi = 3.142857;
    // radius = 23;
    // height = 12;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    printf("The volume of a cylinder is %f", (pi * (radius * radius) * height));
    return 0;
}