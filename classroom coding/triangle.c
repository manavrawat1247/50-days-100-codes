#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter three sides of triangle:");
scanf("%d %d %d",&a,&b,&c);
if (a == b &&b == c)
{
printf("equilateral triangle\n");
}
else if (a == b||b == c||a == c)
{
printf ("isosceles triangle\n");
}
else 
{
printf ("scalene triangle\n");
}}