#include <stdio.h>
int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Print the initials
    for (int i = 0; name[i] != '\0'; i++) {
        // Check if the character is the first letter of a word
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c.", name[i]);
        }
    }

    printf("\n");
    return 0;
    
}