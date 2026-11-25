#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopper(struct Student s[], int n)
{
    int i, highest = 0;

    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[highest].marks)
        {
            highest = i;
        }
    }

    return s[highest];
}

int main()
{
    struct Student s[5], topper;
    int i;

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

    topper = findTopper(s, 5);

    printf("\nTopper Details:\n");
    printf("Name: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}