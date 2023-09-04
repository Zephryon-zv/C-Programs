#include <stdio.h>

int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int end_num;
    printf("Enter last number: ");
    scanf("%d", &end_num);

    for (int i = 1; i <= end_num; i++){
        printf("%d\n", n*i);
    }
    return 0;
}