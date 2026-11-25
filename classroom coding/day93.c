#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s[5];
    int i, highest = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter student %d details\n", i + 1);

        printf("Name: ");
        scanf("%49s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (i = 1; i < 5; i++)
    {
        if (s[i].marks > s[highest].marks)
        {
            highest = i;
        }
    }

    printf("\nStudent with Highest Marks:\n");
    printf("Name: %s\n", s[highest].name);
    printf("Roll Number: %d\n", s[highest].roll_no);
    printf("Marks: %.2f\n", s[highest].marks);

    return 0;
}