#include <stdio.h>
#include <math.h> // For pow() function

int main() {
    double a, area;

    printf("Enter the side of the square: ");
    scanf("%lf", &a);

    area = pow(a, 2);  // area = a^2

    printf("Area of the square is: %.2lf\n", area);

    return 0;
}
