#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 5;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    // int arr[n]; // Not allowed in c language
    ptr[0] = 34;
    ptr[1] = 321;
    printf("%d", ptr[1]);

    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    return 0;
}