
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0, hasContent = 0, lastChar = '\0';

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        hasContent = 1;
        lastChar = ch;

        if (ch == '\n') {
            lines++;
        }

        if (isspace((unsigned char)ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    if (hasContent && lastChar != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}
