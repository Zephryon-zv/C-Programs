#include <stdio.h>

int main () {
    int n;
    do {
        printf("Enter: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 7 == 0) {
            break;
        }
    } while (1); //Always True for 1
    return 0;
}