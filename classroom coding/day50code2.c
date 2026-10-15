#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Print all sub-strings
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i; str[j] != '\0' && str[j] != '\n'; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf(",");
        }
    }

    printf("\n");
    return 0;
    
}