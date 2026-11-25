#include <stdio.h>

enum Months
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main()
{
    enum Months month;
    int days;

    for (month = JANUARY; month <= DECEMBER; month++)
    {
        switch (month)
        {
            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                days = 30;
                break;

            case FEBRUARY:
                days = 28;
                break;

            default:
                days = 31;
        }

        printf("Month %d has %d days\n", month, days);
    }

    return 0;
}