#include<stdio.h>

int main(){
    if(1){
        printf("This number is exicuted!\n");
    }
    if(2345){
        printf("This number is also exicuted!\n");
    }
    if(2.55){
        printf("This float number is also exicuted!\n");
    }
    if('c'){
        printf("This character inside if is also exicuted!\n");
    }
    if(0){
        printf("Zero inside if is not exicuted but all non zero values are exicuted\n");
    }
    return 0;
}