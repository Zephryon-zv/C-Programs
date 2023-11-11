#include <stdio.h>

void Square(int num) {
  char obj = '*';
  for (int i = 0; i < num; i++) {
    for (int j = 0; j < num; j++) {
      printf("%c , obj");
    }
    printf("\n");
  }
}

int main () {
  int num;
  printf("Enter the number of rows: ");
  scanf("%d", &num);

  // Calling function
  Square(num);
  return 0;
}
