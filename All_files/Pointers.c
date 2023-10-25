#include <stdio.h>

int main() {
    // Pointers
    int num = 49;
    int *ptr = &num;

    // Prints the address of pointer ptr
    printf("The address of pointer ptr: %p\n", &ptr);

    printf("The address of num: %p\n", ptr);    // Prints memory address of variable num
    printf("The address of num: %p\n", &num);

    // Printing values using pointer variable
    printf("The value of num: %d\n", *ptr);
    printf("The value of num: %d\n", num);

    // Null Pointer
    int *ptrs = NULL;
    int *ptrss;
    printf("The address of NULL pointer: %p\n", ptrs);
    printf("The address of NULL pointer: %p", ptrss);

    return 0;
}