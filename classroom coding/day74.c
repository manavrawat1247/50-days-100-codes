
#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    char ch;

    // Get filenames from user
    printf("Enter source filename: ");
    scanf("%99s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%99s", destFile);

    // Open source file in read mode
    source = fopen(sourceFile, "r");

    if (source == NULL)
    {
        printf("Error: Source file not found!");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen(destFile, "w");

    if (destination == NULL)
    {
        printf("Error opening destination file!");
        fclose(source);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    // Close both files
    fclose(source);
    fclose(destination);

    printf("File copied successfully!");

    return 0;
}
