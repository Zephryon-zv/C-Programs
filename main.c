#include <stdio.h>

int main() {
    int a = 4;
    int b = 5;
    a = a + b;
    printf("%d \n", a);
    a += b;
    printf("%d \n", a);

    printf("%d \n", 4>3 && 5>2);
    printf("%d \n", 4>3 || 5>23);
    printf("%d \n", !(4>3) && 5>3);
    return 0;
}
