#include <stdio.h>

int main() {
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
    for (int i = 0; i < iterate; i++) {
        printf("Select the following query (1 - 6):- \n");
        char category[6][31] = {
            {"\ta> km to miles"},
            {"\tb> inch to feet"},
            {"\tc> cms to inch"},
            {"\td> pounds to kgs"},
            {"\te> inch to metres"},
            {"\tf> Quit"},
        };
        for (int j = 0; j < 6; j++) {
            printf("%s\n", category[j]);
        }
        
        char choice;
        printf(">> ");
        scanf(" %c", &choice);  // Add a space before %c to consume leading whitespace


        if (choice == 'f') {
            printf("Exiting the Program...");
            goto end;
        }
        
    }
    end:
    return 0;
}