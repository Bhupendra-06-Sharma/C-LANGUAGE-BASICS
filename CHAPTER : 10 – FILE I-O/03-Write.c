#include <stdio.h>

int main()
{
    FILE *fptr;

    // fptr = fopen("raj.txt","w"); // When we write anything in the file,first it clear the the file and then write anything in the file

    fptr = fopen("raj.txt", "a");

    int num = 345;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
    
}