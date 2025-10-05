#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    

    ptr[0] = 34;
    ptr[1] = 321;
    printf("%d",ptr[1]);
    free(ptr);
    
    return 0;
}