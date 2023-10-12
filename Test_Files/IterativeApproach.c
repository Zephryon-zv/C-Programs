#include <stdio.h>

int factorial(int number) {
    if (number < 0) {
        return -1; // Handle negative input as an error
    }

    int result = 1;

    for (int i = 1; i <= number; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int num;

    printf("Enter a non-negative integer for factorial: ");
    scanf("%d", &num);

    int result = factorial(num);

    if (result == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is %d\n", num, result);
    }

    return 0;
}
