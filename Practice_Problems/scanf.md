# Issues with Scan-f:
Wrong `Unit converter` code (The code below has many potential issues)
```c
#include <stdio.h>

int main() {
    // float kmToMiles = 0.621371;
    // float inchesToFoot = 0.083333;
    // float cmsToInches = 0.393701;
    // float poundsToKgs = 0.454;
    // float inchToMetres = 0.0254;

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
        printf("%s", category);
        printf("Note:\n Don't give unit to values\n");
        for (int i = 0; i < 6; i++) {
            printf("%s\n", category[i]);
            char choice;
            printf(">> ");
            scanf("%c", &choice);
        };
        
    };
    
    return 0;
}
```
>> ## Fixed Problems:-
1. `Array of strings`: You have declared an array of strings `char category[6][31]` to store category names, but you are trying to print the entire array with `%s`, which is not correct. You should print each element of the array individually.

2. `Input of choice`: Inside the inner loop, you are trying to read a character choice with `scanf("%c", &choice)`. This can cause problems because the newline character from the previous input `(scanf("%d", &iterate))` may be read as the choice. To fix this, you can add a space before `%c` to consume any leading whitespace, including the newline character.

3. `Unused conversion constants`: You have commented out a set of conversion constants (e.g., kmToMiles, inchesToFoot) at the beginning of main, but you haven't used them in your code. If you plan to use these constants for conversions later in your program, you should uncomment them and use them as needed.

4. `Missing 'Quit' functionality`: You have an option `'f'` for Quit, but there is no code to handle the Quit option. You need to add logic to break out of the loop when `'f'` is selected.

> Here's an improved version of your code with these issues addressed:-
```c
#include <stdio.h>

int main() {
    // Uncomment these if you plan to use them later
    // float kmToMiles = 0.621371;
    // float inchesToFoot = 0.083333;
    // float cmsToInches = 0.393701;
    // float poundsToKgs = 0.454;
    // float inchToMetres = 0.0254;

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
        scanf(" %c", &choice); // Add a space before %c to consume leading whitespace
        
        if (choice == 'f') {
            printf("Exiting the program.\n");
            break; // Exit the loop when 'f' is selected
        }
    }

    return 0;
}
```

## Explanations:

Adding a whitespace character before %c in the scanf statement, like this: scanf(" %c", &choice);, is done to consume any leading whitespace characters (including newline characters) left in the input buffer from previous input operations.

When you use scanf to read a character, it reads the next character from the input, which includes whitespace characters like spaces, tabs, and newline characters. If there are any newline characters or spaces left in the input buffer from previous scanf calls (for example, when you read an integer with scanf("%d", &iterate)), they can interfere with reading the character choice because scanf will read the first non-whitespace character it encounters, which might not be the character you intend to read.

By adding a whitespace character before %c, you tell scanf to skip any leading whitespace characters before reading the actual character. This ensures that scanf reads the character choice you enter and doesn't get affected by any leftover whitespace characters.

So, it's a common practice to include the whitespace character before %c when reading characters to avoid such issues in your input processing.
