#include <stdio.h>
// function to swap the values
void swap(int *x,int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}


int main () {
  int a = 45;
  int b = 22;

  printf("a is %d and b is %d\n", a, b);
  swap(&a, &b);
  printf("a is %d and b is %d\n", a,b);
  return 0;
}
