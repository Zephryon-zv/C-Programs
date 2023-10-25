#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "mrinmoy";
    char str2[] = "krishna";
    char str3[34];
    // puts(strcat(str1, str2));
    printf("The length of str1 is %d\n", strlen(str1));
    printf("The length of str2 is %d\n", strlen(str2));
    printf("The reverse string str1 is: ");
    puts(strrev(str1));
    printf("The reverse string str2 is: ");
    puts(strrev(str2));

    strcpy(str3, strcat(str1, str2));
    puts(str3);

    printf("The strcmp for str1 and str2 returned %d", strcmp(str1, str2));

    return 0;
}