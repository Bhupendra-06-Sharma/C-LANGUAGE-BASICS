#include <stdio.h>

int main()
{
    float SI, P, R, T;
    /* SI = SIMPLE INTEREST
     P = PRINCIPAL
     R = ANNUAL INTEREST RATE (in %)
     T = TIME IN YEAR */

    /* P = 1000;
     R = 6 ;
     T = 2 ;
     SI = (P*R*T)/100 ;*/

    printf("Enter the Principal rate:");
    scanf("%f", &P);

    printf("Enter the Rate of interest:");
    scanf("%f", &R);

    printf("Enter the Time for which you have to calculate Simple interest: ");
    scanf("%f", &T);

    printf("The value of Simple insterest is: %f", (P * R * T) / 100);

    return 0;
}