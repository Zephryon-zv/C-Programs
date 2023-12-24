#include <stdio.h>

void arrayRev(int arrs[], int size){
    // swaping the values in the array
    int a,b,c,d,e,f,g;
    a = arrs[6];
    b = arrs[5];
    c = arrs[4];
    d = arrs[3];
    e = arrs[2];
    f = arrs[1];
    g = arrs[0];
    //printf("\nThe reversed array is:\n (%d, %d, %d, %d, %d, %d, %d)", a,b,c,d,e,f,g);

    // Reversing the array using a loop
    for (int i = 0; i < size; i)

}

int main() {
    // Initializing array
    int arr[] = {1,2,3,4,5,6,89};
    int size = sizeof(arr) / sizeof(arr[0]);
    // printf("The size of array is %d", size);

    printf("The array is :- {");
    for (int i = 0; i < size; i++) {    // This code will add , after each element
        printf("%d", arr[i]);
        if (i < (size-1)) { // here if statement checks whether the element is not last
            printf(", ");
        }
    }
    printf("}\n");
    arrayRev(arr);

    return 0;
}