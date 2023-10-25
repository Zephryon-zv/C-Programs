#include <stdio.h>

int fib_recursive(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    else {
        return (fib_recursive(n-1) + fib_recursive(n-2));
    }
}

int fib_iterative(int n) {
    
    int a  = 0;
    int b = 1;

    for (int  i = 0; i < n-1; i ++) {
        b = a + b;  // 1
        a = (a + b) - a;    // 1
    }
    return a;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Using Iterative approach
    printf("The Fibonacci number (iterative approach) of index %d is\n", n);
    printf("%d\n", fib_iterative(n));

   // Using Recursive approach
    printf("The Fibonacci series (recursive approach) upto %d is \n", n);
    printf("%d\n", fib_recursive(n)); 
    return 0;
}