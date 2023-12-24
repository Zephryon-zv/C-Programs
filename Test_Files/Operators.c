#include <stdio.h>
#include <math.h>

void var();


int main(){
    /* code */
    int a;
    float b;
    a = 34;
    b = 234.98;

    printf("a + b = %f\n", a+b);
    printf("a - b = %f\n", a-b);
    printf("a * b = %f\n", a*b);
    printf("a / b = %f\n", a/b);

    int x = 23, y = 45;
    printf("The sum is: %d \n", x + y);

    int power = pow(a,b);
    printf("%d \n", power);
    a = 4 + 12 / 6*2;
    printf("The value of a: %d", a);
    return 0;
}

void var(){
    printf("Hello World!");
}

