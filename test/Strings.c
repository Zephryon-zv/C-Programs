#include <stdio.h>

int main() {
    // Initialising strings
    char name[] = "Jai Shri Krishna\n";
    char var[] = {'R', 'o', 'c', 'k', 'e', 't', '\0'};

    printf("%s", name);
    printf("%s ", var);

    // getting input string from user
    char str[34];
    printf("\nEnter a query: ");
    gets(str);

    printf("%s\n", str);      // Prints string
    puts(str);

    return 0;
}