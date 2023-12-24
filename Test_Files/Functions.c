#include <stdio.h>

// Function to calculate the sum of two integers
int sum(int num1, int num2) {
    return num1 + num2;
}

// Function to print a message
void printMessage() {
    printf("This is a function.\n");
}

// Function to get an integer input from the user
int getInput() {
    int number;
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return getInput(); // Recursively ask for input until a valid integer is entered.
    }
    return number;
}

int main() {
    // Declare variables with meaningful names
    int firstNumber = 9;
    int secondNumber = 87;
    int result;

    // Calculate the sum of two numbers
    result = sum(firstNumber, secondNumber);
    printf("The sum of %d and %d is: %d\n", firstNumber, secondNumber, result);

    // Print a message
    printf("Hello World!\n");
    printMessage();

    // Get an integer input from the user
    int userInput = getInput();
    printf("The number entered is: %d\n", userInput);

    return 0;
}
