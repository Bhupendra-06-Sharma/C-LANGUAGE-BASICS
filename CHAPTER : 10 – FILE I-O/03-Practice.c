/*03. Write a program to read a text file character by character and write its content
twice in separate file. */

#include <stdio.h>

int main()
{
    FILE *fread,*fwrite;
    char ch;
    fread = fopen("bhupendra.txt","r");
    if (fread == NULL)
    {
        printf("Error: Cannot open input file! \n");
        return 1;
    }

    fwrite = fopen("raj.txt","w");
    if (fwrite == NULL)
    {
        printf("Error: Cannot open output file! \n");
        return 1;
    }
    while ((ch = fgetc(fread)) != EOF)
    {
        fputc(ch,fwrite);
        fputc(ch,fwrite);
    }
    printf("File content twice successfully to raj.txt\n");
    fclose(fread);
    fclose(fwrite);
    
    return 0;
}