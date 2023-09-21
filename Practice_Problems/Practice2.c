#include <stdio.h>

int main()
{

    float kmToMiles = 0.621371;
    float inchesToFoot = 0.083333;
    float cmsToInches = 0.393701;
    float poundsToKgs = 0.454;
    float inchToMetres = 0.0254;

    // Basic Intro
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
        printf("Note:\n Don't give unit to values\n");
        for (int i = 0; i < 6; i++)
        {
            printf("%s\n", category[i]);
        }

        // User Input
        char choice;
        printf(">> ");
        scanf("%c", &choice);

        int usr_input;
        printf("\nEnter the value to convert: ");
        scanf("%d", &usr_input);

        // Logic
        switch (choice)
        {
        case 'a':
            printf("%f km is equal to %f miles \n",usr_input * kmToMiles);
            break;
        case 'b':
            printf("%f inch is equal to %f feet \n", usr_input * inchesToFoot);
            break;
        case 'c':
            printf("%f cms is equal to %f inches \n", usr_input * cmsToInches);
            break;
        case 'd':
            printf("%f pounds is equal to %f kgs \n", usr_input * poundsToKgs);
            break;
        case 'e':
            printf("%f inches is equal to %f metres \n", usr_input * inchToMetres);
            break;
        case 'f':
            printf("Thanks for running this Program");
            goto end;
            break;
        
        default:
            break;
        }
    }
end:
    return 0;
}