#include <stdio.h>

int main () {
    int age;

    printf("Enter you age: ");
    scanf("%d", &age);  //This function takes input and stores the value of the variable
    printf("The required age is: %d \n", age);

    printf("Addition Demo \n");
    int a,b;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b:");
    scanf("%d", &b);

    printf("The sum is: %d", a + b);
    return 0;
}