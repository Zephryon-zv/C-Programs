#include <stdio.h>

void StarPattern(int count_rows) {
    char obj = '*';
    for (int i = 0; i <= count_rows; i++) {
        for (int j = 0; j <= count_rows; j++) {
            printf("%c", obj);
        }
        printf(" \n");
    }
}

int main() {
    // Star Pattern
    int count_rows;
    printf("Enter the number rows: ");
    scanf("%d", &count_rows);

    StarPattern(count_rows);

    return 0;
}