#include <stdio.h>

enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum Role role;

    role = ADMIN;

    switch (role)
    {
        case ADMIN:
            printf("Welcome Admin! Full access granted.");
            break;

        case USER:
            printf("Welcome User!");
            break;

        case GUEST:
            printf("Welcome Guest! Limited access.");
            break;
    }

    return 0;
}