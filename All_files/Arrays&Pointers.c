#include <stdio.h>

int main() {
    // Pointer Arithmetic

    // int i = 2;
    // printf("Size of int %d is: %d\n", i, sizeof(i) );

    // int a = 34;
    // int *ptr = &a;
    // printf("%p\n", ptr);
    // printf("%p\n", ptr + 2);

    // char b = '3';
    // char *ptrb = &b;
    // printf("%d\n", ptrb);
    // ptrb--;
    // printf("%d\n", ptrb);
    // printf("%d\n", ptrb - 2);

    // Pointer Array
    int arr[] = {1,2,3,4,5,6,7};
    int *arrptr = arr;
    printf("The value at position 3of the array: %d\n", arr[0]);
    printf("The address of the first element of the array: %d\n", arr);
    printf("The address of the first element of the array: %d\n", &arr[0]);
    printf("The address of the first element of the array: %d\n", &arr[1]);
    printf("The address of the first element of the array: %d\n", arr + 1);
    arrptr++;

    printf("The value at address of the first element of the array: %d\n", *(arr));
    printf("The value at address of the first element of the array: %d\n", *(&arr[0]));
    printf("The value at address of the first element of the array: %d\n", *(&arr[1]));
    printf("The value at address of the first element of the array: %d\n", *(arr + 1));
    
    return 0;
}
