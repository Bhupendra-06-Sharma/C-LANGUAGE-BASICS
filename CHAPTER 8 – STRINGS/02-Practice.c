/*2. Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal. */

#include <stdio.h>

int main()
{
   char st[10];
   // scanf("%s",st);

   for (char i = 0; i < 9; i++)
   {
    scanf("%c", &st[i]);
    fflush(stdin);
   }
   st[9] ='\0';

   printf("%s",st);

    return 0;
}