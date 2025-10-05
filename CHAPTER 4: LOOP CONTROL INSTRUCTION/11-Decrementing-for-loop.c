#include<stdio.h>

int main(){
    int i;
    for ( i = 6; i; i--)
    {
       printf("%d\n",i);
    }
    
    return 0;
}
/* This for loop will keep on running until i become 0.

    The loop runs in following steps: 
        1. ‘i’ is initialized to 6. 
        2. The condition “i” (0 or none) is tested. 
        3. The code is executed. 
        4. ‘i’ is decremented. 
        5. Condition ‘i’ is checked & code is executed if it’s not 0. 
        6. And so on until ‘i’ is non 0. */