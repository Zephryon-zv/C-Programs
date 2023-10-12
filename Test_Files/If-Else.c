#include <stdio.h>

int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age > 13 && age <= 35) {
        printf("Teenager\n");
    }

    else if (age >= 35){
        printf("Adult\n");
    }
    else {
        printf("Child\n");
    }

    printf("Hello World!\n");

    age >= 18 ? printf("Adult \n") : printf("Not Adult \n");
    return 0;
}