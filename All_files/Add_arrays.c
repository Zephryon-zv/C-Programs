#include <stdio.h>

int main() {
    // Program to add matrices
    int fst, lst;
    fst = 2;
    lst = 2;
    printf("\t Program to Add two 2-D matrices\n");
    int a[fst][lst], b[fst][lst], c[fst][lst];

    // Get the matrix A
    printf("Enter matrix A (%d x %d):\n", fst, lst);
    for (int i = 0; i < fst; i++){
        for (int j = 0; j < lst; j++){
            printf("Enter the element at (%d, %d): ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    // Get the matrix B
    printf("Enter matrix B (%d x %d):\n", fst, lst);
    for (int i = 0; i < fst; i++){
        for (int j = 0; j < lst; j++){
            printf("Enter the element at (%d, %d): ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
    // Add two matrices
    printf("Required Output: \n");
    for (int i = 0; i < fst; i++){
        for (int j = 0; j < lst; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d", c[i][j]);
        }
    }

    return 0;
}