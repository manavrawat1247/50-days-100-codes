#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i] - 'a']++;

        if (freq[str[i] - 'a'] == 2) {
            printf("%c", str[i]);
            return 0;
        }
    }

    printf("No repeating character");

    return 0;
}