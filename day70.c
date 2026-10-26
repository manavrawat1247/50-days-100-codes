
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[500];
    int i, newWord = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            newWord = 1;
        } else if (newWord) {
            str[i] = toupper((unsigned char)str[i]);
            newWord = 0;
        }
    }

    printf("Converted string: %s", str);

    return 0;
}
