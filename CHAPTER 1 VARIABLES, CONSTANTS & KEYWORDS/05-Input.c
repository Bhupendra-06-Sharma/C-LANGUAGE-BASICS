#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    /*
     scanf is syntax which is used to take input from the user like scanf("%d", &i);
     where ‘&’ is the “address  of” operator and it means that the supplied value
     should be copied to the address which is indicated by variable i.
     */
    printf(" The output of this code is %d", a);
    return 0;
}