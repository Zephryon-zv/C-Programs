#include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    //address
    printf("%d\n", _age);  //Prints the previous value of age from pointer ptr
    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    printf("%p\n", &ptr);
    return 0;
}
