#include <stdio.h>

int main () {
    int marks[2][4] = {{45, 23, 34, 55}, 
                            {3,2,3,3}};
    // for (int i = 0; i < 4; i++) {
    //     printf("Enter the value of %d element of the array: ", i);
    //     scanf("%d", &marks[i]);
    // }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            /* code */
            // printf("The value of %d, %d element of the array %d\n", i,j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    
    // marks[0] = 34;
    // printf("Marks of student 1 is %d\n", marks[0]);
    // marks[0] = 4;
    // marks[1] = 455;
    // marks[2] = 456;
    // marks[3] = 457;
    // marks[4] = 458;
    // printf("Required marks is %d\n", marks[0]);
    return 0;
}