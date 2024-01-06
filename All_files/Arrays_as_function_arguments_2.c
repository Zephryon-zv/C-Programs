#include <stdio.h>

int func1(int array[]){
    for (int i = 0; i < 4; i++){
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[2] = 69;      // Change will get reflected in the main array
    return 0;
}

int func2(int* ptr){
    for (int i = 0; i < 4; i++){
        // printf("The value at %d is %d\n", i, ptr[i]);
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    return 0;
}

int main() {
    int arr[] = {2,3,4,5};
    printf("The value at index 2 is %d\n", arr[2]);
    func1(arr);
    printf("The value at index 2 is %d\n", arr[2]);
    printf("\n");

    func2(arr);

    return 0;
}