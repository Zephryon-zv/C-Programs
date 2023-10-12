#include <stdio.h>

int Factorial(int num) {
    if (num == 1 || num == 0) {
        return 1;
    }

    else {
        return (num * Factorial(num-1));
    }
}

int main () {
    // Factorial Program
    printf("#########################\nFactorial Program\n#########################\n");
    printf("\nEnter a number: ");
    int num;
    scanf("%d", &num);
    printf("Required factorial is: %d", Factorial(num));

    return 0;
}