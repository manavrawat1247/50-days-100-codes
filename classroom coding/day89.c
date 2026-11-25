#include <stdio.h>

enum Week
{
    MONDAY = 10,
    TUESDAY,
    WEDNESDAY,
    THURSDAY
};

int main()
{
    enum Week day;

    day = MONDAY;
    printf("Monday = %d\n", day);

    day = TUESDAY;
    printf("Tuesday = %d\n", day);

    day = WEDNESDAY;
    printf("Wednesday = %d\n", day);

    day = THURSDAY;
    printf("Thursday = %d\n", day);

    return 0;
}