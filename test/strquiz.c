#include <stdio.h>
#include <string.h>

int main() {
    char s1[23];
    char s2[34];
    char s3[34];

    printf("Enter query: ");
    gets(s1);
    printf("Enter query(again): ");
    gets(s2);

    printf("%s is a friend of %s\n", s1, s2);
    printf("Concatinating the names: ");
    strcpy(s3, strcat(s1, s2));
    puts(s3);

    return 0;
}