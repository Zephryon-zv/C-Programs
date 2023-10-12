#include <stdio.h>

int main () {
    // iterator ; counter
    for (float i=1.0; i<=11.0 ; i++) {
        printf("Hello World!\n");
        printf("%f \n", i);
    }
    printf("\nExamples of loops\n");

    for (char ch='a'; ch<='z'; ch++){
        printf("%c \n", ch);
    }
    return 0;
}