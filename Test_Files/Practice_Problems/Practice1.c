// Printing multiplication table
#include <stdio.h>


int main(){
    int num;
    int endnum;
    printf("Enter a number for printing multiplaication table: ");
    scanf("%d", &num);

    printf("Enter the terminating number: ");
    scanf("%d", &endnum);

    printf("Multiplication table of %d is as follows:\n", num);

    for (int i = 1; i <= endnum; i++) {
        printf("%d X %d = %d\n", num, i, num * i);
        // printf("%d X %d = ",num, i);
        // printf("%d\n", num*i);
    }
    
    return 0;
}


