#include <stdio.h>

void Swap_operate_values(int *x, int *y) {
  // function for changing the values by reference
  int temp_x = *x + *y;
  *y = *y - *x;
  *x = temp_x;
}

int main (int argc, char *argv[]) {
  int a = 23;
  int b = 44;
  
  printf("The address of a is %p and address of b is %p\n", &a, &b);
  Swap_operate_values(&a, &b);
  printf("a is %d and b is %d\n", a,b);
  return 0;
}
