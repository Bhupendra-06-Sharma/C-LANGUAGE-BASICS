/*6. Attempt problem 4 using calloc(). */
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 10;
    int *ptr;
    ptr = (int *)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&ptr[i]); 
    }

    printf("The array is:\n");

    for (int i = 0; i < n; i++)
    {
       printf("%d\n", ptr[i]); 
    }
    
    free(ptr);
    
    return 0;
}