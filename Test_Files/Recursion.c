#include <stdio.h>

int factorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}

int main() {
    int num;

    printf("Enter a non-negative integer for factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
