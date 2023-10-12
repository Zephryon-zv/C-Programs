#include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    // Prints address
    printf("%p\n", &age);
    printf("%p\n", &age);

    // Values
    printf("%d\n", _age);
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    return 0;
}