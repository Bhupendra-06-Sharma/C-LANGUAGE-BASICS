#include <stdio.h>

int main()
{
  int length, breadth;

  printf("Enter the length of rectange: ");
  scanf("%d", &length);

  printf("Enter the breadth of rectangle: ");
  scanf("%d", &breadth);

  printf("The area of a rectangle is %d", length * breadth);
  return 0;
}