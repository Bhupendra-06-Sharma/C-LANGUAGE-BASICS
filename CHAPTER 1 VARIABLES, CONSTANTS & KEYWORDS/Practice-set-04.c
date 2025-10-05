#include <stdio.h>

int main()
{

    float celsius, fahrenheit;
    // celsius = 52;
    // fahrenheit = (celsius*9/5) +32 ;
    // fahrenheit = (celsius*1.8) +32 ;

    printf("Enter the tempertue in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("The value in fahrenheit is %f", fahrenheit);
    return 0;
}