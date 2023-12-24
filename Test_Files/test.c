#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks(0-100): ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 30)
    {
        printf("FAILURE\nMY SON IS SUCH A FAILURE, HE CAN'T EVEN COOK RICE.");
    }
    else if (marks > 30 && marks <= 100)
    {
        printf("PASS\n");
    }
    else
    {
        printf("WRONG MARKS!");
    }
    // marks >= 30 ? printf("Pass") : printf("Failure");
    int n;
    printf("\nEnter a number => ");
    scanf("%d", &n);
    // for (int i = n; i <= 1; i--){
    //     printf("%d\n", i);
    // }

    for (int i = 1; i <= 10; i++)
    {
        if (i == 8)
        {
            printf("Break");
            break;
        }
        else if (i == 5)
        {
            printf("Break");
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}