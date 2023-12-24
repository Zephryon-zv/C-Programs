#include <stdio.h>

int Fib_iterative(int num) {
    if (num == 1 || num == 2) {
        return 1;
    }
    else if (num < 0) {
        return -1;
    }
    else {
        int fib1 = 0;
        int fib2 = 1;
        int fibnum;

        for (int i = 2; i <= num; i++){
            fibnum = fib1 + fib2;
            fib1 = fib2;
            fib2 = fibnum;
        }
        return fibnum;
    }
}

int Fib_recursive(int num) {
    if (num == 1 || num == 2) {
        return 1;
    }
    else if (num < 0) {
        return -1;  // Handle invalid input
    }
    else {
        int Fib_num = Fib_recursive(num-1) + Fib_recursive(num-2);
        return Fib_num;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid input: Please enter a positive integer.\n");
        return 1; // Indicate an error by returning a non-zero value
    }

    printf("Fibonacci number at position (Iterative) %d: %d\n", num, Fib_iterative(num));
    printf("Fibonacci number at position (Recursive) %d: %d\n", num, Fib_recursive(num));

    return 0;
}
