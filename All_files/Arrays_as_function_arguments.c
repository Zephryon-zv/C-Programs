#include <stdio.h>

void func1(int array[]) {
    for (int i = 0; i < 4; i++) {
        printf("The value at %d is %d\n",i, array[i]);
    }
    array[0] = 3456;    // Change will get reflected in the main array
}

void func2 (int *ptr) {
    for (int i = 0; i < 4; i++) {
        printf("The value at %d is %d\n", i, *(ptr + i));
        printf("The value at %d is %d\n", i, ptr[i]);
    }
    *(ptr + 2) = 456;
}

void func3(int arrays[2][4]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++){
            printf("The value at %d, %d is %d\n",i,j, arrays[i][j]);
        }
    }
}

int main() {
    int arr[] = {23,34,65,76};
    int arrs[][4] = {{1,2,3,4}, 
                    {5,6,7,8}};
    func1(arr);
    printf("\n");
    func2(arr);
    printf("\n");
    func3(arrs);
    return 0;
}