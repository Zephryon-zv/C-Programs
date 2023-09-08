#include <stdio.h>

int main() {
    /* code */
    int num;

    for (int i = 0; i < 10; i++) {
        /* code */
        // printf("%d", i);
        printf("Enter a number(1-10): ");
        scanf("%d", &num);

        if (num < 0 || num > 10) {   
            printf("Not a valid number!");
            break;
        } 
        else if (num == 8) {
            printf("Hello World!");
            printf("Hello World!");
            printf("Hello World!");
            printf("Hello World!");
            printf("Hello World!");
            continue;
        }
        
    }
    
    return 0;
}
