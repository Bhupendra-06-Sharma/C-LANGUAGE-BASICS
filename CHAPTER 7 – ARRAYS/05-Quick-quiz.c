#include<stdio.h>

int main(){
    //POINTER ARITHMETIC USING INTEGER POINTER 

    int a = 5;
    int *ptr = &a;
    int *ptr1 = &a;
    int *ptr2 = &a;
    int *ptr3 = &a;
    int *ptr4 = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++ ; // ptr++ se value is increment by 4 because int datatype take 4 bytes in c language
    printf("The value of ptr is %u\n", ptr);

    ptr1--;
    printf("The value of ptr1 is %u\n", ptr1);
    ptr2+=5;
    printf("The value of ptr2 is %u\n", ptr2);
    ptr3-=5;
    printf("The value of ptr3 is %u\n", ptr3);

    if (ptr4>=ptr2)
    {
       printf("True");
    }
    else if (ptr4<=ptr2)
    {
      printf("false");
    }
    
    

    return 0;
}