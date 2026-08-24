#include <stdio.h>
#define pi 3.14159
int main() 
{
    float radius, area, circum;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = pi* radius * radius;
    circum= 2 * pi * radius;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circum);
}