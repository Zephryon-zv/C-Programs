#include <stdio.h>

int main () {
    int sum =0, n;
    printf("Enter a number => ");
    scanf("%d",&n);
    // for (int i = 1; i<= n; i++){
    //     sum = sum + i;
    // }
    // printf("The required sum is: %d", sum);

    for (int i = n; i>=1; i--){
        sum = sum + i;
        printf("Hello World");
        printf("%d\n", i);
        printf("%d\n", i);
    }
    
    printf("\nSum is: %d", sum);
    return 0;
}