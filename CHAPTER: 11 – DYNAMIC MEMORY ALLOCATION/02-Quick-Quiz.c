#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n = 5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
   
    ptr[0] = 34.8776;
    ptr[1] = 34.223;
    ptr[2] = 532.56;
    ptr[3] = 123.6543;
    ptr[4] = 486.38855;

    printf("%.2f\n",ptr[0]);
    printf("%.2f\n",ptr[1]);
    printf("%.2f\n",ptr[2]);
    printf("%.2f\n",ptr[3]);
    printf("%.2f\n",ptr[4]);
    
    return 0;
}