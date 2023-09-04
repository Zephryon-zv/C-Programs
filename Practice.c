#include <stdio.h>

int main () {
    // int side;
    // printf("Calculating area of a Square \n");
    // printf("Enter the side: ");
    // scanf("%d", &side);

    // printf("Required area is: %d", side*side);
    
    // float radius;
    // printf("Calculating area of a Circle \n");
    // printf("Enter radius: ");
    // scanf("%f", &radius);
    // printf("Area: %f", 3.14 * radius*radius);
    // return 0;
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    printf("%d \n", x>9 && x<100);

    int y;
    printf("Enter a number: ");
    scanf("%d", &y);
    printf("%d \n", y % 2 == 0);
    return 0;
}