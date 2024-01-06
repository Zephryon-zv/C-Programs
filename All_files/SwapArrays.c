#include <stdio.h>

void Swap_values(int *x, int *y){
    // function for swaping the value by reference
    int temp_x = *y;
    *y = *x;
    *x = temp_x;
}

// void Swap_arrays();

int main(){
    // Program to swap values
    int a = 23;
    int b = 44;

    printf("A = %d, B = %d\n", a,b);
    printf("Address of A = %p, B = %p\n", &a, &b);
    Swap_values(&a, &b);
    printf("A = %d, B = %d", a, b);
    return 0;
}