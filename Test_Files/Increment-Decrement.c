#include <stdio.h>

int main () {
    //increment operator
    // ++i (pre-increment)
    // i++ (post-increment)

    int i=1;
    printf("Increment Operator\n");
    printf("Post-Increment\n");
    printf("%d \n", i++); //use, then increase
    printf("%d \n", i);

    printf("Pre-Increment\n");
    printf("%d \n", ++i); //increase, then use
    printf("%d \n", i);

    //decrement operator
    //--i (pre-decrement)
    //i-- (post-decrement)
    printf("Decrement Operator\n");
    printf("Post-Increment\n");
    printf("%d \n", i--); //use, then decrease
    printf("%d \n", i);

    printf("Pre-Increment\n");
    printf("%d \n", --i); //decrease, then use
    printf("%d \n", i);
    return 0;
}