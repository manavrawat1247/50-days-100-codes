
#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    printf("Enter your name: ");
    scanf(" %99[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("Data saved successfully.\n");

    return 0;
}
