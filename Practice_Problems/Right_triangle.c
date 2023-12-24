#include <stdio.h>

void Right_triangle(int num);

int main() {
  
  int num;
  printf("Enter the number of rows: ");
  scanf("%d", &num);

  Right_triangle(num);
  return 0;
}

void Right_triangle(int num) {
  char obj = ' ';
  char star = '*';
  for (int i = 0; i < num; i++) {
    for (int j = num; j > i; j--) {
      printf("%c ", obj);
    }
    for (int k = 0; k <= i; k++){
      printf("%c ", star);
    }
    for (int l = 0; l < i; l++) {
      printf("%c ", star);
    }
    printf("\n");
    for (int m = 0; m < i; m++) {
      printf("%c ", obj);
    }
    for (int n = 0; n > i; n--) {
      printf("# ");
    }

    printf("\n");
  }
}
