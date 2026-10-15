#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0, flag = 1;

    scanf("%s", str);

    while (str[length] != '\0')
        length++;

    i = 0;
    j = length - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}