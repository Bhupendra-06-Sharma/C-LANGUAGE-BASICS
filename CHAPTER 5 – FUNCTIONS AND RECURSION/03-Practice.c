/*3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
earth. Consider g = 9.8m/s2 */

#include<stdio.h>

float force(float m,float g); // Function Prototype


// Function defination
float force(float m,float g){
    return(m*g);
}

int main(){
    float m = 66;
    float g = 9.8;
    printf("The force of attraction on a body of mass m exerted by earth is %.2f",force(m,g));    
    return 0;
}