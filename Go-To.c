#include <stdio.h>

int main(){
    int num;
    // label:
    //     printf("We are inside label");
    //     goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    //     printf("We are at end.");
    for (int i = 0; i < 8; i++)
    {
        printf("%d",i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number(or enter 0 to exit): ");
            scanf("%d", &num);

            if (num == 0){
                goto end;
            }
        }
        
    }
    end:

    return 0;
}