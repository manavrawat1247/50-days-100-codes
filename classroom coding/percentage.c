#include <stdio.h>
int main()
{
double per;
printf("Enter percentage:");
scanf("%lf",&per);
if(per>=90)
{
printf("Grade A\n");
}
else if(per>=80||per<89)
{
printf("Grade B\n");
}
else if(per>=70||per<79)
{
printf("Grade C\n");
}
else if(per>=60||per<69)
{
printf("Grade D\n");
}
else
{
printf("Grade F\n");
}
}