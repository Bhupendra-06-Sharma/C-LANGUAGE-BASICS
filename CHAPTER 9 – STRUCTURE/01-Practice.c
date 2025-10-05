/* 1. Create a two-dimensional vector using structures in C. */
#include<stdio.h>

struct vactor
{
    int i;
    int j;
};

int main(){
    struct vactor v = {1,3};
    printf("The value of vactor is %di + %dj",v.i,v.j);
    return 0;
}