#include <stdio.h>

enum Colors
{
    RED,
    GREEN,
    BLUE,
    YELLOW
};

int main()
{
    enum Colors color;
    char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};

    for (color = RED; color <= YELLOW; color++)
    {
        printf("%s = %d\n", names[color], color);
    }

    return 0;
}