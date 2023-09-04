#include <stdio.h>

int main(){
    int s, n;
    printf("Enter you starting number: ");
    scanf("%d", &s);

    printf("Enter your terminating number: ");
    scanf("%d", &n);

    while (s<=n) {
        printf("%d \n", s);
        s++;
    }
    printf("Thank You!");
    return 0;
}