#include <stdio.h>

int main () {
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase.\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    }
    else {
        printf("Not english letter!");
    }
    return 0;
}