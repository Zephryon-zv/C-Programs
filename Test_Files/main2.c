#include <stdio.h>

int main () {
    //code
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 5 && age <= 8){
        printf("Hello Kid");
        for (int i = 0; i<=50; i++){
            printf("%d\n", i);
            printf("Hello World\n");
            if (i == 40) {
                printf("Startship\n");
                continue;
                printf("Photons");
            }
        }
    }
    else {
        printf("Hello World!");
    }
    return 0;
}       