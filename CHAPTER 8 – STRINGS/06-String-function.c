#include <stdio.h>
#include <string.h>

int main()
{
    // STRLEN(): 
    /*This function is used to count the number of characters in the string excluding the null 
    (‘\0’) characters.*/
    char st[] = "Bhupendra";
    printf("The length of the string is: %d\n", strlen(st));

    // STRCPY() 
    /*This function is used to copy the content of second string into first string passed to it.*/
    char source[] = "Bhupendra";
    char target[30];
    strcpy(target, source); // target now contains "Bhupendra"
    printf("%s,%s\n",source,target);

    // STRCAT()
    /*This function is used to concatenate two strings.*/
    char s1[12] = "Hello";
    char s2[] = " Bhupendra";
    strcat(s1,s2); // s1 now contains "Hello Bhupendra"
    printf("%s\n",s1);

    // STRCMP()
    int a = strcmp("Apple","Deep"); /*Returns negative value because according to (ASCII) value 
                                     the character (A) comes first and then (D) comes  */ 

    int b = strcmp("Apple","Apple");/*Return (0) because both the string ("Apple","Apple") are same*/

    int c = strcmp("Deep","Apple"); // It returns positive value

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);


    return 0;
}