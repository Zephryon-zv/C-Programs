#include <stdio.h>

int sum(int a, int b);  // Declaring Function
void printStar(int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '*');
        printf("_");
    }
    printf("_");
}

int takenumber() {
    int num;
    printf("Enter: ");
    scanf("%d", &num);

    printf("Required number is %d", num);
}


int main() {
    // Functions

    // Printing sum
    int a, b, c;
    a = 9;
    b = 90;
    c = sum(a, b);

    printStar(5);
    printf("The required sum is = %d\n", c);

    takenumber();

    return 0;
}

// Defining function 
int sum(int a, int b) {
    return a + b;
}

