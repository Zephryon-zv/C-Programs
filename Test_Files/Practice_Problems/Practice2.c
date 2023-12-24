#include <stdio.h>

int main()
{
    float kmToMiles = 0.621371;
    float inchesToFoot = 0.083333;
    float cmsToInches = 0.393701;
    float poundsToKgs = 0.454;
    float inchToMetres = 0.0254;

    printf("\t\nWelcome to the Unit Conversion Program!\n");
    int iterate;
    printf("Run time: ");
    scanf("%d", &iterate);

    for (int i = 0; i < iterate; i++)
    {
        printf("Select the following query (1 - 6):- \n");
        char category[6][31] = {
            {"\ta> km to miles"},
            {"\tb> inch to feet"},
            {"\tc> cms to inch"},
            {"\td> pounds to kgs"},
            {"\te> inch to metres"},
            {"\tf> Quit"},
        };

        for (int j = 0; j < 6; j++)
        {
            printf("%s\n", category[j]);
        }

        char choice;
        printf(">> ");
        scanf(" %c", &choice); // Add a space before %c to consume leading whitespace

        if (choice == 'f')
        {
            printf("Exiting the program.\n");
            break; // Exit the loop when 'f' is selected
        }

        else if (choice == 'a')
        {
            float num;
            printf("\nEnter number:- ");
            scanf("%f", &num);
            printf("%f miles\n", num * kmToMiles);
        }

        else if (choice == 'b')
        {
            float num;
            printf("\nEnter number:- ");
            scanf("%f", &num);
            printf("%f ft\n", num * inchesToFoot);
        }

        else if (choice == 'c')
        {
            float num;
            printf("\nEnter number:- ");
            scanf("%f", &num);
            printf("%f inch\n", num * cmsToInches);
        }

        else if (choice == 'd')
        {
            float num;
            printf("\nEnter number:- ");
            scanf("%f", &num);
            printf("%f kgs\n", num * poundsToKgs);
        }

        else if (choice == 'e')
        {
            float num;
            printf("\nEnter number:- ");
            scanf("%f", &num);
            printf("%f metres\n", num * inchToMetres);
        }
    }

    return 0;
}
